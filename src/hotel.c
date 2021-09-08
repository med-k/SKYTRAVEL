#include <stdlib.h>
#include <string.h>
#include "hotel.h"
#include <time.h>
#include <gtk/gtk.h>


enum
{
  ID,
  NAME_HOTEL,
  CITY,
  DATE_DEPART,
  DATE_FIN,
  STARS,
  SERVICE,
  PRICE,
  CAPACITY,
  COLUMNS
};


void afficher_hotel(GtkWidget *liste)
{
GtkCellRenderer *renderer;
GtkTreeViewColumn *column;
GtkTreeIter iter;
GtkListStore *store;

char id[5];
char name_hotel[50];
char city[50];
char date_depart[20];
char date_fin[20];
char stars[30];
char service[20];
char price[20];
char capacity[5];

store=NULL;

FILE  *f;

store=gtk_tree_view_get_model(liste);

  if(store==NULL)
  {
   renderer=gtk_cell_renderer_text_new();
   column=gtk_tree_view_column_new_with_attributes(" id ",renderer,"text",ID,NULL);
   gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

   renderer=gtk_cell_renderer_text_new();
   column=gtk_tree_view_column_new_with_attributes("  	 name hotel/    ",renderer,"text",NAME_HOTEL,NULL);
   gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

   renderer=gtk_cell_renderer_text_new();
   column=gtk_tree_view_column_new_with_attributes("  	  city/     ",renderer,"text",CITY,NULL);
   gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

   renderer=gtk_cell_renderer_text_new();
   column=gtk_tree_view_column_new_with_attributes(" date depart ",renderer,"text",DATE_DEPART,NULL);
   gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

   renderer=gtk_cell_renderer_text_new();
   column=gtk_tree_view_column_new_with_attributes(" date fin ",renderer,"text",DATE_FIN,NULL);
   gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

   renderer=gtk_cell_renderer_text_new();
   column=gtk_tree_view_column_new_with_attributes("stars",renderer,"text",STARS,NULL);
   gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

   renderer=gtk_cell_renderer_text_new();
   column=gtk_tree_view_column_new_with_attributes(" service ",renderer,"text",SERVICE,NULL);
   gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

   renderer=gtk_cell_renderer_text_new();
   column=gtk_tree_view_column_new_with_attributes(" price ",renderer,"text",PRICE,NULL);
   gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

   renderer=gtk_cell_renderer_text_new();
   column=gtk_tree_view_column_new_with_attributes(" capacity ",renderer,"text",CAPACITY,NULL);
   gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

   store=gtk_list_store_new(COLUMNS,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,
G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING);

f=fopen("/home/radhouan/Projects/projet-c-radhouan/DATA_BASE/hotel.txt","r");

     if(f!=NULL)
        {
         while(fscanf(f,"%s %s %s %s %s %s %s %s %s",id,name_hotel,city,date_depart,date_fin,stars,service,price,capacity)!=EOF)
          {
           gtk_list_store_append(store,&iter);
           gtk_list_store_set(store,&iter,ID,id,NAME_HOTEL,name_hotel,CITY,city,DATE_DEPART,date_depart,DATE_FIN,date_fin,
STARS,stars,SERVICE,service,PRICE,price,CAPACITY,capacity,-1);
          }
        }
   fclose(f);
   gtk_tree_view_set_model(GTK_TREE_VIEW(liste),GTK_TREE_MODEL(store));
   g_object_unref(store);  
   }
}

int verifier_date_hotel(char A[],char B[],char C[])
{
int x=atoi(A),y=atoi(B),z=atoi(C);
  if( (y==2 && x>29 ) || (y==2 && (z%4!=0) && x>28) ) 
   {
    return 1;
   }
return 0;
}

int verifier_date_fin_hotel(char A[],char B[],char C[],char E[],char F[],char G[])
{
int a=atoi(A),b=atoi(B),c=atoi(C),e=atoi(E),f=atoi(F),g=atoi(G);

if(g<c || (g<=c && f<b) || (g<=c && f<=b && e==a)  )
{
return 1;
}
return 0;
}

