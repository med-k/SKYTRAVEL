#include <stdlib.h>
#include <string.h>
#include "client.h"
#include <time.h>
#include <gtk/gtk.h>

enum
{
  ID,
  FIRSTNAME,
  LASTNAME,
  BIRTHDATE,
  EMAIL,
  ADRESS,
  CITY,
  CIN,
  NUM,
  COLUMNS
};

int verifier_password(char password[],char password_c[])
{
      if(strlen(password)==0 || strlen(password_c)==0)
       {
        return 1;
       }
      if(strcmp(password,password_c)==0)
       {
        return 0;
       }
return 1;
}

int verifier_date(char A[],char B[],char C[])
{
int x=atoi(A),y=atoi(B),z=atoi(C);
  if( (y==2 && x>29 ) || (y==2 && (z%4!=0) && x>28) ) 
   {
    return 1;
   }
return 0;
}

int verifier_champ(Clients c,char password[],char username[])
{
  if(strlen(username)==0)
    {
     return  1;
    }
  if(strlen(password)==0)
    {
     return  1;
    }
  if(strlen(c.first_name)==0)
    {
     return  1;
    }
  if(strlen(c.last_name)==0)
    {
     return  1;
    }
  if(strlen(c.email)==0)
    {
     return  1;
    }
  if(strlen(c.adress)==0)
    {
     return  1;
    }
  if(strlen(c.city)==0)
    {
     return  1;
    }
  if(strlen(c.cin)==0)
    {
     return  1;
    }
   if(strlen(c.num)==0)
    {
     return  1;
    }
return 0;
}

int verifier_username(char username[])
{
char user[30],passwd[30],role[2],etat[2];
if(strlen(username)==0)
  {
  return 2;
  }
FILE *f;
f=fopen("/home/radhouan/Projects/projet-c-radhouan/DATA_BASE/Users.txt","r");
 if(f!=NULL)
  {
     while (fscanf(f,"%s %s %s %s",user,passwd,role,etat)!=EOF)
       {
            if(strcmp(user,username)==0)
              {  
               return 2;
              }
       }
  }
fclose(f); 
return 0;
}

int verifier_email(Clients c)
{
int l=strlen(c.email),i;
  if(c.email[0]!=64 && c.email[l-1]!=64)
     {
       for(i=0;i<l;i++)
         {
          if(c.email[i]==64)
            {
              return 0;
            }
         }
     }
return 2;
}

void ajouter_client(Clients c,char password[],char username[])
{
char role[2],etat[2];
sprintf(role,"%d",3);
sprintf(etat,"%d",1);
FILE *f1,*f2;
f1=fopen("/home/radhouan/Projects/projet-c-radhouan/DATA_BASE/Clients.txt","a+");
f2=fopen("/home/radhouan/Projects/projet-c-radhouan/DATA_BASE/Users.txt","a+");
  if(f1!=NULL && f2!=NULL)
   {
   fprintf(f1,"%s %s %s %s %s %s %s %s %s\n",c.id,c.first_name,c.last_name,c.birth_date,c.email,c.adress,c.city,c.cin,c.num);
   fprintf(f2,"%s %s %s %s\n",username,password,role,etat);
   }
fclose(f1);
fclose(f2);
}

Clients identifiant_client(Clients c)
{
int z=0,l;
Clients y;
FILE *f;
f=fopen("/home/radhouan/Projects/projet-c-radhouan/DATA_BASE/Clients.txt","r");
srand(time(NULL));
  while(z==0)
   {
    z=1;
    l=rand()%100;
    sprintf(c.id,"%d",l);
      while(fscanf(f,"%s %s %s %s %s %s %s %s %s\n",y.id,y.first_name,y.last_name,y.birth_date,y.email,y.adress,y.city,y.cin,y.num)!=EOF)
        {
          if(strcmp(c.id,y.id)==0)
           {
            z=0;
            break;
           }
         }
    }
fclose(f);
return c ;
}

