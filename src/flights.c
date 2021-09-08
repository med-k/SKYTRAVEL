#include <stdlib.h>
#include <string.h>
#include "flights.h"
#include <time.h>
#include <gtk/gtk.h>

enum
{
  ID,
  FROM,
  TO,
  DATE_DEPART,
  TIME_DEPART,
  DATE_RETURN,
  TIME_RETURN,
  AIRLINE,
  TYPE,
  PRICE,
  CAPACITY,
  COLUMNS
};

void afficher_vols(GtkWidget *liste)
{
GtkCellRenderer *renderer;
GtkTreeViewColumn *column;
GtkTreeIter iter;
GtkListStore *store;

char id[5];
char from[30];
char to[30];
char date_depart[20];
char time_depart[10];
char date_return[20];
char time_return[10];
char airline[30];
char type[30];
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
   column=gtk_tree_view_column_new_with_attributes(" time depart ",renderer,"text",TIME_DEPART,NULL);
   gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

   renderer=gtk_cell_renderer_text_new();
   column=gtk_tree_view_column_new_with_attributes(" date return ",renderer,"text",DATE_RETURN,NULL);
   gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

   renderer=gtk_cell_renderer_text_new();
   column=gtk_tree_view_column_new_with_attributes(" time return ",renderer,"text",TIME_RETURN,NULL);
   gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

   renderer=gtk_cell_renderer_text_new();
   column=gtk_tree_view_column_new_with_attributes(" airline ",renderer,"text",AIRLINE,NULL);
   gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

   renderer=gtk_cell_renderer_text_new();
   column=gtk_tree_view_column_new_with_attributes(" type ",renderer,"text",TYPE,NULL);
   gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

   renderer=gtk_cell_renderer_text_new();
   column=gtk_tree_view_column_new_with_attributes(" price ",renderer,"text",PRICE,NULL);
   gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

   renderer=gtk_cell_renderer_text_new();
   column=gtk_tree_view_column_new_with_attributes(" capacity ",renderer,"text",CAPACITY,NULL);
   gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

   store=gtk_list_store_new(COLUMNS,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,
G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING);

f=fopen("/home/radhouan/Projects/projet-c-radhouan/DATA_BASE/flights.txt","r");

     if(f!=NULL)
        {
         while(fscanf(f,"%s %s %s %s %s %s %s %s %s %s %s",id,from,to,date_depart,time_depart,date_return,time_return,airline,type,price,capacity)!=EOF)
          {
           gtk_list_store_append(store,&iter);
           gtk_list_store_set(store,&iter,ID,id,FROM,from,TO,to,DATE_DEPART,date_depart,TIME_DEPART,time_depart,DATE_RETURN,date_return,TIME_RETURN,time_return,
AIRLINE,airline,TYPE,type,PRICE,price,CAPACITY,capacity,-1);
          }
        }
   fclose(f);
   gtk_tree_view_set_model(GTK_TREE_VIEW(liste),GTK_TREE_MODEL(store));
   g_object_unref(store);  
   }
}

void ajouter_vol(Vols v)
{
FILE *f;
f=fopen("/home/radhouan/Projects/projet-c-radhouan/DATA_BASE/flights.txt","a+");
  if(f!=NULL)
   {
   fprintf(f,"%s %s %s %s %s %s %s %s %s %s %s\n",v.id,v.from,v.to,v.date_depart,v.time_depart,v.date_return,v.time_return,v.airline,v.type,v.price,v.capacity);
   }
fclose(f);
}

Vols identifiant_vol(Vols v)
{
int z=0,l;
Vols y;
FILE *f;
f=fopen("/home/radhouan/Projects/projet-c-radhouan/DATA_BASE/flights.txt","r");
srand(time(NULL));
  while(z==0)
   {
    z=1;
    l=rand()%100;
    sprintf(v.id,"%d",l);
      while(fscanf(f,"%s %s %s %s %s %s %s %s %s %s %s \n",y.id,y.from,y.to,y.date_depart,y.time_depart,y.date_return,y.time_return,y.airline,y.type,y.price,y.capacity)!=EOF)
        {
          if(strcmp(v.id,y.id)==0)
           {
            z=0;
            break;
           }
         }
    }
fclose(f);
return v ;
}

