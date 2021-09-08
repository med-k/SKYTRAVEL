#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include <string.h>
#include "client.h"
#include "flights.h"
#include "travels.h"
#include "hotel.h"

//*****************************************//PARTIE LOGIN //*****************************//
 
void on_button_start_register_6_clicked     (GtkWidget  *objet_graphique,gpointer user_data)
{
GtkWidget *window1;
GtkWidget *window2;

window1=lookup_widget(objet_graphique,"window_start_6");
window2=create_window_add_client_6();
gtk_widget_destroy(window1);		
gtk_widget_show(window2); 
}


void on_button_start_login_6_clicked        (GtkWidget  *objet_graphique,gpointer user_data)
{
GtkWidget *window1;
GtkWidget *window2;

window1=lookup_widget(objet_graphique,"window_start_6");
window2=create_window_admin_start_6();
gtk_widget_destroy(window1);		
gtk_widget_show(window2); 
}


void on_button_start_show1_6_clicked        (GtkWidget  *objet_graphique,gpointer user_data)
{
GtkWidget *window1;
GtkWidget *fix1;
GtkWidget *input1;
GtkWidget *input2;
GtkWidget *input3;
GtkWidget *button1;
GtkWidget *button2;
GtkWidget *button3;
GtkWidget *button_start_back_6;
GtkWidget *label1;
GtkWidget *alignment1;
GtkWidget *hbox1;
GtkWidget *image1;

window1=lookup_widget(objet_graphique,"window_start_6");
fix1=lookup_widget(objet_graphique,"fixed_start_6");
button1=lookup_widget(objet_graphique,"button_start_show1_6");
button2=lookup_widget(objet_graphique,"button_start_show2_6");
button3=lookup_widget(objet_graphique,"button_start_show3_6");
input1=lookup_widget(objet_graphique,"image_paris");
input2=lookup_widget(objet_graphique,"image_rome");
input3=lookup_widget(objet_graphique,"image_egypt");

gtk_widget_destroy(button1);
gtk_widget_destroy(button2);
gtk_widget_destroy(button3);
gtk_widget_destroy(input3);
gtk_widget_destroy(input2);
gtk_widget_destroy(input1);

input1 = create_pixmap (window1, "Italy 250400.jpg");
gtk_widget_show (input1);
gtk_fixed_put (GTK_FIXED (fix1), input1, 190, 48);
gtk_widget_set_size_request (input1, 250, 400);

button_start_back_6 = gtk_button_new ();
gtk_widget_show (button_start_back_6);
gtk_fixed_put (GTK_FIXED (fix1), button_start_back_6, 650, 420);
gtk_widget_set_size_request (button_start_back_6, 100, 30);

alignment1 = gtk_alignment_new (0.5, 0.5, 0, 0);
gtk_widget_show (alignment1);
gtk_container_add (GTK_CONTAINER (button_start_back_6), alignment1);

hbox1 = gtk_hbox_new (FALSE, 2);
gtk_widget_show (hbox1);
gtk_container_add (GTK_CONTAINER (alignment1), hbox1);

image1 = gtk_image_new_from_stock ("gtk-go-back", GTK_ICON_SIZE_BUTTON);
gtk_widget_show (image1);
gtk_box_pack_start (GTK_BOX (hbox1), image1, FALSE, FALSE, 0);

label1 = gtk_label_new_with_mnemonic (_("Back"));
gtk_widget_show (label1);
gtk_box_pack_start (GTK_BOX (hbox1), label1, FALSE, FALSE, 0);

g_signal_connect ((gpointer) button_start_back_6, "clicked",
                    G_CALLBACK (on_button_start_back_6_clicked),
                    NULL);
}


void on_button_start_show2_6_clicked        (GtkWidget  *objet_graphique,gpointer user_data)
{
GtkWidget *window1;
GtkWidget *fix1;
GtkWidget *input1;
GtkWidget *input2;
GtkWidget *input3;
GtkWidget *button1;
GtkWidget *button2;
GtkWidget *button3;
GtkWidget *button_start_back_6;
GtkWidget *label1;
GtkWidget *alignment1;
GtkWidget *hbox1;
GtkWidget *image1;

window1=lookup_widget(objet_graphique,"window_start_6");
fix1=lookup_widget(objet_graphique,"fixed_start_6");
button1=lookup_widget(objet_graphique,"button_start_show1_6");
button2=lookup_widget(objet_graphique,"button_start_show2_6");
button3=lookup_widget(objet_graphique,"button_start_show3_6");
input1=lookup_widget(objet_graphique,"image_paris");
input2=lookup_widget(objet_graphique,"image_rome");
input3=lookup_widget(objet_graphique,"image_egypt");

gtk_widget_destroy(button1);
gtk_widget_destroy(button2);
gtk_widget_destroy(button3);
gtk_widget_destroy(input3);
gtk_widget_destroy(input2);
gtk_widget_destroy(input1);

input1 = create_pixmap (window1, "Paris 250400.jpg");
gtk_widget_show (input1);
gtk_fixed_put (GTK_FIXED (fix1), input1, 190, 48);
gtk_widget_set_size_request (input1, 250, 400);

button_start_back_6 = gtk_button_new ();
gtk_widget_show (button_start_back_6);
gtk_fixed_put (GTK_FIXED (fix1), button_start_back_6, 650, 420);
gtk_widget_set_size_request (button_start_back_6, 100, 30);

alignment1 = gtk_alignment_new (0.5, 0.5, 0, 0);
gtk_widget_show (alignment1);
gtk_container_add (GTK_CONTAINER (button_start_back_6), alignment1);

hbox1 = gtk_hbox_new (FALSE, 2);
gtk_widget_show (hbox1);
gtk_container_add (GTK_CONTAINER (alignment1), hbox1);

image1 = gtk_image_new_from_stock ("gtk-go-back", GTK_ICON_SIZE_BUTTON);
gtk_widget_show (image1);
gtk_box_pack_start (GTK_BOX (hbox1), image1, FALSE, FALSE, 0);

label1 = gtk_label_new_with_mnemonic (_("Back"));
gtk_widget_show (label1);
gtk_box_pack_start (GTK_BOX (hbox1), label1, FALSE, FALSE, 0);

g_signal_connect ((gpointer) button_start_back_6, "clicked",
                    G_CALLBACK (on_button_start_back_6_clicked),
                    NULL);
}


void on_button_start_show3_6_clicked        (GtkWidget  *objet_graphique,gpointer user_data)
{
GtkWidget *window1;
GtkWidget *fix1;
GtkWidget *input1;
GtkWidget *input2;
GtkWidget *input3;
GtkWidget *button1;
GtkWidget *button2;
GtkWidget *button3;
GtkWidget *button_start_back_6;
GtkWidget *label1;
GtkWidget *alignment1;
GtkWidget *hbox1;
GtkWidget *image1;

window1=lookup_widget(objet_graphique,"window_start_6");
fix1=lookup_widget(objet_graphique,"fixed_start_6");
button1=lookup_widget(objet_graphique,"button_start_show1_6");
button2=lookup_widget(objet_graphique,"button_start_show2_6");
button3=lookup_widget(objet_graphique,"button_start_show3_6");
input1=lookup_widget(objet_graphique,"image_paris");
input2=lookup_widget(objet_graphique,"image_rome");
input3=lookup_widget(objet_graphique,"image_egypt");

gtk_widget_destroy(button1);
gtk_widget_destroy(button2);
gtk_widget_destroy(button3);
gtk_widget_destroy(input3);
gtk_widget_destroy(input2);
gtk_widget_destroy(input1);

input1 = create_pixmap (window1, "Egypt 250400.jpg");
gtk_widget_show (input1);
gtk_fixed_put (GTK_FIXED (fix1), input1, 190, 48);
gtk_widget_set_size_request (input1, 250, 400);

button_start_back_6 = gtk_button_new ();
gtk_widget_show (button_start_back_6);
gtk_fixed_put (GTK_FIXED (fix1), button_start_back_6, 650, 420);
gtk_widget_set_size_request (button_start_back_6, 100, 30);

alignment1 = gtk_alignment_new (0.5, 0.5, 0, 0);
gtk_widget_show (alignment1);
gtk_container_add (GTK_CONTAINER (button_start_back_6), alignment1);

hbox1 = gtk_hbox_new (FALSE, 2);
gtk_widget_show (hbox1);
gtk_container_add (GTK_CONTAINER (alignment1), hbox1);

image1 = gtk_image_new_from_stock ("gtk-go-back", GTK_ICON_SIZE_BUTTON);
gtk_widget_show (image1);
gtk_box_pack_start (GTK_BOX (hbox1), image1, FALSE, FALSE, 0);

label1 = gtk_label_new_with_mnemonic (_("Back"));
gtk_widget_show (label1);
gtk_box_pack_start (GTK_BOX (hbox1), label1, FALSE, FALSE, 0);

g_signal_connect ((gpointer) button_start_back_6, "clicked",
                    G_CALLBACK (on_button_start_back_6_clicked),
                    NULL);
}

void on_button_start_back_6_clicked  (GtkWidget  *objet_graphique,gpointer user_data)
{
GtkWidget *window1;
GtkWidget *window2;

window1=lookup_widget(objet_graphique,"window_start_6");
window2=create_window_start_6();
gtk_widget_destroy(window1);		
gtk_widget_show(window2); 
}

//*****************************************//PARTIE CLIENTS //*****************************//