void afficher_clients(GtkWidget *liste)
{
GtkCellRenderer *renderer;
GtkTreeViewColumn *column;
GtkTreeIter iter;
GtkListStore *store;

char first_name[30];
char last_name[30];
char email[30];
char adress[30];
char num[30];
char birth_date[12];
char city [20];
char cin [10];
char id [4];
store=NULL;

FILE  *f;

store=gtk_tree_view_get_model(liste);

  if(store==NULL)
  {
   renderer=gtk_cell_renderer_text_new();
   column=gtk_tree_view_column_new_with_attributes("   id   ",renderer,"text",ID,NULL);
   gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

   renderer=gtk_cell_renderer_text_new();
   column=gtk_tree_view_column_new_with_attributes("   first name   ",renderer,"text",FIRSTNAME,NULL);
   gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

   renderer=gtk_cell_renderer_text_new();
   column=gtk_tree_view_column_new_with_attributes("   last name   ",renderer,"text",LASTNAME,NULL);
   gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

   renderer=gtk_cell_renderer_text_new();
   column=gtk_tree_view_column_new_with_attributes("  birth date  ",renderer,"text",BIRTHDATE,NULL);
   gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

   renderer=gtk_cell_renderer_text_new();
   column=gtk_tree_view_column_new_with_attributes("	email	",renderer,"text",EMAIL,NULL);
   gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

   renderer=gtk_cell_renderer_text_new();
   column=gtk_tree_view_column_new_with_attributes("   adress   ",renderer,"text",ADRESS,NULL);
   gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

   renderer=gtk_cell_renderer_text_new();
   column=gtk_tree_view_column_new_with_attributes("   city   ",renderer,"text",CITY,NULL);
   gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

   renderer=gtk_cell_renderer_text_new();
   column=gtk_tree_view_column_new_with_attributes("	cin   ",renderer,"text",CIN,NULL);
   gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

   renderer=gtk_cell_renderer_text_new();
   column=gtk_tree_view_column_new_with_attributes("   num   ",renderer,"text",NUM,NULL);
   gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

   store=gtk_list_store_new(COLUMNS,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING);

f=fopen("/home/radhouan/Projects/projet-c-radhouan/DATA_BASE/Clients.txt","r");

     if(f!=NULL)
        {
         while(fscanf(f,"%s %s %s %s %s %s %s %s %s",id,first_name,last_name,birth_date,email,adress,city,cin,num)!=EOF)
          {
           gtk_list_store_append(store,&iter);
           gtk_list_store_set(store,&iter,ID,id,FIRSTNAME,first_name,LASTNAME,last_name,BIRTHDATE,birth_date,EMAIL,email,ADRESS,adress,CITY,city,CIN,cin,NUM,num,-1);
          }
        }
   fclose(f);
   gtk_tree_view_set_model(GTK_TREE_VIEW(liste),GTK_TREE_MODEL(store));
   g_object_unref(store);  
   }
}

void supprimer_client(Clients c)
{
Clients y;
FILE *f1,*f2;
f1=fopen("/home/radhouan/Projects/projet-c-radhouan/DATA_BASE/Clients.txt","r");
f2=fopen("/home/radhouan/Projects/projet-c-radhouan/DATA_BASE/Aux.txt","a+");
while(fscanf(f1,"%s %s %s %s %s %s %s %s %s",y.id,y.first_name,y.last_name,y.birth_date,y.email,y.adress,y.city,y.cin,y.num)!=EOF)
   {
     if(strcmp(c.id,y.id)!=0)
      {
       fprintf(f2,"%s %s %s %s %s %s %s %s %s\n",y.id,y.first_name,y.last_name,y.birth_date,y.email,y.adress,y.city,y.cin,y.num);
      } 
   }
fclose(f1);
fclose(f2);
remove("/home/radhouan/Projects/projet-c-radhouan/DATA_BASE/Clients.txt");
rename("/home/radhouan/Projects/projet-c-radhouan/DATA_BASE/Aux.txt","/home/radhouan/Projects/projet-c-radhouan/DATA_BASE/Clients.txt");
}

void modifier_client(Clients c)
{
Clients y;
FILE *f1,*f2;
f1=fopen("/home/radhouan/Projects/projet-c-radhouan/DATA_BASE/Clients.txt","r");
f2=fopen("/home/radhouan/Projects/projet-c-radhouan/DATA_BASE/Aux.txt","a+");
while(fscanf(f1,"%s %s %s %s %s %s %s %s %s",y.id,y.first_name,y.last_name,y.birth_date,y.email,y.adress,y.city,y.cin,y.num)!=EOF)
   {
     if(strcmp(c.id,y.id)==0)
      {
       y=c;
      } 
     fprintf(f2,"%s %s %s %s %s %s %s %s %s\n",y.id,y.first_name,y.last_name,y.birth_date,y.email,y.adress,y.city,y.cin,y.num);
   }
fclose(f1);
fclose(f2);
remove("/home/radhouan/Projects/projet-c-radhouan/DATA_BASE/Clients.txt");
rename("/home/radhouan/Projects/projet-c-radhouan/DATA_BASE/Aux.txt","/home/radhouan/Projects/projet-c-radhouan/DATA_BASE/Clients.txt");
}
int verifier_champ_client_modif(Clients c)
{
  if(strlen(c.first_name)==0)
    {
     return  1;
    }
  if(strlen(c.last_name)==0)
    {
     return  1;
    }
  if(strlen(c.email)==0)
    {
     return  1;
    }
  if(strlen(c.adress)==0)
    {
     return  1;
    }
  if(strlen(c.city)==0)
    {
     return  1;
    }
  if(strlen(c.cin)==0)
    {
     return  1;
    }
   if(strlen(c.num)==0)
    {
     return  1;
    }
return 0;
}
