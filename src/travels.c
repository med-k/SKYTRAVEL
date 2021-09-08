#include <stdlib.h>
#include <string.h>
#include "travels.h"
#include <time.h>
#include <gtk/gtk.h>

enum
{
  ID,
  FROM,
  TO,
  DATE_DEPART,
  DATE_RETURN,
  NAME_HOTEL,
  SERVICE,
  PRICE,
  CAPACITY,
  COLUMNS
};

void afficher_travels(GtkWidget *liste)
{
GtkCellRenderer *renderer;
GtkTreeViewColumn *column;
GtkTreeIter iter;
GtkListStore *store;

char id[5];
char from[50];
char to[50];
char date_depart[20];
char date_return[20];
char name_hotel[30];
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
   column=gtk_tree_view_column_new_with_attributes("  	 from/    ",renderer,"text",FROM,NULL);
   gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

   renderer=gtk_cell_renderer_text_new();
   column=gtk_tree_view_column_new_with_attributes("  	  to/     ",renderer,"text",TO,NULL);
   gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

   renderer=gtk_cell_renderer_text_new();
   column=gtk_tree_view_column_new_with_attributes(" date depart ",renderer,"text",DATE_DEPART,NULL);
   gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

   renderer=gtk_cell_renderer_text_new();
   column=gtk_tree_view_column_new_with_attributes(" date return ",renderer,"text",DATE_RETURN,NULL);
   gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

   renderer=gtk_cell_renderer_text_new();
   column=gtk_tree_view_column_new_with_attributes("nomt hotel",renderer,"text",NAME_HOTEL,NULL);
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

f=fopen("/home/radhouan/Projects/projet-c-radhouan/DATA_BASE/travels.txt","r");

     if(f!=NULL)
        {
         while(fscanf(f,"%s %s %s %s %s %s %s %s %s",id,from,to,date_depart,date_return,name_hotel,service,price,capacity)!=EOF)
          {
           gtk_list_store_append(store,&iter);
           gtk_list_store_set(store,&iter,ID,id,FROM,from,TO,to,DATE_DEPART,date_depart,DATE_RETURN,date_return,
NAME_HOTEL,name_hotel,SERVICE,service,PRICE,price,CAPACITY,capacity,-1);
          }
        }
   fclose(f);
   gtk_tree_view_set_model(GTK_TREE_VIEW(liste),GTK_TREE_MODEL(store));
   g_object_unref(store);  
   }
}

int verifier_date_travel(char A[],char B[],char C[])
{
int x=atoi(A),y=atoi(B),z=atoi(C);
  if( (y==2 && x>29 ) || (y==2 && (z%4!=0) && x>28) ) 
   {
    return 1;
   }
return 0;
}

int verifier_champ_travel(Travels t)
{
  if(strlen(t.from)==0)
    {
     return  1;
    }
  if(strlen(t.to)==0)
    {
     return  1;
    }
  if(strlen(t.date_depart)==0)
    {
     return  1;
    }
  if(strlen(t.date_return)==0)
    {
     return  1;
    }
  if(strlen(t.name_hotel)==0)
    {
     return  1;
    }
  if(strlen(t.price)==0)
    {
     return  1;
    }
   if(strlen(t.capacity)==0)
    {
     return  1;
    }
return 0;
}

int verifier_date_return_travel(char A[],char B[],char C[],char E[],char F[],char G[])
{
int a=atoi(A),b=atoi(B),c=atoi(C),e=atoi(E),f=atoi(F),g=atoi(G);

if(g<c || (g<=c && f<b) || (g<=c && f<=b && e==a)  )
{
return 1;
}
return 0;
}

Travels identifiant_travel(Travels t)
{
int z=0,l;
Travels y;
FILE *f;
f=fopen("/home/radhouan/Projects/projet-c-radhouan/DATA_BASE/travels.txt","r");
srand(time(NULL));
  while(z==0)
   {
    z=1;
    l=rand()%100;
    sprintf(t.id,"%d",l);
      while(fscanf(f,"%s %s %s %s %s %s %s %s %s",y.id,y.from,y.to,y.date_depart,y.date_return,y.name_hotel,y.service,y.price,y.capacity)!=EOF)
        {
          if(strcmp(t.id,y.id)==0)
           {
            z=0;
            break;
           }
         }
    }
fclose(f);
return t ;
}

void ajouter_travel(Travels t)
{
FILE *f;
f=fopen("/home/radhouan/Projects/projet-c-radhouan/DATA_BASE/travels.txt","a+");
  if(f!=NULL)
   {
   fprintf(f,"%s %s %s %s %s %s %s %s %s \n",t.id,t.from,t.to,t.date_depart,t.date_return,t.name_hotel,t.service,t.price,t.capacity);
   }
fclose(f);
}

void supprimer_travel(Travels t)
{
Travels y;
FILE *f1,*f2;
f1=fopen("/home/radhouan/Projects/projet-c-radhouan/DATA_BASE/travels.txt","r");
f2=fopen("/home/radhouan/Projects/projet-c-radhouan/DATA_BASE/Aux.txt","a+");
while(fscanf(f1,"%s %s %s %s %s %s %s %s %s",y.id,y.from,y.to,y.date_depart,y.date_return,y.name_hotel,y.service,y.price,y.capacity)!=EOF)
   {
     if(strcmp(t.id,y.id)!=0)
      {
      fprintf(f2,"%s %s %s %s %s %s %s %s %s \n",y.id,y.from,y.to,y.date_depart,y.date_return,y.name_hotel,y.service,y.price,y.capacity);
      } 
   }
fclose(f1);
fclose(f2);
remove("/home/radhouan/Projects/projet-c-radhouan/DATA_BASE/travels.txt");
rename("/home/radhouan/Projects/projet-c-radhouan/DATA_BASE/Aux.txt","/home/radhouan/Projects/projet-c-radhouan/DATA_BASE/travels.txt");
}

void division_chaine(char A[],char B[])
{
int n=strlen(A),i,j,k=0;
  for(i=0;i<n;i++)
   {
     if(A[i]==47)
       {
         for(j=i+1;j<=n;j++)
           {
             B[k]=A[j];
             k++;
           }
         for(j==n;j>i;j--)
           {
             A[j-1]=A[j];
           }
        break;      
       }
   }
}

void modifier_travel(Travels t)
{
Travels y;
FILE *f1,*f2;
f1=fopen("/home/radhouan/Projects/projet-c-radhouan/DATA_BASE/travels.txt","r");
f2=fopen("/home/radhouan/Projects/projet-c-radhouan/DATA_BASE/Aux.txt","a+");
while(fscanf(f1,"%s %s %s %s %s %s %s %s %s",y.id,y.from,y.to,y.date_depart,y.date_return,y.name_hotel,y.service,y.price,y.capacity)!=EOF)
   {
     if(strcmp(t.id,y.id)==0)
      {
       y=t;
      } 
   fprintf(f2,"%s %s %s %s %s %s %s %s %s \n",y.id,y.from,y.to,y.date_depart,y.date_return,y.name_hotel,y.service,y.price,y.capacity);
   }
fclose(f1);
fclose(f2);
remove("/home/radhouan/Projects/projet-c-radhouan/DATA_BASE/travels.txt");
rename("/home/radhouan/Projects/projet-c-radhouan/DATA_BASE/Aux.txt","/home/radhouan/Projects/projet-c-radhouan/DATA_BASE/travels.txt");
}
