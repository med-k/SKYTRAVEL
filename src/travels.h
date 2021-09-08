#include <gtk/gtk.h>

typedef struct
{
char id[5];
char from[50];
char to[50];
char date_depart[20];
char date_return[20];
char name_hotel[30];
char service[20];
char price[20];
char capacity[5];
}Travels;

void afficher_travels(GtkWidget *liste);
int verifier_date_travel(char A[],char B[],char C[]);
int verifier_date_return_travel(char A[],char B[],char C[],char E[],char F[],char G[]);
int verifier_champ_travel(Travels T);
Travels identifiant_travel(Travels T);
void ajouter_travel(Travels t);
void supprimer_travel(Travels T);
void division_chaine(char A[],char B[]);
void modifier_travel(Travels t);