void on_button_add_client_confirm_6_clicked (GtkWidget  *objet_graphique,gpointer user_data) //buton confirm maquette ajout_client//
{
GtkWidget *input1;
GtkWidget *input2;
GtkWidget *input3;
GtkWidget *input4;
GtkWidget *input5;
GtkWidget *input6;
GtkWidget *input7;
GtkWidget *input8;
GtkWidget *input9;
GtkWidget *input10;
GtkWidget *input11;
GtkWidget *input12;
GtkWidget *input13;
GtkWidget *output1;
GtkWidget *output2;
GtkWidget *output3;

Clients c;
char A[3],B[3],C[5],username[30],password[30],password_c[30];
int v1,v2,v3;

input1=lookup_widget(objet_graphique,"entry_username_6");
input2=lookup_widget(objet_graphique,"entry_password_6");
input3=lookup_widget(objet_graphique,"entry_confirm_password_6");
input4=lookup_widget(objet_graphique,"entry_first_name_6");
input5=lookup_widget(objet_graphique,"entry_last_name_6");
input6=lookup_widget(objet_graphique,"spinbutton_day_6");
input7=lookup_widget(objet_graphique,"spinbutton_mouth_6");
input8=lookup_widget(objet_graphique,"spinbutton_year_6");
input9=lookup_widget(objet_graphique,"entry_email_6");
input10=lookup_widget(objet_graphique,"entry_cin_6");
input11=lookup_widget(objet_graphique,"entry_adress_6");
input12=lookup_widget(objet_graphique,"entry_city_6");
input13=lookup_widget(objet_graphique,"entry_phone_number_6");
output1=lookup_widget(objet_graphique,"label_confirmation_password_6");
output2=lookup_widget(objet_graphique,"label_confirmation_donne_6");
output3=lookup_widget(objet_graphique,"label_confirmation_6");

strcpy(username,gtk_entry_get_text(GTK_ENTRY(input1)));
strcpy(password,gtk_entry_get_text(GTK_ENTRY(input2)));
strcpy(password_c,gtk_entry_get_text(GTK_ENTRY(input3)));
strcpy(c.first_name,gtk_entry_get_text(GTK_ENTRY(input4)));
strcpy(c.last_name,gtk_entry_get_text(GTK_ENTRY(input5)));
strcpy(A,gtk_entry_get_text(GTK_ENTRY(input6)));
strcpy(B,gtk_entry_get_text(GTK_ENTRY(input7)));
strcpy(C,gtk_entry_get_text(GTK_ENTRY(input8)));
strcpy(c.email,gtk_entry_get_text(GTK_ENTRY(input9)));
strcpy(c.cin,gtk_entry_get_text(GTK_ENTRY(input10)));
strcpy(c.adress,gtk_entry_get_text(GTK_ENTRY(input11)));
strcpy(c.city,gtk_entry_get_text(GTK_ENTRY(input12)));
strcpy(c.num,gtk_entry_get_text(GTK_ENTRY(input13)));

v1=(verifier_password(password,password_c))+(verifier_username(username));
v2=(verifier_date(A,B,C))+(verifier_email(c));

if(v1==0)
{
GdkColor color;
gdk_color_parse ("green", &color);
gtk_widget_modify_fg (output1, GTK_STATE_NORMAL, &color);
gtk_label_set_text(GTK_LABEL (output1), "correct");
}

else if(v1==1)
{
GdkColor color;
gdk_color_parse ("red", &color);
gtk_widget_modify_fg (output1, GTK_STATE_NORMAL, &color);
gtk_label_set_text(GTK_LABEL (output1), "password incorrect");
}
else if(v1==2)
{
GdkColor color;
gdk_color_parse ("red", &color);
gtk_widget_modify_fg (output1, GTK_STATE_NORMAL, &color);
gtk_label_set_text(GTK_LABEL (output1), "username exist");
}
else if(v1==3)
{
GdkColor color;
gdk_color_parse ("red", &color);
gtk_widget_modify_fg (output1, GTK_STATE_NORMAL, &color);
gtk_label_set_text(GTK_LABEL (output1), "username exist,password incorrect");
}

if(v2==0)
{
GdkColor color;
gdk_color_parse ("green", &color);
gtk_widget_modify_fg (output2, GTK_STATE_NORMAL, &color);
gtk_label_set_text(GTK_LABEL (output2), "information correct");
}
else if(v2==1)
{
GdkColor color;
gdk_color_parse ("red", &color);
gtk_widget_modify_fg (output2, GTK_STATE_NORMAL, &color);
gtk_label_set_text(GTK_LABEL (output2), "Birth date incorrect");
}
else if(v2==2)
{
GdkColor color;
gdk_color_parse ("red", &color);
gtk_widget_modify_fg (output2, GTK_STATE_NORMAL, &color);
gtk_label_set_text(GTK_LABEL (output2), "Email incorrect");
}
else if(v2==3)
{
GdkColor color;
gdk_color_parse ("red", &color);
gtk_widget_modify_fg (output2, GTK_STATE_NORMAL, &color);
gtk_label_set_text(GTK_LABEL (output2), "Email and bith date incorrect");
}
v3=v2+v1+(verifier_champ(c,password,username));

if(v3!=0)
{
GdkColor color;
gdk_color_parse ("red", &color);
gtk_widget_modify_fg (output3, GTK_STATE_NORMAL, &color);
gtk_label_set_text(GTK_LABEL (output3), "incorrect or missing informations");
}
else
{
strcpy(c.birth_date,gtk_entry_get_text(GTK_ENTRY(input6)));
strcat(c.birth_date,"/");
strcat(c.birth_date,B);
strcat(c.birth_date,"/");
strcat(c.birth_date,C);
c=identifiant_client(c);
ajouter_client(c,password,username);
GdkColor color;
gdk_color_parse ("green", &color);
gtk_widget_modify_fg (output3, GTK_STATE_NORMAL, &color);
gtk_label_set_text(GTK_LABEL (output3), "Success Add ");
}
}


void on_button_add_client_back_6_clicked  (GtkWidget  *objet_graphique,gpointer user_data)  
{
GtkWidget *window1;
GtkWidget *window2;           

window1=lookup_widget(objet_graphique,"window_add_client_6");
window2=create_window_start_6();
gtk_widget_destroy(window1);		
gtk_widget_show(window2);
}


void on_button_admin_start_clients_6_clicked  (GtkWidget  *objet_graphique,gpointer user_data)                                       
{
GtkWidget *window1;
GtkWidget *window2;
GtkWidget *treeview1;

window1=lookup_widget(objet_graphique,"window_admin_start_6");
window2=create_window_admin_clients_6();
gtk_widget_destroy(window1);		
gtk_widget_show(window2);
treeview1=lookup_widget(window2,"treeview_admin_clients");
afficher_clients(treeview1);
}


void on_button_admin_start_logout_6_clicked  (GtkWidget  *objet_graphique,gpointer user_data) 
{
GtkWidget *window1;
GtkWidget *window2;

window1=lookup_widget(objet_graphique,"window_admin_start_6");
window2=create_window_start_6();
gtk_widget_destroy(window1);		
gtk_widget_show(window2);
}


void on_treeview_admin_clients_row_activated (GtkWidget  *objet_graphique,GtkTreePath *path,GtkTreeViewColumn *column,gpointer  user_data)
// buton double click treeview maquette_admin_clients//
{
gchar *first_name,*last_name,*birth_date,*adress,*num,*city,*cin,*email,*id;
GtkWidget *window1;
GtkWidget *window2;
GtkWidget *treeview;
GtkWidget *first_name_1,*last_name_1,*birth_date_1,*adress_1,*num_1,*city_1,*cin_1,*email_1,*id_1;

window1=lookup_widget(objet_graphique,"window_admin_clients_6");
treeview=lookup_widget(objet_graphique,"treeview_admin_clients");
window2=create_window_modifier_supprimer_clients_6();
first_name_1=lookup_widget(window2, "label_first_name");
last_name_1=lookup_widget(window2, "label_last_name");
birth_date_1=lookup_widget(window2, "label_birth_day");
adress_1=lookup_widget(window2, "label_adress");
num_1=lookup_widget(window2, "label_phone_number");
city_1=lookup_widget(window2, "label_city");
cin_1=lookup_widget(window2, "label_cin");
email_1=lookup_widget(window2, "label_email");
id_1=lookup_widget(window2, "label_id");

GtkTreeIter iter;
GtkTreeModel *model=gtk_tree_view_get_model (GTK_TREE_VIEW(treeview));
gtk_tree_model_get_iter(model,&iter,path);
gtk_tree_model_get (model,&iter,0,&id,1,&first_name,2,&last_name,3,&birth_date,4,&email,5,&adress,6,&city,7,&cin,8,&num,-1);

gtk_label_set_text(GTK_LABEL (id_1),_(id));
gtk_label_set_text(GTK_LABEL (first_name_1),_(first_name));
gtk_label_set_text(GTK_LABEL (last_name_1),_(last_name));
gtk_label_set_text(GTK_LABEL (birth_date_1),_(birth_date));
gtk_label_set_text(GTK_LABEL (email_1),_(email));
gtk_label_set_text(GTK_LABEL (adress_1),_(adress));
gtk_label_set_text(GTK_LABEL (city_1),_(city));
gtk_label_set_text(GTK_LABEL (cin_1),_(cin));
gtk_label_set_text(GTK_LABEL (num_1),_(num));

GdkColor color;
gdk_color_parse ("blue", &color);
gtk_widget_modify_fg (id_1, GTK_STATE_NORMAL, &color);
gtk_widget_modify_fg (first_name_1, GTK_STATE_NORMAL, &color);
gtk_widget_modify_fg (last_name_1, GTK_STATE_NORMAL, &color);
gtk_widget_modify_fg (birth_date_1, GTK_STATE_NORMAL, &color);
gtk_widget_modify_fg (email_1, GTK_STATE_NORMAL, &color);
gtk_widget_modify_fg (adress_1, GTK_STATE_NORMAL, &color);
gtk_widget_modify_fg (city_1, GTK_STATE_NORMAL, &color);
gtk_widget_modify_fg (cin_1, GTK_STATE_NORMAL, &color);
gtk_widget_modify_fg (num_1, GTK_STATE_NORMAL, &color);

gtk_widget_hide(window1);
gtk_widget_show(window2);
}


void on_button_admin_clients_logout_6_clicked  (GtkWidget  *objet_graphique,gpointer user_data)                                      
{
GtkWidget *window1;
GtkWidget *window2;

window1=lookup_widget(objet_graphique,"window_admin_clients_6");
window2=create_window_start_6();
gtk_widget_destroy(window1);		
gtk_widget_show(window2);
}


void on_button_admin_clients_ajout_6_clicked (GtkWidget  *objet_graphique,gpointer user_data)                                     
{
GtkWidget *window1;
GtkWidget *window2;
GtkWidget *button1;
GtkWidget *fix1;
GtkWidget *alignment1;
GtkWidget *hbox1;
GtkWidget *label1;
GtkWidget *image1;
GtkWidget *button_back_admin_clients;

window1=lookup_widget(objet_graphique,"window_admin_clients_6");
window2=create_window_add_client_6();
gtk_widget_destroy(window1);		
gtk_widget_show(window2);
button1=lookup_widget(window2,"button_add_client_back_6");
gtk_widget_destroy(button1);
fix1=lookup_widget(window2,"fixed_add_client_6");

button_back_admin_clients = gtk_button_new ();
gtk_widget_show (button_back_admin_clients);
gtk_fixed_put (GTK_FIXED (fix1),button_back_admin_clients,280,430);
gtk_widget_set_size_request (button_back_admin_clients, 100, 30);

alignment1 = gtk_alignment_new (0.5, 0.5, 0, 0);
gtk_widget_show (alignment1);
gtk_container_add (GTK_CONTAINER (button_back_admin_clients), alignment1);

hbox1 = gtk_hbox_new (FALSE, 2);
gtk_widget_show (hbox1);
gtk_container_add (GTK_CONTAINER (alignment1), hbox1);

label1 = gtk_label_new_with_mnemonic (_("Back"));
gtk_widget_show (label1);
gtk_box_pack_start (GTK_BOX (hbox1), label1, FALSE, FALSE, 0);

image1 = gtk_image_new_from_stock ("gtk-go-back", GTK_ICON_SIZE_BUTTON);
gtk_widget_show (image1);
gtk_box_pack_start (GTK_BOX (hbox1), image1, FALSE, FALSE, 0);

 g_signal_connect ((gpointer) button_back_admin_clients, "clicked",
                    G_CALLBACK (on_button_back_admin_clients_clicked),
                    NULL);
}

void on_button_back_admin_clients_clicked        (GtkWidget  *objet_graphique,gpointer user_data) //buton back maquette admin_clients//
{
GtkWidget *window1;
GtkWidget *window2;
GtkWidget *treeview1;

window1=lookup_widget(objet_graphique,"window_add_client_6");
window2=create_window_admin_clients_6();
gtk_widget_destroy(window1);		
gtk_widget_show(window2);
treeview1=lookup_widget(window2,"treeview_admin_clients");
afficher_clients(treeview1);
}


void on_button_ms_clients_delete_clicked (GtkWidget  *objet_graphique,gpointer user_data) /*bouton supprimer maquette supprimer_modfier*/
{
GtkWidget *Window1;
GtkWidget *input1;
GtkWidget *input2;
GtkWidget *input3;
GtkWidget *input4;
GtkWidget *input5;
GtkWidget *input6;
GtkWidget *input7;
GtkWidget *input8;
GtkWidget *input9;
GtkWidget *output1;
Clients c;

input1=lookup_widget(objet_graphique,"label_id");
input2=lookup_widget(objet_graphique,"label_first_name");
input3=lookup_widget(objet_graphique,"label_last_name");
input4=lookup_widget(objet_graphique,"label_birth_day");
input5=lookup_widget(objet_graphique,"label_email");
input6=lookup_widget(objet_graphique,"label_adress");
input7=lookup_widget(objet_graphique,"label_phone_number");
input8=lookup_widget(objet_graphique,"label_cin");
input9=lookup_widget(objet_graphique,"label_city");
output1=lookup_widget(objet_graphique,"label_confirmation");

strcpy(c.id,gtk_label_get_text(GTK_LABEL(input1)));
strcpy(c.first_name,gtk_label_get_text(GTK_LABEL(input2)));
strcpy(c.last_name,gtk_label_get_text(GTK_LABEL(input3)));
strcpy(c.birth_date,gtk_label_get_text(GTK_LABEL(input4)));
strcpy(c.email,gtk_label_get_text(GTK_LABEL(input5)));
strcpy(c.adress,gtk_label_get_text(GTK_LABEL(input6)));
strcpy(c.num,gtk_label_get_text(GTK_LABEL(input7)));
strcpy(c.cin,gtk_label_get_text(GTK_LABEL(input8)));
strcpy(c.city,gtk_label_get_text(GTK_LABEL(input9)));

GdkColor color;
gdk_color_parse ("red", &color);
gtk_widget_modify_fg (output1, GTK_STATE_NORMAL, &color);
gtk_label_set_text(GTK_LABEL (output1), "Client Deleted ");

supprimer_client(c);

}


