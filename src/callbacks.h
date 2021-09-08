#include <gtk/gtk.h>


void on_button_start_register_6_clicked          (GtkWidget  *objet_graphique,gpointer user_data);

void on_button_start_login_6_clicked             (GtkWidget  *objet_graphique,gpointer user_data);

void on_button_start_show1_6_clicked             (GtkWidget  *objet_graphique,gpointer user_data);

void on_button_start_show2_6_clicked             (GtkWidget  *objet_graphique,gpointer user_data);
 
void on_button_start_show3_6_clicked             (GtkWidget  *objet_graphique,gpointer user_data);

void on_button_start_back_6_clicked              (GtkWidget  *objet_graphique,gpointer user_data);

void on_button_add_client_confirm_6_clicked      (GtkWidget  *objet_graphique,gpointer user_data);

void on_button_add_client_back_6_clicked         (GtkWidget  *objet_graphique,gpointer user_data); 

void on_button_admin_start_clients_6_clicked     (GtkWidget  *objet_graphique,gpointer user_data);
                                        
void on_button_admin_start_logout_6_clicked      (GtkWidget  *objet_graphique,gpointer user_data);

void on_treeview_admin_clients_row_activated
                                                (GtkWidget  *objet_graphique,
                                                       GtkTreePath     *path,
                                                   GtkTreeViewColumn *column,
                                                 gpointer         user_data);

void on_button_admin_clients_logout_6_clicked    (GtkWidget  *objet_graphique,gpointer user_data);
                                        
void on_button_admin_clients_ajout_6_clicked     (GtkWidget  *objet_graphique,gpointer user_data);

void on_button_back_admin_clients_clicked        (GtkWidget  *objet_graphique,gpointer user_data);
                                     
void on_button_ms_clients_delete_clicked         (GtkWidget  *objet_graphique,gpointer user_data); 

void on_button_ms_clients_back_clicked           (GtkWidget  *objet_graphique,gpointer user_data);  

void on_button_modifier_clients_confirm_clicked  (GtkWidget  *objet_graphique,gpointer user_data);
                                      
void on_button_modifier_clients_back_clicked     (GtkWidget  *objet_graphique,gpointer user_data);
                                      
void on_button_ms_clients_edit_clicked           (GtkWidget  *objet_graphique,gpointer user_data);

void on_combobox_admin_start_6_changed           (GtkWidget  *objet_graphique,gpointer user_data);
 
void on_button_admin_vol_client_6_clicked        (GtkWidget  *objet_graphique,gpointer user_data);  
 
void on_button_admin_vol_ajout_6_clicked         (GtkWidget  *objet_graphique,gpointer user_data);     

void on_button_vol_ajout_back_clicked            (GtkWidget  *objet_graphique,gpointer user_data);  

void on_button_vol_ajout_confim_clicked          (GtkWidget  *objet_graphique,gpointer user_data); 

void on_treeview_admin_vol_6_row_activated  (GtkWidget  *objet_graphique,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                   gpointer         user_data);

void on_button_admin_vols_ms_back_clicked        (GtkWidget  *objet_graphique,gpointer user_data); 

void on_button_supprimer_vol_clicked             (GtkWidget  *objet_graphique,gpointer user_data);
      
void on_button_modifier_vol_back_clicked         (GtkWidget  *objet_graphique,gpointer user_data);

void on_button_modifier_vol_confirm_clicked      (GtkWidget  *objet_graphique,gpointer user_data);

void on_button_edit_vol_clicked                  (GtkWidget  *objet_graphique,gpointer user_data);     

void on_button_admin_vol_logout_6_clicked        (GtkWidget  *objet_graphique,gpointer user_data); 

void on_button_add_travel_confirm_clicked        (GtkWidget  *objet_graphique,gpointer user_data);  

void on_button_add_travel_back_clicked           (GtkWidget  *objet_graphique,gpointer user_data);   

void on_button_admin_travel_clients_6_clicked    (GtkWidget  *objet_graphique,gpointer user_data);
                                        
void on_button_admin_travel_logout_6_clicked     (GtkWidget  *objet_graphique,gpointer user_data);
                                       
void on_button_admin_travel_add_6_clicked        (GtkWidget  *objet_graphique,gpointer user_data);


void on_treeview_admin_travel_6_row_activated
                                        (GtkWidget  *objet_graphique,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void on_button_ms_travel_delete_6_clicked        (GtkWidget  *objet_graphique,gpointer user_data);


void on_button_ms_travel_back_6_clicked          (GtkWidget  *objet_graphique,gpointer user_data); 

void on_button_ms_travel_edit_6_clicked          (GtkWidget  *objet_graphique,gpointer user_data);

void on_button_modifier_travel_confirm_6_clicked (GtkWidget  *objet_graphique,gpointer user_data);
                                       
void on_button_modifier_travel_back_6_clicked    (GtkWidget  *objet_graphique,gpointer user_data);
                                        

void on_button_admin_hotel_logout_6_clicked      (GtkWidget  *objet_graphique,gpointer user_data);

void on_button_admin_hotel_add_6_clicked         (GtkWidget  *objet_graphique,gpointer user_data);

void on_button_add_hotel_confirm_clicked    (GtkWidget  *objet_graphique,gpointer user_data);

void on_button_add_hotel_back_clicked      (GtkWidget  *objet_graphique,gpointer user_data);

void on_treeview_admin_hotel_6_row_activated
                                        (GtkWidget  *objet_graphique,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);




void on_button_ms_hotel_delete_6_clicked    (GtkWidget  *objet_graphique,gpointer user_data);

void on_button_ms_hotel_back_6_clicked      (GtkWidget  *objet_graphique,gpointer user_data);

void on_button_ms_hotel_edit_6_clicked    (GtkWidget  *objet_graphique,gpointer user_data);

void on_button_modifier_hotel_confirm_6_clicked  (GtkWidget  *objet_graphique,gpointer user_data);
                                       

void on_button_modifier_hotel_back_6_clicked  (GtkWidget  *objet_graphique,gpointer user_data);
                                        

void on_button_admin_hotel_client_6_clicked (GtkWidget  *objet_graphique,gpointer user_data);