int verifier_champ_hotel(hotel h)
{
if(strlen(h.name_hotel)==0)
    {
     return  1;
    }
  if(strlen(h.city)==0)
    {
     return  1;
    }
  if(strlen(h.date_depart)==0)
    {
     return  1;
    }
  if(strlen(h.date_fin)==0)
    {
     return  1;
    }
  if(strlen(h.stars)==0)
    {
     return  1;
    }
  if(strlen(h.price)==0)
    {
     return  1;
    }
   if(strlen(h.capacity)==0)
    {
     return  1;
    }
return 0;
}

hotel identifiant_hotel(hotel h)
{
int z=0,l;
hotel y;
FILE *f;
f=fopen("/home/radhouan/Projects/projet-c-radhouan/DATA_BASE/hotel.txt","r");
srand(time(NULL));
  while(z==0)
   {
    z=1;
    l=rand()%100;
    sprintf(h.id,"%d",l);
      while(fscanf(f,"%s %s %s %s %s %s %s %s %s",y.id,y.name_hotel,y.city,y.date_depart,y.date_fin,y.stars,y.service,y.price,y.capacity)!=EOF)
        {
          if(strcmp(h.id,y.id)==0)
           {
            z=0;
            break;
           }
         }
    }
fclose(f);
return h ;
}

void ajouter_hotel(hotel h)
{
FILE *f;
f=fopen("/home/radhouan/Projects/projet-c-radhouan/DATA_BASE/hotel.txt","a+");
  if(f!=NULL)
   {
   fprintf(f,"%s %s %s %s %s %s %s %s %s \n",h.id,h.name_hotel,h.city,h.date_depart,h.date_fin,h.stars,h.service,h.price,h.capacity);
   }
fclose(f);
}

void supprimer_hotel(hotel h)
{
hotel y;
FILE *f1,*f2;
f1=fopen("/home/radhouan/Projects/projet-c-radhouan/DATA_BASE/hotel.txt","r");
f2=fopen("/home/radhouan/Projects/projet-c-radhouan/DATA_BASE/Aux.txt","a+");
while(fscanf(f1,"%s %s %s %s %s %s %s %s %s",y.id,y.name_hotel,y.city,y.date_depart,y.date_fin,y.stars,y.service,y.price,y.capacity)!=EOF)
   {
     if(strcmp(h.id,y.id)!=0)
      {
      fprintf(f2,"%s %s %s %s %s %s %s %s %s \n",y.id,y.name_hotel,y.city,y.date_depart,y.date_fin,y.stars,y.service,y.price,y.capacity);
      } 
   }
fclose(f1);
fclose(f2);
remove("/home/radhouan/Projects/projet-c-radhouan/DATA_BASE/hotel.txt");
rename("/home/radhouan/Projects/projet-c-radhouan/DATA_BASE/Aux.txt","/home/radhouan/Projects/projet-c-radhouan/DATA_BASE/hotel.txt");
}

void modifier_hotel(hotel h)
{
hotel y;
FILE *f1,*f2;
f1=fopen("/home/radhouan/Projects/projet-c-radhouan/DATA_BASE/hotel.txt","r");
f2=fopen("/home/radhouan/Projects/projet-c-radhouan/DATA_BASE/Aux.txt","a+");
while(fscanf(f1,"%s %s %s %s %s %s %s %s %s",y.id,y.name_hotel,y.city,y.date_depart,y.date_fin,y.stars,y.service,y.price,y.capacity)!=EOF)
   {
     if(strcmp(h.id,y.id)==0)
      {
       y=h;
      } 
   fprintf(f2,"%s %s %s %s %s %s %s %s %s \n",y.id,y.name_hotel,y.city,y.date_depart,y.date_fin,y.stars,y.service,y.price,y.capacity);
   }
fclose(f1);
fclose(f2);
remove("/home/radhouan/Projects/projet-c-radhouan/DATA_BASE/travels.txt");
rename("/home/radhouan/Projects/projet-c-radhouan/DATA_BASE/Aux.txt","/home/radhouan/Projects/projet-c-radhouan/DATA_BASE/hotel.txt");
}