void on_button_ms_clients_back_clicked(GtkWidget  *objet_graphique,gpointer user_data)   /*bouton back maquette supprimer_modfier_clients*/
{
GtkWidget *window1;
GtkWidget *window2;
GtkWidget *treeview1;

window1=lookup_widget(objet_graphique,"window_modifier_supprimer_clients_6");
window2=create_window_admin_clients_6();
gtk_widget_destroy(window1);		
gtk_widget_show(window2);
treeview1=lookup_widget(window2,"treeview_admin_clients");
afficher_clients(treeview1);
}


void on_button_modifier_clients_confirm_clicked (GtkWidget  *objet_graphique,gpointer user_data) /*bouton confirmer maqueete modifier_clientss*/                                     
{
GtkWidget *input1;
GtkWidget *input2;
GtkWidget *input3;
GtkWidget *input4;
GtkWidget *input5;
GtkWidget *input6;
GtkWidget *input7;
GtkWidget *input8;
GtkWidget *input9;
GtkWidget *input10;
GtkWidget *input11;
GtkWidget *output1;
GtkWidget *output2;
Clients c;
char A[3],B[3],C[5];
int v,v1;

input1=lookup_widget(objet_graphique,"label_id");
input2=lookup_widget(objet_graphique,"entry_first_name");
input3=lookup_widget(objet_graphique,"entry_last_name");
input4=lookup_widget(objet_graphique,"spinbutton_day");
input5=lookup_widget(objet_graphique,"spinbutton_month");
input6=lookup_widget(objet_graphique,"spinbutton_year");
input7=lookup_widget(objet_graphique,"entry_email");
input8=lookup_widget(objet_graphique,"entry_cin");
input9=lookup_widget(objet_graphique,"entry_adress");
input10=lookup_widget(objet_graphique,"entry_number");
input11=lookup_widget(objet_graphique,"entry_city");
output1=lookup_widget(objet_graphique,"label_confirmation_1");
output2=lookup_widget(objet_graphique,"label_confirmation_2");

strcpy(c.id,gtk_label_get_text(GTK_LABEL(input1)));
strcpy(c.first_name,gtk_entry_get_text(GTK_ENTRY(input2)));
strcpy(c.last_name,gtk_entry_get_text(GTK_ENTRY(input3)));
strcpy(A,gtk_entry_get_text(GTK_ENTRY(input4)));
strcpy(B,gtk_entry_get_text(GTK_ENTRY(input5)));
strcpy(C,gtk_entry_get_text(GTK_ENTRY(input6)));
strcpy(c.email,gtk_entry_get_text(GTK_ENTRY(input7)));
strcpy(c.cin,gtk_entry_get_text(GTK_ENTRY(input8)));
strcpy(c.adress,gtk_entry_get_text(GTK_ENTRY(input9)));
strcpy(c.num,gtk_entry_get_text(GTK_ENTRY(input10)));
strcpy(c.city,gtk_entry_get_text(GTK_ENTRY(input11)));

v=(verifier_date(A,B,C))+(verifier_email(c));

if(v==0)
{
GdkColor color;
gdk_color_parse ("green", &color);
gtk_widget_modify_fg (output2, GTK_STATE_NORMAL, &color);
gtk_label_set_text(GTK_LABEL (output2), "Correct ");
}
else if(v==1)
{
GdkColor color;
gdk_color_parse ("red", &color);
gtk_widget_modify_fg (output2, GTK_STATE_NORMAL, &color);
gtk_label_set_text(GTK_LABEL (output2), "Birth date incorrect ");
}
else if(v==2)
{
GdkColor color;
gdk_color_parse ("red", &color);
gtk_widget_modify_fg (output2, GTK_STATE_NORMAL, &color);
gtk_label_set_text(GTK_LABEL (output2), "Email incorrect ");
}
else if(v==3)
{
GdkColor color;
gdk_color_parse ("red", &color);
gtk_widget_modify_fg (output2, GTK_STATE_NORMAL, &color);
gtk_label_set_text(GTK_LABEL (output2), "Birth date and email incorrect ");
}

strcpy(c.birth_date,gtk_entry_get_text(GTK_ENTRY(input4)));
strcat(c.birth_date,"/");
strcat(c.birth_date,B);
strcat(c.birth_date,"/");
strcat(c.birth_date,C);

v1=verifier_champ_client_modif(c);

if(v1==0 && v==0)
{
GdkColor color;
gdk_color_parse ("green", &color);
gtk_widget_modify_fg (output1, GTK_STATE_NORMAL, &color);
gtk_label_set_text(GTK_LABEL (output1), "Success Edit ");
modifier_client(c);
}
else if(v1!=0 || v!=0)
{
GdkColor color;
gdk_color_parse ("red", &color);
gtk_widget_modify_fg (output1, GTK_STATE_NORMAL, &color);
gtk_label_set_text(GTK_LABEL (output1), "Edit failed ");
modifier_client(c);
}
}


void on_button_modifier_clients_back_clicked  (GtkWidget  *objet_graphique,gpointer user_data) /*bouton back maqueete modifier_clients*/                                   
{
GtkWidget *window1;
GtkWidget *window2;
GtkWidget *treeview1;

window1=lookup_widget(objet_graphique,"window_modifier_clients_6");
window2=create_window_admin_clients_6();
gtk_widget_destroy(window1);		
gtk_widget_show(window2);
treeview1=lookup_widget(window2,"treeview_admin_clients");
afficher_clients(treeview1);
}


void on_button_ms_clients_edit_clicked  (GtkWidget  *objet_graphique,gpointer user_data) /*bouton modifier maquette supprimer_modfie_clients*/   
{
GtkWidget *window1;
GtkWidget *window2;
GtkWidget *input1;
GtkWidget *input2;
GtkWidget *input3;
GtkWidget *input4;
GtkWidget *input5;
GtkWidget *input6;
GtkWidget *input7;
GtkWidget *input8;
GtkWidget *output1;
GtkWidget *output2;
GtkWidget *output3;
GtkWidget *output4;
GtkWidget *output5;
GtkWidget *output6;
GtkWidget *output7;
GtkWidget *output8;
char A[3],B[30],C[30],D[30],E[30],F[30],G[30],K[20];


window1=lookup_widget(objet_graphique,"window_modifier_supprimer_clients_6");
input1=lookup_widget(objet_graphique,"label_id");
input2=lookup_widget(objet_graphique,"label_first_name");
input3=lookup_widget(objet_graphique,"label_last_name");
input4=lookup_widget(objet_graphique,"label_email");
input5=lookup_widget(objet_graphique,"label_adress");
input6=lookup_widget(objet_graphique,"label_phone_number");
input7=lookup_widget(objet_graphique,"label_cin");
input8=lookup_widget(objet_graphique,"label_city");

window2=create_window_modifier_clients_6();

strcpy(A,gtk_label_get_text(GTK_LABEL(input1)));
strcpy(B,gtk_label_get_text(GTK_LABEL(input2)));
strcpy(C,gtk_label_get_text(GTK_LABEL(input3)));
strcpy(D,gtk_label_get_text(GTK_LABEL(input4)));
strcpy(E,gtk_label_get_text(GTK_LABEL(input5)));
strcpy(F,gtk_label_get_text(GTK_LABEL(input6)));
strcpy(G,gtk_label_get_text(GTK_LABEL(input7)));
strcpy(K,gtk_label_get_text(GTK_LABEL(input8)));

output1=lookup_widget(window2,"label_id");
output2=lookup_widget(window2,"entry_first_name");
output3=lookup_widget(window2,"entry_last_name");
output4=lookup_widget(window2,"entry_email");
output5=lookup_widget(window2,"entry_adress");
output6=lookup_widget(window2,"entry_number");
output7=lookup_widget(window2,"entry_cin");
output8=lookup_widget(window2,"entry_city");

gtk_label_set_text(GTK_LABEL (output1),(A));
gtk_entry_set_text(GTK_ENTRY (output2),(B));
gtk_entry_set_text(GTK_ENTRY (output3),(C));
gtk_entry_set_text(GTK_ENTRY (output4),(D));
gtk_entry_set_text(GTK_ENTRY (output5),(E));
gtk_entry_set_text(GTK_ENTRY (output6),(F));
gtk_entry_set_text(GTK_ENTRY (output7),(G));
gtk_entry_set_text(GTK_ENTRY (output8),(K));


gtk_widget_destroy(window1);		
gtk_widget_show(window2);
}

/********************************************/        //PARTIE VOLS_ADMIN//      /********************************************/  


void on_combobox_admin_start_6_changed (GtkWidget  *objet_graphique,gpointer user_data) //bouton combobox_admin_start maquette_admin_start//
{
GtkWidget *window1;
GtkWidget *window2;
GtkWidget *combobox1;
GtkWidget *treeview1;

combobox1=lookup_widget(objet_graphique,"combobox_admin_start_6");

  if(strcmp("Flight",gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox1)))==0)
    {
      window1=lookup_widget(objet_graphique,"window_admin_start_6");
      window2=create_window_admin_vol_6();
      gtk_widget_show(window2);
      gtk_widget_destroy(window1);	
      treeview1=lookup_widget(window2,"treeview_admin_vol_6"); 
      afficher_vols(treeview1);
    }
   else if(strcmp("Travel",gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox1)))==0)
    {
      window1=lookup_widget(objet_graphique,"window_admin_start_6");
      window2=create_window_admin_travel_6();
      gtk_widget_show(window2);
      gtk_widget_destroy(window1);
      treeview1=lookup_widget(window2,"treeview_admin_travel_6"); 
      afficher_travels(treeview1);	
    }
   else 
    {
      window1=lookup_widget(objet_graphique,"window_admin_start_6");
      window2=create_window_admin_hotel_6();
      gtk_widget_show(window2);
      gtk_widget_destroy(window1);
      treeview1=lookup_widget(window2,"treeview_admin_hotel_6"); 
      afficher_hotel(treeview1);
     }
}


void on_button_admin_vol_client_6_clicked (GtkWidget  *objet_graphique,gpointer user_data) //bouton clients  maquette_admin_vol//
{
GtkWidget *window1;
GtkWidget *window2;
GtkWidget *treeview1;

window1=lookup_widget(objet_graphique,"window_admin_vol_6");
window2=create_window_admin_clients_6();
gtk_widget_destroy(window1);		
gtk_widget_show(window2);
treeview1=lookup_widget(window2,"treeview_admin_clients"); 
afficher_clients(treeview1);
}


void on_button_admin_vol_ajout_6_clicked (GtkWidget  *objet_graphique,gpointer user_data) //bouton ajout maquette_admin_vol//
{
GtkWidget *window1;
GtkWidget *window2;

window1=lookup_widget(objet_graphique,"window_admin_vol_6");
window2=create_window_ajout_vol_6();
gtk_widget_destroy(window1);		
gtk_widget_show(window2);
}


void on_button_vol_ajout_back_clicked   (GtkWidget  *objet_graphique,gpointer user_data) //bouton back maquette_ajout_vol//    
{
GtkWidget *window1;
GtkWidget *window2;
GtkWidget *treeview1;

window1=lookup_widget(objet_graphique,"window_ajout_vol_6");
window2=create_window_admin_vol_6();
gtk_widget_destroy(window1);		
gtk_widget_show(window2);
treeview1=lookup_widget(window2,"treeview_admin_vol_6"); 
afficher_vols(treeview1);
}


