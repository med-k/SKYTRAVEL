#include <gtk/gtk.h>

typedef struct
{
char id[4];
char first_name[30];
char last_name[30];
char birth_date[12];
char email[30];
char adress[30];
char city[20];
char cin[10];
char num[30];
}Clients;

typedef struct
{
char username[30];
char password[30];
char role[2];
char etat[2];
}Users;

int verifier_password(char password[],char password_c[]);
int verifier_date(char A[],char B[],char C[]);
int verifier_champ(Clients c,char password[],char username[]);
int verifier_username(char username[]);
int verifier_email(Clients c);
void ajouter_client(Clients c,char password[],char username[]);
Clients identifiant_client(Clients c);
void afficher_clients(GtkWidget *liste);
void supprimer_client(Clients c);
void modifier_client(Clients c);
int verifier_champ_client_modif(Clients c);
