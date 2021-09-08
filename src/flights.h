#include <gtk/gtk.h>

typedef struct
{
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
}Vols;

void afficher_vols(GtkWidget *liste);
void ajouter_vol(Vols v);
int verifier_champ_vol(Vols v);
int verifier_date_return_vol(char A[],char B[],char C[],char E[],char F[],char G[]);
Vols identifiant_vol(Vols v);
int verifier_date_vol(char A[],char B[],char C[]);
void supprimer_vol(Vols v);
void modifier_vol(Vols v);