void on_button_vol_ajout_confim_clicked  (GtkWidget  *objet_graphique,gpointer user_data) //bouton confirm maquette_ajout_vol//   
{
GtkWidget *input1;
GtkWidget *input2;
GtkWidget *input3;
GtkWidget *input4;
GtkWidget *input5;
GtkWidget *input6;
GtkWidget *input7;
GtkWidget *input8;
GtkWidget *input9;
GtkWidget *input10;
GtkWidget *input11;
GtkWidget *input12;
GtkWidget *input13;
GtkWidget *input14;
GtkWidget *input15;
GtkWidget *input16;
GtkWidget *output1;
GtkWidget *output2;
Vols V;
char A[5],B[5],C[5],D[5],E[5],F[5],G[5],K[5];
int a,b;

input1=lookup_widget(objet_graphique,"entry_vol_ajout_from");
input2=lookup_widget(objet_graphique,"entry_vol_ajout_to");
input3=lookup_widget(objet_graphique,"spinbutton_vol_day_depart");
input4=lookup_widget(objet_graphique,"spinbutton_vol_month_depart");
input5=lookup_widget(objet_graphique,"spinbutton_vol_year_depart");
input6=lookup_widget(objet_graphique,"spinbutton_vol_hour_depart");
input7=lookup_widget(objet_graphique,"spinbutton_vol_minute_depart");
input8=lookup_widget(objet_graphique,"spinbutton_vol_day_return");
input9=lookup_widget(objet_graphique,"spinbutton_vol_month_return");
input10=lookup_widget(objet_graphique,"spinbutton_vol_year_return");
input11=lookup_widget(objet_graphique,"spinbutton_vol_hour_return");
input12=lookup_widget(objet_graphique,"spinbutton_vol_minute_return");
input13=lookup_widget(objet_graphique,"entry_vol_ajout_airline");
input14=lookup_widget(objet_graphique,"entry_vol_ajout_type");
input15=lookup_widget(objet_graphique,"entry_vol_ajout_price");
input16=lookup_widget(objet_graphique,"entry_vol_ajout_capacity");
output1=lookup_widget(objet_graphique,"label_confirmation_1");
output2=lookup_widget(objet_graphique,"label_confirmation_2");

strcpy(V.from,gtk_entry_get_text(GTK_ENTRY(input1)));
strcpy(V.to,gtk_entry_get_text(GTK_ENTRY(input2)));
strcpy(A,gtk_entry_get_text(GTK_ENTRY(input3)));
strcpy(V.date_depart,gtk_entry_get_text(GTK_ENTRY(input3)));
strcpy(B,gtk_entry_get_text(GTK_ENTRY(input4)));
strcpy(C,gtk_entry_get_text(GTK_ENTRY(input5)));
strcpy(V.time_depart,gtk_entry_get_text(GTK_ENTRY(input6)));
strcpy(D,gtk_entry_get_text(GTK_ENTRY(input7)));
strcpy(E,gtk_entry_get_text(GTK_ENTRY(input8)));
strcpy(V.date_return,gtk_entry_get_text(GTK_ENTRY(input8)));
strcpy(F,gtk_entry_get_text(GTK_ENTRY(input9)));
strcpy(G,gtk_entry_get_text(GTK_ENTRY(input10)));
strcpy(V.time_return,gtk_entry_get_text(GTK_ENTRY(input11)));
strcpy(K,gtk_entry_get_text(GTK_ENTRY(input12)));
strcpy(V.airline,gtk_entry_get_text(GTK_ENTRY(input13)));
strcpy(V.type,gtk_entry_get_text(GTK_ENTRY(input14)));
strcpy(V.price,gtk_entry_get_text(GTK_ENTRY(input15)));
strcpy(V.capacity,gtk_entry_get_text(GTK_ENTRY(input16)));

a=verifier_date_vol(A,B,C)+verifier_date_return_vol(A,B,C,E,F,G)+verifier_date_vol(E,F,G);
if(a!=0)
{
GdkColor color;
gdk_color_parse ("red", &color);
gtk_widget_modify_fg (output1, GTK_STATE_NORMAL, &color);
gtk_label_set_text(GTK_LABEL (output1), "invalid date");
}
else
{
GdkColor color;
gdk_color_parse ("green", &color);
gtk_widget_modify_fg (output1, GTK_STATE_NORMAL, &color);
gtk_label_set_text(GTK_LABEL (output1), "valid date");
}
b=verifier_champ_vol(V)+a;
if(b!=0)
{
GdkColor color;
gdk_color_parse ("red", &color);
gtk_widget_modify_fg (output2, GTK_STATE_NORMAL, &color);
gtk_label_set_text(GTK_LABEL (output2), "invalid or missing informations ");
}
else
{
strcat(V.date_depart,"/");
strcat(V.date_depart,B);
strcat(V.date_depart,"/");
strcat(V.date_depart,C);
strcat(V.time_depart,":");
strcat(V.time_depart,D);
strcat(V.date_return,"/");
strcat(V.date_return,F);
strcat(V.date_return,"/");
strcat(V.date_return,G);
strcat(V.time_return,":");
strcat(V.time_return,K);

V=identifiant_vol(V);
ajouter_vol(V);

GdkColor color;
gdk_color_parse ("green", &color);
gtk_widget_modify_fg (output2, GTK_STATE_NORMAL, &color);
gtk_label_set_text(GTK_LABEL (output2), "Success Add");
}
}


void on_treeview_admin_vol_6_row_activated  (GtkWidget  *objet_graphique,//buton double click treeview maquette admin_vol//
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
gchar *from,*to,*date_depart,*time_depart,*date_return,*time_return,*airline,*type,*price,*capacity,*id;
GtkWidget *window1;
GtkWidget *window2;
GtkWidget *treeview;
GtkWidget *from_1,*to_1,*date_depart_1,*time_depart_1,*date_return_1,*time_return_1,*airline_1,*type_1,*price_1,*capacity_1,*id_1;


window1=lookup_widget(objet_graphique,"window_admin_vol_6");
treeview=lookup_widget(objet_graphique,"treeview_admin_vol_6");
window2=create_window_modifier_supprimer_vols();

from_1=lookup_widget(window2, "label_vol_from");
to_1=lookup_widget(window2, "label_vol_to");
date_depart_1=lookup_widget(window2, "label_vol_date_depart");
time_depart_1=lookup_widget(window2, "label_vol_time_depart");
date_return_1=lookup_widget(window2, "label_vol_date_return");
time_return_1=lookup_widget(window2, "label_vol_time_return");
airline_1=lookup_widget(window2, "label_vol_airline");
type_1=lookup_widget(window2, "label_vol_type");
price_1=lookup_widget(window2, "label_vol_prix");
capacity_1=lookup_widget(window2, "label_vol_capacity");
id_1=lookup_widget(window2, "label_vol_id");

GtkTreeIter iter;
GtkTreeModel *model=gtk_tree_view_get_model (GTK_TREE_VIEW(treeview));
gtk_tree_model_get_iter(model,&iter,path);
gtk_tree_model_get (model,&iter,0,&id,1,&from,2,&to,3,&date_depart,4,&time_depart,5,&date_return,6,&time_return,7,&airline,8,&type,
9,&price,10,&capacity,-1);

gtk_label_set_text(GTK_LABEL (id_1),_(id));
gtk_label_set_text(GTK_LABEL (from_1),_(from));
gtk_label_set_text(GTK_LABEL (to_1),_(to));
gtk_label_set_text(GTK_LABEL (date_depart_1),_(date_depart));
gtk_label_set_text(GTK_LABEL (time_depart_1),_(time_depart));
gtk_label_set_text(GTK_LABEL (date_return_1),_(date_return));
gtk_label_set_text(GTK_LABEL (time_return_1),_(time_return));
gtk_label_set_text(GTK_LABEL (airline_1),_(airline));
gtk_label_set_text(GTK_LABEL (type_1),_(type));
gtk_label_set_text(GTK_LABEL (price_1),_(price));
gtk_label_set_text(GTK_LABEL (capacity_1),_(capacity));

GdkColor color;
gdk_color_parse ("blue", &color);
gtk_widget_modify_fg (id_1, GTK_STATE_NORMAL, &color);
gtk_widget_modify_fg (from_1, GTK_STATE_NORMAL, &color);
gtk_widget_modify_fg (to_1, GTK_STATE_NORMAL, &color);
gtk_widget_modify_fg (date_depart_1, GTK_STATE_NORMAL, &color);
gtk_widget_modify_fg (time_depart_1, GTK_STATE_NORMAL, &color);
gtk_widget_modify_fg (date_return_1, GTK_STATE_NORMAL, &color);
gtk_widget_modify_fg (time_return_1, GTK_STATE_NORMAL, &color);
gtk_widget_modify_fg (airline_1, GTK_STATE_NORMAL, &color);
gtk_widget_modify_fg (type_1, GTK_STATE_NORMAL, &color);
gtk_widget_modify_fg (price_1, GTK_STATE_NORMAL, &color);
gtk_widget_modify_fg (capacity_1, GTK_STATE_NORMAL, &color);

gtk_widget_destroy(window1);		
gtk_widget_show(window2);

}


void on_button_admin_vols_ms_back_clicked  (GtkWidget  *objet_graphique,gpointer user_data) //buton back maquette modifier_supprimer_vol//
{
GtkWidget *window1;
GtkWidget *window2;
GtkWidget *treeview1;

window1=lookup_widget(objet_graphique,"window_modifier_supprimer_vols");
window2=create_window_admin_vol_6();
gtk_widget_destroy(window1);		
gtk_widget_show(window2);
treeview1=lookup_widget(window2,"treeview_admin_vol_6"); 
afficher_vols(treeview1);
}


void on_button_supprimer_vol_clicked  (GtkWidget  *objet_graphique,gpointer user_data) //bouton supprimer maquette modifier_supprimer_vol//
{
GtkWidget *Window1;
GtkWidget *input1;
GtkWidget *input2;
GtkWidget *input3;
GtkWidget *input4;
GtkWidget *input5;
GtkWidget *input6;
GtkWidget *input7;
GtkWidget *input8;
GtkWidget *input9;
GtkWidget *input10;
GtkWidget *input11;
GtkWidget *output1;
Vols v;

input1=lookup_widget(objet_graphique,"label_vol_id");
input2=lookup_widget(objet_graphique,"label_vol_from");
input3=lookup_widget(objet_graphique,"label_vol_to");
input4=lookup_widget(objet_graphique,"label_vol_date_depart");
input5=lookup_widget(objet_graphique,"label_vol_time_depart");
input6=lookup_widget(objet_graphique,"label_vol_date_return");
input7=lookup_widget(objet_graphique,"label_vol_time_return");
input8=lookup_widget(objet_graphique,"label_vol_airline");
input9=lookup_widget(objet_graphique,"label_vol_type");
input10=lookup_widget(objet_graphique,"label_vol_prix");
input11=lookup_widget(objet_graphique,"label_vol_capacity");
output1=lookup_widget(objet_graphique,"label_confirmation");

strcpy(v.id,gtk_label_get_text(GTK_LABEL(input1)));
strcpy(v.from,gtk_label_get_text(GTK_LABEL(input2)));
strcpy(v.to,gtk_label_get_text(GTK_LABEL(input3)));
strcpy(v.date_depart,gtk_label_get_text(GTK_LABEL(input4)));
strcpy(v.time_depart,gtk_label_get_text(GTK_LABEL(input5)));
strcpy(v.date_return,gtk_label_get_text(GTK_LABEL(input6)));
strcpy(v.time_return,gtk_label_get_text(GTK_LABEL(input7)));
strcpy(v.airline,gtk_label_get_text(GTK_LABEL(input8)));
strcpy(v.type,gtk_label_get_text(GTK_LABEL(input9)));
strcpy(v.price,gtk_label_get_text(GTK_LABEL(input10)));
strcpy(v.capacity,gtk_label_get_text(GTK_LABEL(input11)));

GdkColor color;
gdk_color_parse ("red", &color);
gtk_widget_modify_fg (output1, GTK_STATE_NORMAL, &color);
gtk_label_set_text(GTK_LABEL (output1), "Flight Deleted ");

supprimer_vol(v);
}


void on_button_modifier_vol_back_clicked  (GtkWidget  *objet_graphique,gpointer user_data) //buton back maquette modifier_vol//
{
GtkWidget *window1;
GtkWidget *window2;
GtkWidget *treeview1;

window1=lookup_widget(objet_graphique,"window_modifier_vols");
window2=create_window_admin_vol_6();
gtk_widget_destroy(window1);		
gtk_widget_show(window2);
treeview1=lookup_widget(window2,"treeview_admin_vol_6"); 
afficher_vols(treeview1);
}


