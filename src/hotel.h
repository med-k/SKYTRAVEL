#include <gtk/gtk.h>

typedef struct
{
char id[5];
char name_hotel[50];
char city[50];
char date_depart[20];
char date_fin[20];
char stars[30];
char service[20];
char price[20];
char capacity[5];
}hotel;

void afficher_hotel(GtkWidget *liste);
int verifier_date_hotel(char A[],char B[],char C[]);
int verifier_date_fin_hotel(char A[],char B[],char C[],char E[],char F[],char G[]);
int verifier_champ_hotel(hotel h);
hotel identifiant_hotel(hotel h);
void ajouter_hotel(hotel h);
void supprimer_hotel(hotel h);
void modifier_hotel(hotel h);