int verifier_date_vol(char A[],char B[],char C[])
{
int x=atoi(A),y=atoi(B),z=atoi(C);
  if( (y==2 && x>29 ) || (y==2 && (z%4!=0) && x>28) ) 
   {
    return 1;
   }
return 0;
}

int verifier_date_return_vol(char A[],char B[],char C[],char E[],char F[],char G[])
{
int a=atoi(A),b=atoi(B),c=atoi(C),e=atoi(E),f=atoi(F),g=atoi(G);

if(g<c || (g<=c && f<b) || (g<=c && f<=b && e==a)  )
{
return 1;
}
return 0;
}

int verifier_champ_vol(Vols v)
{
  if(strlen(v.from)==0)
    {
     return  1;
    }
  if(strlen(v.to)==0)
    {
     return  1;
    }
  if(strlen(v.date_depart)==0)
    {
     return  1;
    }
  if(strlen(v.time_depart)==0)
    {
     return  1;
    }
  if(strlen(v.date_return)==0)
    {
     return  1;
    }
  if(strlen(v.time_return)==0)
    {
     return  1;
    }
  if(strlen(v.airline)==0)
    {
     return  1;
    }
  if(strlen(v.type)==0)
    {
     return  1;
    }
  if(strlen(v.price)==0)
    {
     return  1;
    }
   if(strlen(v.capacity)==0)
    {
     return  1;
    }
return 0;
}

void supprimer_vol(Vols v)
{
Vols y;
FILE *f1,*f2;
f1=fopen("/home/radhouan/Projects/projet-c-radhouan/DATA_BASE/flights.txt","r");
f2=fopen("/home/radhouan/Projects/projet-c-radhouan/DATA_BASE/Aux.txt","a+");
while(fscanf(f1,"%s %s %s %s %s %s %s %s %s %s %s",y.id,y.from,y.to,y.date_depart,y.time_depart,y.date_return,y.time_return,y.airline,y.type,y.price,y.capacity)!=EOF)
   {
     if(strcmp(v.id,y.id)!=0)
      {
       fprintf(f2,"%s %s %s %s %s %s %s %s %s %s %s \n",y.id,y.from,y.to,y.date_depart,y.time_depart,y.date_return,y.time_return,y.airline,y.type,y.price,y.capacity);
      } 
   }
fclose(f1);
fclose(f2);
remove("/home/radhouan/Projects/projet-c-radhouan/DATA_BASE/flights.txt");
rename("/home/radhouan/Projects/projet-c-radhouan/DATA_BASE/Aux.txt","/home/radhouan/Projects/projet-c-radhouan/DATA_BASE/flights.txt");
}

void modifier_vol(Vols v)
{
Vols y;
FILE *f1,*f2;
f1=fopen("/home/radhouan/Projects/projet-c-radhouan/DATA_BASE/flights.txt","r");
f2=fopen("/home/radhouan/Projects/projet-c-radhouan/DATA_BASE/Aux.txt","a+");
while(fscanf(f1,"%s %s %s %s %s %s %s %s %s %s %s",y.id,y.from,y.to,y.date_depart,y.time_depart,y.date_return,y.time_return,y.airline,y.type,y.price,y.capacity)!=EOF)
   {
     if(strcmp(v.id,y.id)==0)
      {
       y=v;
      } 
     fprintf(f2,"%s %s %s %s %s %s %s %s %s %s %s \n",y.id,y.from,y.to,y.date_depart,y.time_depart,y.date_return,y.time_return,y.airline,y.type,y.price,y.capacity);
   }
fclose(f1);
fclose(f2);
remove("/home/radhouan/Projects/projet-c-radhouan/DATA_BASE/flights.txt");
rename("/home/radhouan/Projects/projet-c-radhouan/DATA_BASE/Aux.txt","/home/radhouan/Projects/projet-c-radhouan/DATA_BASE/flights.txt");
}