void on_button_modifier_vol_confirm_clicked (GtkWidget  *objet_graphique,gpointer user_data) //buton confirm maquette modifier_vol//
{
GtkWidget *input1;
GtkWidget *input2;
GtkWidget *input3;
GtkWidget *input4;
GtkWidget *input5;
GtkWidget *input6;
GtkWidget *input7;
GtkWidget *input8;
GtkWidget *input9;
GtkWidget *input10;
GtkWidget *input11;
GtkWidget *input12;
GtkWidget *input13;
GtkWidget *input14;
GtkWidget *input15;
GtkWidget *input16;
GtkWidget *input17;
GtkWidget *output1;
GtkWidget *output2;
Vols V;
char A[5],B[5],C[5],D[5],E[5],F[5],G[5],K[5];
int a,b;

input1=lookup_widget(objet_graphique,"entry_modif_from");
input2=lookup_widget(objet_graphique,"entry_modif_to");
input3=lookup_widget(objet_graphique,"spinbutton_modif_dday");
input4=lookup_widget(objet_graphique,"spinbutton_modif_dmonth");
input5=lookup_widget(objet_graphique,"spinbutton_modif_dyear");
input6=lookup_widget(objet_graphique,"spinbutton_modif_dhour");
input7=lookup_widget(objet_graphique,"spinbutton_modif_dminute");
input8=lookup_widget(objet_graphique,"spinbutton_modif_rday");
input9=lookup_widget(objet_graphique,"spinbutton_modif_rmonth");
input10=lookup_widget(objet_graphique,"spinbutton_modif_ryear");
input11=lookup_widget(objet_graphique,"spinbutton_modif_rhour");
input12=lookup_widget(objet_graphique,"spinbutton_modif_rminute");
input13=lookup_widget(objet_graphique,"entry_modif_airline");
input14=lookup_widget(objet_graphique,"entry_modif_type");
input15=lookup_widget(objet_graphique,"entry_modif_price");
input16=lookup_widget(objet_graphique,"entry_modif_capacity");
input17=lookup_widget(objet_graphique,"label_id");
output1=lookup_widget(objet_graphique,"label_confirmation1");
output2=lookup_widget(objet_graphique,"label_confirmation2");

strcpy(V.from,gtk_entry_get_text(GTK_ENTRY(input1)));
strcpy(V.to,gtk_entry_get_text(GTK_ENTRY(input2)));
strcpy(A,gtk_entry_get_text(GTK_ENTRY(input3)));
strcpy(V.date_depart,gtk_entry_get_text(GTK_ENTRY(input3)));
strcpy(B,gtk_entry_get_text(GTK_ENTRY(input4)));
strcpy(C,gtk_entry_get_text(GTK_ENTRY(input5)));
strcpy(V.time_depart,gtk_entry_get_text(GTK_ENTRY(input6)));
strcpy(D,gtk_entry_get_text(GTK_ENTRY(input7)));
strcpy(E,gtk_entry_get_text(GTK_ENTRY(input8)));
strcpy(V.date_return,gtk_entry_get_text(GTK_ENTRY(input8)));
strcpy(F,gtk_entry_get_text(GTK_ENTRY(input9)));
strcpy(G,gtk_entry_get_text(GTK_ENTRY(input10)));
strcpy(V.time_return,gtk_entry_get_text(GTK_ENTRY(input11)));
strcpy(K,gtk_entry_get_text(GTK_ENTRY(input12)));
strcpy(V.airline,gtk_entry_get_text(GTK_ENTRY(input13)));
strcpy(V.type,gtk_entry_get_text(GTK_ENTRY(input14)));
strcpy(V.price,gtk_entry_get_text(GTK_ENTRY(input15)));
strcpy(V.capacity,gtk_entry_get_text(GTK_ENTRY(input16)));
strcpy(V.id,gtk_label_get_text(GTK_LABEL(input17)));

a=verifier_date_vol(A,B,C)+verifier_date_return_vol(A,B,C,E,F,G)+verifier_date_vol(E,F,G);
if(a!=0)
{
GdkColor color;
gdk_color_parse ("red", &color);
gtk_widget_modify_fg (output1, GTK_STATE_NORMAL, &color);
gtk_label_set_text(GTK_LABEL (output1), "invalid date");
}
else
{
GdkColor color;
gdk_color_parse ("green", &color);
gtk_widget_modify_fg (output1, GTK_STATE_NORMAL, &color);
gtk_label_set_text(GTK_LABEL (output1), "valid date");
}
b=verifier_champ_vol(V)+a;
if(b!=0)
{
GdkColor color;
gdk_color_parse ("red", &color);
gtk_widget_modify_fg (output2, GTK_STATE_NORMAL, &color);
gtk_label_set_text(GTK_LABEL (output2), "invalid or missing informations ");
}
else
{
strcat(V.date_depart,"/");
strcat(V.date_depart,B);
strcat(V.date_depart,"/");
strcat(V.date_depart,C);
strcat(V.time_depart,":");
strcat(V.time_depart,D);
strcat(V.date_return,"/");
strcat(V.date_return,F);
strcat(V.date_return,"/");
strcat(V.date_return,G);
strcat(V.time_return,":");
strcat(V.time_return,K);

modifier_vol(V);

GdkColor color;
gdk_color_parse ("green", &color);
gtk_widget_modify_fg (output2, GTK_STATE_NORMAL, &color);
gtk_label_set_text(GTK_LABEL (output2), "Success Add");
}
}
void on_button_edit_vol_clicked  (GtkWidget  *objet_graphique,gpointer user_data)  //buton edit maquette modifier_supprimer_vol//         
{
GtkWidget *window1;
GtkWidget *window2;
GtkWidget *input1;
GtkWidget *input2;
GtkWidget *input3;
GtkWidget *input4;
GtkWidget *input5;
GtkWidget *input6;
GtkWidget *input7;
GtkWidget *output1;
GtkWidget *output2;
GtkWidget *output3;
GtkWidget *output4;
GtkWidget *output5;
GtkWidget *output6;
GtkWidget *output7;

char A[3],B[30],C[30],D[20],E[30],F[20],G[30];

window1=lookup_widget(objet_graphique,"window_modifier_supprimer_vols");
window2=create_window_modifier_vols();

window1=lookup_widget(objet_graphique,"window_modifier_supprimer_vols");
input1=lookup_widget(objet_graphique,"label_vol_id");
input2=lookup_widget(objet_graphique,"label_vol_from");
input3=lookup_widget(objet_graphique,"label_vol_to");
input4=lookup_widget(objet_graphique,"label_vol_airline");
input5=lookup_widget(objet_graphique,"label_vol_type");
input6=lookup_widget(objet_graphique,"label_vol_prix");
input7=lookup_widget(objet_graphique,"label_vol_capacity");


strcpy(A,gtk_label_get_text(GTK_LABEL(input1)));
strcpy(B,gtk_label_get_text(GTK_LABEL(input2)));
strcpy(C,gtk_label_get_text(GTK_LABEL(input3)));
strcpy(D,gtk_label_get_text(GTK_LABEL(input4)));
strcpy(E,gtk_label_get_text(GTK_LABEL(input5)));
strcpy(F,gtk_label_get_text(GTK_LABEL(input6)));
strcpy(G,gtk_label_get_text(GTK_LABEL(input7)));

output1=lookup_widget(window2,"label_id");
output2=lookup_widget(window2,"entry_modif_from");
output3=lookup_widget(window2,"entry_modif_to");
output4=lookup_widget(window2,"entry_modif_airline");
output5=lookup_widget(window2,"entry_modif_type");
output6=lookup_widget(window2,"entry_modif_price");
output7=lookup_widget(window2,"entry_modif_capacity");

gtk_label_set_text(GTK_LABEL (output1),(A));
gtk_entry_set_text(GTK_ENTRY (output2),(B));
gtk_entry_set_text(GTK_ENTRY (output3),(C));
gtk_entry_set_text(GTK_ENTRY (output4),(D));
gtk_entry_set_text(GTK_ENTRY (output5),(E));
gtk_entry_set_text(GTK_ENTRY (output6),(F));
gtk_entry_set_text(GTK_ENTRY (output7),(G));

gtk_widget_destroy(window1);		
gtk_widget_show(window2);
}

void on_button_admin_vol_logout_6_clicked  (GtkWidget  *objet_graphique,gpointer user_data) //bouton logout maquette_admin_vol//
{
GtkWidget *window1;
GtkWidget *window2;

window1=lookup_widget(objet_graphique,"window_admin_vol_6");
window2=create_window_start_6();
gtk_widget_destroy(window1);		
gtk_widget_show(window2);
}


/********************************************/  //PARTIE TRAVELS_ADMIN//  /********************************************/ 


void on_button_add_travel_confirm_clicked  (GtkWidget  *objet_graphique,gpointer user_data) //bouton confirm maquette_ajout_travel//
{
GtkWidget *input1;
GtkWidget *input2;
GtkWidget *input3;
GtkWidget *input4;
GtkWidget *input5;
GtkWidget *input6;
GtkWidget *input7;
GtkWidget *input8;
GtkWidget *input9;
GtkWidget *input10;
GtkWidget *input11;
GtkWidget *input12;
GtkWidget *input13;
GtkWidget *input14;
GtkWidget *output1;
GtkWidget *output2;
Travels T;
char A[30],B[30],C[5],D[5],E[5],F[5],G[5],K[5];
int a,b;
GdkColor color;

input1=lookup_widget(objet_graphique,"entry_from_1");
input2=lookup_widget(objet_graphique,"entry_from_2");
input3=lookup_widget(objet_graphique,"entry_to_1");
input4=lookup_widget(objet_graphique,"entry_to_2");
input5=lookup_widget(objet_graphique,"spinbutton_day_1");
input6=lookup_widget(objet_graphique,"spinbutton_month_1");
input7=lookup_widget(objet_graphique,"spinbutton_year_1");
input8=lookup_widget(objet_graphique,"spinbutton_day_2");
input9=lookup_widget(objet_graphique,"spinbutton_month_2");
input10=lookup_widget(objet_graphique,"spinbutton_year_2");
input11=lookup_widget(objet_graphique,"entry_hotel");
input12=lookup_widget(objet_graphique,"combobox_service");
input13=lookup_widget(objet_graphique,"entry_price");
input14=lookup_widget(objet_graphique,"entry_capacity");
output1=lookup_widget(objet_graphique,"label_confirmation_1");
output2=lookup_widget(objet_graphique,"label_confirmation_2");

strcpy(T.from,gtk_entry_get_text(GTK_ENTRY(input1)));
strcpy(A,gtk_entry_get_text(GTK_ENTRY(input2)));
strcpy(T.to,gtk_entry_get_text(GTK_ENTRY(input3)));
strcpy(B,gtk_entry_get_text(GTK_ENTRY(input4)));
strcpy(T.date_depart,gtk_entry_get_text(GTK_ENTRY(input5)));
strcpy(C,gtk_entry_get_text(GTK_ENTRY(input5)));
strcpy(D,gtk_entry_get_text(GTK_ENTRY(input6)));
strcpy(E,gtk_entry_get_text(GTK_ENTRY(input7)));
strcpy(T.date_return,gtk_entry_get_text(GTK_ENTRY(input8)));
strcpy(F,gtk_entry_get_text(GTK_ENTRY(input8)));
strcpy(G,gtk_entry_get_text(GTK_ENTRY(input9)));
strcpy(K,gtk_entry_get_text(GTK_ENTRY(input10)));
strcpy(T.name_hotel,gtk_entry_get_text(GTK_ENTRY(input11)));
strcpy(T.service,gtk_combo_box_get_active_text(GTK_COMBO_BOX(input12)));
strcpy(T.price,gtk_entry_get_text(GTK_ENTRY(input13)));
strcpy(T.capacity,gtk_entry_get_text(GTK_ENTRY(input14)));




a=verifier_date_travel(C,D,E)+verifier_date_return_travel(C,D,E,F,G,K)+verifier_date_travel(F,G,K);
if(a!=0)
{
gdk_color_parse ("red", &color);
gtk_widget_modify_fg (output1, GTK_STATE_NORMAL, &color);
gtk_label_set_text(GTK_LABEL (output1), "invalid date");
}
else
{
gdk_color_parse ("green", &color);
gtk_widget_modify_fg (output1, GTK_STATE_NORMAL, &color);
gtk_label_set_text(GTK_LABEL (output1), "valid date");
}


b=verifier_champ_travel(T)+a;
if(b!=0)
{
gdk_color_parse ("red", &color);
gtk_widget_modify_fg (output2, GTK_STATE_NORMAL, &color);
gtk_label_set_text(GTK_LABEL (output2), "invalid or missing informations ");
}
else
{
strcat(T.from,"/");
strcat(T.from,A);
strcat(T.to,"/");
strcat(T.to,B);
strcat(T.date_depart,"/");
strcat(T.date_depart,D);
strcat(T.date_depart,"/");
strcat(T.date_depart,E);
strcat(T.date_return,"/");
strcat(T.date_return,G);
strcat(T.date_return,"/");
strcat(T.date_return,K);

T=identifiant_travel(T);
ajouter_travel(T);

gdk_color_parse ("green", &color);
gtk_widget_modify_fg (output2, GTK_STATE_NORMAL, &color);
gtk_label_set_text(GTK_LABEL (output2), "Success Add");
}
}


void on_button_add_travel_back_clicked     (GtkWidget  *objet_graphique,gpointer user_data) //bouton back maquette_ajout_travel//   
{
GtkWidget *window1;
GtkWidget *window2;
GtkWidget *treeview1;

window1=lookup_widget(objet_graphique,"window_add_travel_6");
window2=create_window_admin_travel_6();
gtk_widget_destroy(window1);		
gtk_widget_show(window2);
treeview1=lookup_widget(window2,"treeview_admin_travel_6"); 
afficher_travels(treeview1);
}


void on_button_admin_travel_clients_6_clicked   (GtkWidget  *objet_graphique,gpointer user_data) //bouton clients maquette_admin_travel//                                   
{
GtkWidget *window1;
GtkWidget *window2;
GtkWidget *treeview1;

window1=lookup_widget(objet_graphique,"window_admin_travel_6");
window2=create_window_admin_clients_6();
gtk_widget_destroy(window1);		
gtk_widget_show(window2);
treeview1=lookup_widget(window2,"treeview_admin_clients");
afficher_clients(treeview1);
}


void on_button_admin_travel_logout_6_clicked  (GtkWidget  *objet_graphique,gpointer user_data) //bouton logout maquette_admin_travel//                                    
{
GtkWidget *window1;
GtkWidget *window2;

window1=lookup_widget(objet_graphique,"window_admin_travel_6");
window2=create_window_start_6();
gtk_widget_destroy(window1);		
gtk_widget_show(window2);
}


void on_button_admin_travel_add_6_clicked   (GtkWidget  *objet_graphique,gpointer user_data) //bouton add maquette_admin_travel//
{
GtkWidget *window1;
GtkWidget *window2;
GtkWidget *combobox1;

window1=lookup_widget(objet_graphique,"window_admin_travel_6");
window2=create_window_add_travel_6();
combobox1=lookup_widget(window2,"combobox_service");
gtk_combo_box_set_active(combobox1,0);
gtk_widget_destroy(window1);		
gtk_widget_show(window2);
}


void on_treeview_admin_travel_6_row_activated     //bouton double click treeview maquette_admin_travel//
                                        (GtkWidget  *objet_graphique,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
gchar *from,*to,*date_depart,*date_return,*nom_hotel,*service,*price,*capacity,*id;
GtkWidget *window1;
GtkWidget *window2;
GtkWidget *treeview;
GtkWidget *from_1,*to_1,*date_depart_1,*date_return_1,*name_hotel_1,*service_1,*price_1,*capacity_1,*id_1;


window1=lookup_widget(objet_graphique,"window_admin_travel_6");
treeview=lookup_widget(objet_graphique,"treeview_admin_travel_6");
window2=create_window_modifier_supprimer_travel_6();

from_1=lookup_widget(window2, "label_from");
to_1=lookup_widget(window2, "label_to");
date_depart_1=lookup_widget(window2, "label_date_depart");
date_return_1=lookup_widget(window2, "label_date_return");
name_hotel_1=lookup_widget(window2, "label_hotel");
service_1=lookup_widget(window2, "label_service");
price_1=lookup_widget(window2, "label_prix");
capacity_1=lookup_widget(window2, "label_capacity");
id_1=lookup_widget(window2, "label_id");

GtkTreeIter iter;
GtkTreeModel *model=gtk_tree_view_get_model (GTK_TREE_VIEW(treeview));
gtk_tree_model_get_iter(model,&iter,path);
gtk_tree_model_get (model,&iter,0,&id,1,&from,2,&to,3,&date_depart,4,&date_return,5,&nom_hotel,6,&service,7,&price,8,&capacity,-1);

gtk_label_set_text(GTK_LABEL (id_1),_(id));
gtk_label_set_text(GTK_LABEL (from_1),_(from));
gtk_label_set_text(GTK_LABEL (to_1),_(to));
gtk_label_set_text(GTK_LABEL (date_depart_1),_(date_depart));
gtk_label_set_text(GTK_LABEL (date_return_1),_(date_return));
gtk_label_set_text(GTK_LABEL (name_hotel_1),_(nom_hotel));
gtk_label_set_text(GTK_LABEL (service_1),_(service));
gtk_label_set_text(GTK_LABEL (price_1),_(price));
gtk_label_set_text(GTK_LABEL (capacity_1),_(capacity));

GdkColor color;
gdk_color_parse ("blue", &color);
gtk_widget_modify_fg (id_1, GTK_STATE_NORMAL, &color);
gtk_widget_modify_fg (from_1, GTK_STATE_NORMAL, &color);
gtk_widget_modify_fg (to_1, GTK_STATE_NORMAL, &color);
gtk_widget_modify_fg (date_depart_1, GTK_STATE_NORMAL, &color);
gtk_widget_modify_fg (date_return_1, GTK_STATE_NORMAL, &color);
gtk_widget_modify_fg (name_hotel_1, GTK_STATE_NORMAL, &color);
gtk_widget_modify_fg (service_1, GTK_STATE_NORMAL, &color);
gtk_widget_modify_fg (price_1, GTK_STATE_NORMAL, &color);
gtk_widget_modify_fg (capacity_1, GTK_STATE_NORMAL, &color);

gtk_widget_destroy(window1);		
gtk_widget_show(window2);
}


void on_button_ms_travel_delete_6_clicked  (GtkWidget  *objet_graphique,gpointer user_data) //bouton delete maquette_modifier_supprimer//  
{
GtkWidget *input1;
GtkWidget *input2;
GtkWidget *input3;
GtkWidget *input4;
GtkWidget *input5;
GtkWidget *input6;
GtkWidget *input7;
GtkWidget *input8;
GtkWidget *input9;
GtkWidget *output1;
Travels T;

input1=lookup_widget(objet_graphique,"label_id");
input2=lookup_widget(objet_graphique,"label_from");
input3=lookup_widget(objet_graphique,"label_to");
input4=lookup_widget(objet_graphique,"label_date_depart");
input5=lookup_widget(objet_graphique,"label_date_return");
input6=lookup_widget(objet_graphique,"label_hotel");
input7=lookup_widget(objet_graphique,"label_service");
input8=lookup_widget(objet_graphique,"label_prix");
input9=lookup_widget(objet_graphique,"label_capacity");
output1=lookup_widget(objet_graphique,"label_confirmation");

strcpy(T.id,gtk_label_get_text(GTK_LABEL(input1)));
strcpy(T.from,gtk_label_get_text(GTK_LABEL(input2)));
strcpy(T.to,gtk_label_get_text(GTK_LABEL(input3)));
strcpy(T.date_depart,gtk_label_get_text(GTK_LABEL(input4)));
strcpy(T.date_return,gtk_label_get_text(GTK_LABEL(input5)));
strcpy(T.name_hotel,gtk_label_get_text(GTK_LABEL(input6)));
strcpy(T.service,gtk_label_get_text(GTK_LABEL(input7)));
strcpy(T.price,gtk_label_get_text(GTK_LABEL(input8)));
strcpy(T.capacity,gtk_label_get_text(GTK_LABEL(input9)));


GdkColor color;
gdk_color_parse ("red", &color);
gtk_widget_modify_fg (output1, GTK_STATE_NORMAL, &color);
gtk_label_set_text(GTK_LABEL (output1), "Travel Deleted ");

supprimer_travel(T);
}


void on_button_ms_travel_back_6_clicked   (GtkWidget  *objet_graphique,gpointer user_data) //bouton back maquette_modifier_supprimer//  
{
GtkWidget *window1;
GtkWidget *window2;
GtkWidget *treeview1;

window1=lookup_widget(objet_graphique,"window_modifier_supprimer_travel_6");
window2=create_window_admin_travel_6();
gtk_widget_destroy(window1);		
gtk_widget_show(window2);
treeview1=lookup_widget(window2,"treeview_admin_travel_6");
afficher_travels(treeview1);
}


void on_button_ms_travel_edit_6_clicked   (GtkWidget  *objet_graphique,gpointer user_data) //bouton edit maquette_modifier_supprimer// 
{
GtkWidget *window1;
GtkWidget *window2;
GtkWidget *input1;
GtkWidget *input2;
GtkWidget *input3;
GtkWidget *input4;
GtkWidget *input5;
GtkWidget *input6;
GtkWidget *input7;
GtkWidget *output1,*output2,*output3,*output4,*output5,*output6,*output7,*output8,*output9;


char A[3],B[30],C[30],D[20],E[30],F[20],G[30],H[30];

window1=lookup_widget(objet_graphique,"window_modifier_supprimer_travel_6");
window2=create_window_modifier_travel_6();

input1=lookup_widget(objet_graphique,"label_id");
input2=lookup_widget(objet_graphique,"label_from");
input3=lookup_widget(objet_graphique,"label_to");
input4=lookup_widget(objet_graphique,"label_hotel");
input5=lookup_widget(objet_graphique,"label_prix");
input6=lookup_widget(objet_graphique,"label_capacity");


strcpy(A,gtk_label_get_text(GTK_LABEL(input1)));
strcpy(B,gtk_label_get_text(GTK_LABEL(input2)));
strcpy(C,gtk_label_get_text(GTK_LABEL(input3)));
strcpy(D,gtk_label_get_text(GTK_LABEL(input4)));
strcpy(E,gtk_label_get_text(GTK_LABEL(input5)));
strcpy(F,gtk_label_get_text(GTK_LABEL(input6)));

output1=lookup_widget(window2,"label_id");
output2=lookup_widget(window2,"entry_from_1");
output3=lookup_widget(window2,"entry_from_2");
output4=lookup_widget(window2,"entry_to_1");
output5=lookup_widget(window2,"entry_to_2");
output6=lookup_widget(window2,"entry_hotel");
output7=lookup_widget(window2,"entry_price");
output8=lookup_widget(window2,"entry_capacity");
output9=lookup_widget(window2,"combobox_service");

division_chaine(B,G);
division_chaine(C,H);


gtk_label_set_text(GTK_LABEL (output1),(A));
gtk_entry_set_text(GTK_ENTRY (output2),(B));
gtk_entry_set_text(GTK_ENTRY (output3),(G));
gtk_entry_set_text(GTK_ENTRY (output4),(C));
gtk_entry_set_text(GTK_ENTRY (output5),(H));
gtk_entry_set_text(GTK_ENTRY (output6),(D));
gtk_entry_set_text(GTK_ENTRY (output7),(E));
gtk_entry_set_text(GTK_ENTRY (output8),(F));
gtk_combo_box_set_active(output9,0);

gtk_widget_destroy(window1);		
gtk_widget_show(window2);
}


void on_button_modifier_travel_confirm_6_clicked(GtkWidget  *objet_graphique,gpointer user_data) //bouton confirm maquette_modifier//                                    
{
GtkWidget *input1;
GtkWidget *input2;
GtkWidget *input3;
GtkWidget *input4;
GtkWidget *input5;
GtkWidget *input6;
GtkWidget *input7;
GtkWidget *input8;
GtkWidget *input9;
GtkWidget *input10;
GtkWidget *input11;
GtkWidget *input12;
GtkWidget *input13;
GtkWidget *input14;
GtkWidget *input15;
GtkWidget *output1;
GtkWidget *output2;
Travels T;
char A[30],B[30],C[5],D[5],E[5],F[5],G[5],K[5];
int a,b;
GdkColor color;

input1=lookup_widget(objet_graphique,"entry_from_1");
input2=lookup_widget(objet_graphique,"entry_from_2");
input3=lookup_widget(objet_graphique,"entry_to_1");
input4=lookup_widget(objet_graphique,"entry_to_2");
input5=lookup_widget(objet_graphique,"spinbutton_day_1");
input6=lookup_widget(objet_graphique,"spinbutton_month_1");
input7=lookup_widget(objet_graphique,"spinbutton_year_1");
input8=lookup_widget(objet_graphique,"spinbutton_day_2");
input9=lookup_widget(objet_graphique,"spinbutton_month_2");
input10=lookup_widget(objet_graphique,"spinbutton_year_2");
input11=lookup_widget(objet_graphique,"entry_hotel");
input12=lookup_widget(objet_graphique,"combobox_service");
input13=lookup_widget(objet_graphique,"entry_price");
input14=lookup_widget(objet_graphique,"entry_capacity");
input15=lookup_widget(objet_graphique,"label_id");
output1=lookup_widget(objet_graphique,"label_confirmation_1");
output2=lookup_widget(objet_graphique,"label_confirmation_2");

strcpy(T.from,gtk_entry_get_text(GTK_ENTRY(input1)));
strcpy(A,gtk_entry_get_text(GTK_ENTRY(input2)));
strcpy(T.to,gtk_entry_get_text(GTK_ENTRY(input3)));
strcpy(B,gtk_entry_get_text(GTK_ENTRY(input4)));
strcpy(T.date_depart,gtk_entry_get_text(GTK_ENTRY(input5)));
strcpy(C,gtk_entry_get_text(GTK_ENTRY(input5)));
strcpy(D,gtk_entry_get_text(GTK_ENTRY(input6)));
strcpy(E,gtk_entry_get_text(GTK_ENTRY(input7)));
strcpy(T.date_return,gtk_entry_get_text(GTK_ENTRY(input8)));
strcpy(F,gtk_entry_get_text(GTK_ENTRY(input8)));
strcpy(G,gtk_entry_get_text(GTK_ENTRY(input9)));
strcpy(K,gtk_entry_get_text(GTK_ENTRY(input10)));
strcpy(T.name_hotel,gtk_entry_get_text(GTK_ENTRY(input11)));
strcpy(T.service,gtk_combo_box_get_active_text(GTK_COMBO_BOX(input12)));
strcpy(T.price,gtk_entry_get_text(GTK_ENTRY(input13)));
strcpy(T.capacity,gtk_entry_get_text(GTK_ENTRY(input14)));
strcpy(T.id,gtk_label_get_text(GTK_LABEL(input15)));

a=verifier_date_travel(C,D,E)+verifier_date_return_travel(C,D,E,F,G,K)+verifier_date_travel(F,G,K);

if(a!=0)
{
gdk_color_parse ("red", &color);
gtk_widget_modify_fg (output1, GTK_STATE_NORMAL, &color);
gtk_label_set_text(GTK_LABEL (output1), "invalid date");
}
else
{
gdk_color_parse ("green", &color);
gtk_widget_modify_fg (output1, GTK_STATE_NORMAL, &color);
gtk_label_set_text(GTK_LABEL (output1), "valid date");
}


b=verifier_champ_travel(T)+a;
if(b!=0)
{
gdk_color_parse ("red", &color);
gtk_widget_modify_fg (output2, GTK_STATE_NORMAL, &color);
gtk_label_set_text(GTK_LABEL (output2), "invalid or missing informations ");
}
else
{
strcat(T.from,"/");
strcat(T.from,A);
strcat(T.to,"/");
strcat(T.to,B);
strcat(T.date_depart,"/");
strcat(T.date_depart,D);
strcat(T.date_depart,"/");
strcat(T.date_depart,E);
strcat(T.date_return,"/");
strcat(T.date_return,G);
strcat(T.date_return,"/");
strcat(T.date_return,K);

modifier_travel(T);

gdk_color_parse ("green", &color);
gtk_widget_modify_fg (output2, GTK_STATE_NORMAL, &color);
gtk_label_set_text(GTK_LABEL (output2), "Success EDIT");
}

}

void on_button_modifier_travel_back_6_clicked (GtkWidget  *objet_graphique,gpointer user_data) //bouton back maquette_modifier//                                     
{
GtkWidget *window1;
GtkWidget *window2;
GtkWidget *treeview1;

window1=lookup_widget(objet_graphique,"window_modifier_travel_6");
window2=create_window_admin_travel_6();
gtk_widget_destroy(window1);		
gtk_widget_show(window2);
treeview1=lookup_widget(window2,"treeview_admin_travel_6"); 
afficher_travels(treeview1);
}

/********************************************/  //PARTIE HOTELS_ADMIN//  /********************************************/ 



void on_button_admin_hotel_logout_6_clicked      (GtkWidget  *objet_graphique,gpointer user_data)   //bouton logout maquette_admin_hotel//                                    
{
GtkWidget *window1;
GtkWidget *window2;

window1=lookup_widget(objet_graphique,"window_admin_hotel_6");
window2=create_window_start_6();
gtk_widget_destroy(window1);		
gtk_widget_show(window2);
}

void on_button_admin_hotel_add_6_clicked    (GtkWidget  *objet_graphique,gpointer user_data)
{
GtkWidget *window1;
GtkWidget *window2;
GtkWidget *combobox1;

window1=lookup_widget(objet_graphique,"window_admin_hotel_6");
window2=create_window_add_hotel_6();
combobox1=lookup_widget(window2,"combobox_service");
gtk_combo_box_set_active(combobox1,0);
gtk_widget_destroy(window1);		
gtk_widget_show(window2);
}




void
on_button_add_hotel_confirm_clicked    (GtkWidget  *objet_graphique,gpointer user_data)
{
GtkWidget *input1;
GtkWidget *input2;
GtkWidget *input3;
GtkWidget *input4;
GtkWidget *input5;
GtkWidget *input6;
GtkWidget *input7;
GtkWidget *input8;
GtkWidget *input9;
GtkWidget *input10;
GtkWidget *input11;
GtkWidget *input12;
GtkWidget *output1;
GtkWidget *output2;
hotel h;
char C[5],D[5],E[5],F[5],G[5],K[5];
int a,b;
GdkColor color;

input1=lookup_widget(objet_graphique,"entry_namehotel_1");
input2=lookup_widget(objet_graphique,"entry_city_1");
input3=lookup_widget(objet_graphique,"spinbutton_day_1");
input4=lookup_widget(objet_graphique,"spinbutton_month_1");
input5=lookup_widget(objet_graphique,"spinbutton_year_1");
input6=lookup_widget(objet_graphique,"spinbutton_day_2");
input7=lookup_widget(objet_graphique,"spinbutton_month_2");
input8=lookup_widget(objet_graphique,"spinbutton_year_2");
input9=lookup_widget(objet_graphique,"spinbutton_stars");
input10=lookup_widget(objet_graphique,"combobox_service");
input11=lookup_widget(objet_graphique,"entry_price");
input12=lookup_widget(objet_graphique,"entry_capacity");
output1=lookup_widget(objet_graphique,"label_confirmation1");
output2=lookup_widget(objet_graphique,"label_confirmation2");

strcpy(h.name_hotel,gtk_entry_get_text(GTK_ENTRY(input1)));
strcpy(h.city,gtk_entry_get_text(GTK_ENTRY(input2)));
strcpy(h.date_depart,gtk_entry_get_text(GTK_ENTRY(input3)));
strcpy(C,gtk_entry_get_text(GTK_ENTRY(input3)));
strcpy(D,gtk_entry_get_text(GTK_ENTRY(input4)));
strcpy(E,gtk_entry_get_text(GTK_ENTRY(input5)));
strcpy(h.date_fin,gtk_entry_get_text(GTK_ENTRY(input6)));
strcpy(F,gtk_entry_get_text(GTK_ENTRY(input6)));
strcpy(G,gtk_entry_get_text(GTK_ENTRY(input7)));
strcpy(K,gtk_entry_get_text(GTK_ENTRY(input8)));
strcpy(h.stars,gtk_entry_get_text(GTK_ENTRY(input9)));
strcpy(h.service,gtk_combo_box_get_active_text(GTK_COMBO_BOX(input10)));
strcpy(h.price,gtk_entry_get_text(GTK_ENTRY(input11)));
strcpy(h.capacity,gtk_entry_get_text(GTK_ENTRY(input12)));




a=verifier_date_hotel(C,D,E)+verifier_date_fin_hotel(C,D,E,F,G,K)+verifier_date_hotel(F,G,K);
if(a!=0)
{
gdk_color_parse ("red", &color);
gtk_widget_modify_fg (output1, GTK_STATE_NORMAL, &color);
gtk_label_set_text(GTK_LABEL (output1), "invalid date");
}
else
{
gdk_color_parse ("green", &color);
gtk_widget_modify_fg (output1, GTK_STATE_NORMAL, &color);
gtk_label_set_text(GTK_LABEL (output1), "valid date");
}


b=verifier_champ_hotel(h)+a;
if(b!=0)
{
gdk_color_parse ("red", &color);
gtk_widget_modify_fg (output2, GTK_STATE_NORMAL, &color);
gtk_label_set_text(GTK_LABEL (output2), "invalid or missing informations ");
}
else
{

strcat(h.date_depart,"/");
strcat(h.date_depart,D);
strcat(h.date_depart,"/");
strcat(h.date_depart,E);
strcat(h.date_fin,"/");
strcat(h.date_fin,G);
strcat(h.date_fin,"/");
strcat(h.date_fin,K);

h=identifiant_hotel(h);
ajouter_hotel(h);

gdk_color_parse ("green", &color);
gtk_widget_modify_fg (output2, GTK_STATE_NORMAL, &color);
gtk_label_set_text(GTK_LABEL (output2), "Success Add");
}
}


void on_button_add_hotel_back_clicked       (GtkWidget  *objet_graphique,gpointer user_data)
{
GtkWidget *window1;
GtkWidget *window2;
GtkWidget *treeview1;

window1=lookup_widget(objet_graphique,"window_add_hotel_6");
window2=create_window_admin_hotel_6();
gtk_widget_destroy(window1);		
gtk_widget_show(window2);
treeview1=lookup_widget(window2,"treeview_admin_hotel_6"); 
afficher_hotel(treeview1);
}


void on_treeview_admin_hotel_6_row_activated
                                        (GtkWidget  *objet_graphique,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
gchar *nom_hotel,*city,*date_depart,*date_fin,*stars,*service,*price,*capacity,*id;
GtkWidget *window1;
GtkWidget *window2;
GtkWidget *treeview;
GtkWidget *nom_hotel_1,*city_1,*date_depart_1,*date_fin_1,*stars_1,*service_1,*price_1,*capacity_1,*id_1;


window1=lookup_widget(objet_graphique,"window_admin_hotel_6");
treeview=lookup_widget(objet_graphique,"treeview_admin_hotel_6");
window2=create_window_modifier_supprimer_hotel_6();

nom_hotel_1=lookup_widget(window2, "label_nom_hotel");
city_1=lookup_widget(window2, "label_city");
date_depart_1=lookup_widget(window2, "label_date_depart");
date_fin_1=lookup_widget(window2, "label_date_fin");
stars_1=lookup_widget(window2, "label_stars");
service_1=lookup_widget(window2, "label_service");
price_1=lookup_widget(window2, "label_prix");
capacity_1=lookup_widget(window2, "label_capacity");
id_1=lookup_widget(window2, "label_id");

GtkTreeIter iter;
GtkTreeModel *model=gtk_tree_view_get_model (GTK_TREE_VIEW(treeview));
gtk_tree_model_get_iter(model,&iter,path);
gtk_tree_model_get (model,&iter,0,&id,1,&nom_hotel,2,&city,3,&date_depart,4,&date_fin,5,&stars,6,&service,7,&price,8,&capacity,-1);

gtk_label_set_text(GTK_LABEL (id_1),_(id));
gtk_label_set_text(GTK_LABEL (nom_hotel_1),_(nom_hotel));
gtk_label_set_text(GTK_LABEL (city_1),_(city));
gtk_label_set_text(GTK_LABEL (date_depart_1),_(date_depart));
gtk_label_set_text(GTK_LABEL (date_fin_1),_(date_fin));
gtk_label_set_text(GTK_LABEL (stars_1),_(stars));
gtk_label_set_text(GTK_LABEL (service_1),_(service));
gtk_label_set_text(GTK_LABEL (price_1),_(price));
gtk_label_set_text(GTK_LABEL (capacity_1),_(capacity));

GdkColor color;
gdk_color_parse ("blue", &color);
gtk_widget_modify_fg (id_1, GTK_STATE_NORMAL, &color);
gtk_widget_modify_fg (nom_hotel_1, GTK_STATE_NORMAL, &color);
gtk_widget_modify_fg (city_1, GTK_STATE_NORMAL, &color);
gtk_widget_modify_fg (date_depart_1, GTK_STATE_NORMAL, &color);
gtk_widget_modify_fg (date_fin_1, GTK_STATE_NORMAL, &color);
gtk_widget_modify_fg (stars_1, GTK_STATE_NORMAL, &color);
gtk_widget_modify_fg (service_1, GTK_STATE_NORMAL, &color);
gtk_widget_modify_fg (price_1, GTK_STATE_NORMAL, &color);
gtk_widget_modify_fg (capacity_1, GTK_STATE_NORMAL, &color);

gtk_widget_destroy(window1);		
gtk_widget_show(window2);
}


void on_button_ms_hotel_delete_6_clicked    (GtkWidget  *objet_graphique,gpointer user_data)
{
GtkWidget *input1;
GtkWidget *input2;
GtkWidget *input3;
GtkWidget *input4;
GtkWidget *input5;
GtkWidget *input6;
GtkWidget *input7;
GtkWidget *input8;
GtkWidget *input9;
GtkWidget *output1;
hotel h;

input1=lookup_widget(objet_graphique,"label_id");
input2=lookup_widget(objet_graphique,"label_nom_hotel");
input3=lookup_widget(objet_graphique,"label_city");
input4=lookup_widget(objet_graphique,"label_date_depart");
input5=lookup_widget(objet_graphique,"label_date_fin");
input6=lookup_widget(objet_graphique,"label_stars");
input7=lookup_widget(objet_graphique,"label_service");
input8=lookup_widget(objet_graphique,"label_prix");
input9=lookup_widget(objet_graphique,"label_capacity");
output1=lookup_widget(objet_graphique,"label_confirmation");

strcpy(h.id,gtk_label_get_text(GTK_LABEL(input1)));
strcpy(h.name_hotel,gtk_label_get_text(GTK_LABEL(input2)));
strcpy(h.city,gtk_label_get_text(GTK_LABEL(input3)));
strcpy(h.date_depart,gtk_label_get_text(GTK_LABEL(input4)));
strcpy(h.date_fin,gtk_label_get_text(GTK_LABEL(input5)));
strcpy(h.stars,gtk_label_get_text(GTK_LABEL(input6)));
strcpy(h.service,gtk_label_get_text(GTK_LABEL(input7)));
strcpy(h.price,gtk_label_get_text(GTK_LABEL(input8)));
strcpy(h.capacity,gtk_label_get_text(GTK_LABEL(input9)));


GdkColor color;
gdk_color_parse ("red", &color);
gtk_widget_modify_fg (output1, GTK_STATE_NORMAL, &color);
gtk_label_set_text(GTK_LABEL (output1), "Hotel Deleted ");

supprimer_hotel(h);
}



void
on_button_ms_hotel_back_6_clicked      (GtkWidget  *objet_graphique,gpointer user_data)
{
GtkWidget *window1;
GtkWidget *window2;
GtkWidget *treeview1;

window1=lookup_widget(objet_graphique,"window_modifier_supprimer_hotel_6");
window2=create_window_admin_hotel_6();
gtk_widget_destroy(window1);		
gtk_widget_show(window2);
treeview1=lookup_widget(window2,"treeview_admin_hotel_6");
afficher_hotel(treeview1);
}


void on_button_ms_hotel_edit_6_clicked      (GtkWidget  *objet_graphique,gpointer user_data)
{
GtkWidget *window1;
GtkWidget *window2;
GtkWidget *input1;
GtkWidget *input2;
GtkWidget *input3;
GtkWidget *input4;
GtkWidget *input5;
GtkWidget *input6;
GtkWidget *input7;
GtkWidget *output1,*output2,*output3,*output4,*output5,*output6,*output7;


char A[3],B[30],C[30],D[20],E[30],F[20];

window1=lookup_widget(objet_graphique,"window_modifier_supprimer_hotel_6");
window2=create_window_modifier_hotel_6();

input1=lookup_widget(objet_graphique,"label_id");
input2=lookup_widget(objet_graphique,"label_nom_hotel");
input3=lookup_widget(objet_graphique,"label_city");
input4=lookup_widget(objet_graphique,"label_stars");
input5=lookup_widget(objet_graphique,"label_prix");
input6=lookup_widget(objet_graphique,"label_capacity");


strcpy(A,gtk_label_get_text(GTK_LABEL(input1)));
strcpy(B,gtk_label_get_text(GTK_LABEL(input2)));
strcpy(C,gtk_label_get_text(GTK_LABEL(input3)));
strcpy(D,gtk_label_get_text(GTK_LABEL(input4)));
strcpy(E,gtk_label_get_text(GTK_LABEL(input5)));
strcpy(F,gtk_label_get_text(GTK_LABEL(input6)));

output1=lookup_widget(window2,"label_id");
output2=lookup_widget(window2,"entry_namehotel");

output3=lookup_widget(window2,"entry_city");

output4=lookup_widget(window2,"entry_stars");
output5=lookup_widget(window2,"entry_price");
output6=lookup_widget(window2,"entry_capacity");
output7=lookup_widget(window2,"combobox_service");




gtk_label_set_text(GTK_LABEL (output1),(A));
gtk_entry_set_text(GTK_ENTRY (output2),(B));

gtk_entry_set_text(GTK_ENTRY (output3),(C));

gtk_entry_set_text(GTK_ENTRY (output4),(D));
gtk_entry_set_text(GTK_ENTRY (output5),(E));
gtk_entry_set_text(GTK_ENTRY (output6),(F));
gtk_combo_box_set_active(output7,0);

gtk_widget_destroy(window1);		
gtk_widget_show(window2);
}


void on_button_modifier_hotel_confirm_6_clicked  (GtkWidget  *objet_graphique,gpointer user_data)
{
GtkWidget *input1;
GtkWidget *input2;
GtkWidget *input3;
GtkWidget *input4;
GtkWidget *input5;
GtkWidget *input6;
GtkWidget *input7;
GtkWidget *input8;
GtkWidget *input9;
GtkWidget *input10;
GtkWidget *input11;
GtkWidget *input12;
GtkWidget *input13;

GtkWidget *output1;
GtkWidget *output2;
hotel h;
char C[5],D[5],E[5],F[5],G[5],K[5];
int a,b;
GdkColor color;

input1=lookup_widget(objet_graphique,"entry_namehotel");

input2=lookup_widget(objet_graphique,"entry_city");

input3=lookup_widget(objet_graphique,"spinbutton_day_1");
input4=lookup_widget(objet_graphique,"spinbutton_month_1");
input5=lookup_widget(objet_graphique,"spinbutton_year_1");
input6=lookup_widget(objet_graphique,"spinbutton_day_2");
input7=lookup_widget(objet_graphique,"spinbutton_month_2");
input8=lookup_widget(objet_graphique,"spinbutton_year_2");
input9=lookup_widget(objet_graphique,"entry_stars");
input10=lookup_widget(objet_graphique,"combobox_service");
input11=lookup_widget(objet_graphique,"entry_price");
input12=lookup_widget(objet_graphique,"entry_capacity");
input13=lookup_widget(objet_graphique,"label_id");
output1=lookup_widget(objet_graphique,"label_confirmation_1");
output2=lookup_widget(objet_graphique,"label_confirmation_2");

strcpy(h.name_hotel,gtk_entry_get_text(GTK_ENTRY(input1)));

strcpy(h.city,gtk_entry_get_text(GTK_ENTRY(input2)));

strcpy(h.date_depart,gtk_entry_get_text(GTK_ENTRY(input3)));
strcpy(C,gtk_entry_get_text(GTK_ENTRY(input3)));
strcpy(D,gtk_entry_get_text(GTK_ENTRY(input4)));
strcpy(E,gtk_entry_get_text(GTK_ENTRY(input5)));
strcpy(h.date_fin,gtk_entry_get_text(GTK_ENTRY(input6)));
strcpy(F,gtk_entry_get_text(GTK_ENTRY(input6)));
strcpy(G,gtk_entry_get_text(GTK_ENTRY(input7)));
strcpy(K,gtk_entry_get_text(GTK_ENTRY(input8)));
strcpy(h.stars,gtk_entry_get_text(GTK_ENTRY(input9)));
strcpy(h.service,gtk_combo_box_get_active_text(GTK_COMBO_BOX(input10)));
strcpy(h.price,gtk_entry_get_text(GTK_ENTRY(input11)));
strcpy(h.capacity,gtk_entry_get_text(GTK_ENTRY(input12)));
strcpy(h.id,gtk_label_get_text(GTK_LABEL(input13)));

a=verifier_date_hotel(C,D,E)+verifier_date_fin_hotel(C,D,E,F,G,K)+verifier_date_hotel(F,G,K);

if(a!=0)
{
gdk_color_parse ("red", &color);
gtk_widget_modify_fg (output1, GTK_STATE_NORMAL, &color);
gtk_label_set_text(GTK_LABEL (output1), "invalid date");
}
else
{
gdk_color_parse ("green", &color);
gtk_widget_modify_fg (output1, GTK_STATE_NORMAL, &color);
gtk_label_set_text(GTK_LABEL (output1), "valid date");
}


b=verifier_champ_hotel(h)+a;
if(b!=0)
{
gdk_color_parse ("red", &color);
gtk_widget_modify_fg (output2, GTK_STATE_NORMAL, &color);
gtk_label_set_text(GTK_LABEL (output2), "invalid or missing informations ");
}
else
{

strcat(h.date_depart,"/");
strcat(h.date_depart,D);
strcat(h.date_depart,"/");
strcat(h.date_depart,E);
strcat(h.date_fin,"/");
strcat(h.date_fin,G);
strcat(h.date_fin,"/");
strcat(h.date_fin,K);

modifier_hotel(h);

gdk_color_parse ("green", &color);
gtk_widget_modify_fg (output2, GTK_STATE_NORMAL, &color);
gtk_label_set_text(GTK_LABEL (output2), "Success EDIT");
}

}


void on_button_modifier_hotel_back_6_clicked   (GtkWidget  *objet_graphique,gpointer user_data)
{
GtkWidget *window1;
GtkWidget *window2;
GtkWidget *treeview1;

window1=lookup_widget(objet_graphique,"window_modifier_hotel_6");
window2=create_window_admin_hotel_6();
gtk_widget_destroy(window1);		
gtk_widget_show(window2);
treeview1=lookup_widget(window2,"treeview_admin_hotel_6"); 
afficher_hotel(treeview1);
}


void on_button_admin_hotel_client_6_clicked (GtkWidget  *objet_graphique,gpointer user_data)
{
GtkWidget *window1;
GtkWidget *window2;
GtkWidget *treeview1;

window1=lookup_widget(objet_graphique,"window_admin_hotel_6");
window2=create_window_admin_clients_6();
gtk_widget_destroy(window1);		
gtk_widget_show(window2);
treeview1=lookup_widget(window2,"treeview_admin_clients");
afficher_clients(treeview1);
}

