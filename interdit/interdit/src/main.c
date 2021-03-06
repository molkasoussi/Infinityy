/*
 * Initial main.c file generated by Glade. Edit as required.
 * Glade will not overwrite this file.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "interface.h"
#include "support.h"

int
main (int argc, char *argv[])
{
  GtkWidget *esp_ajou;
  GtkWidget *esp_mod;
  GtkWidget *esp_aff,*treeview1;
  GtkWidget *esp_supp;
	

#ifdef ENABLE_NLS
  bindtextdomain (GETTEXT_PACKAGE, PACKAGE_LOCALE_DIR);
  bind_textdomain_codeset (GETTEXT_PACKAGE, "UTF-8");
  textdomain (GETTEXT_PACKAGE);
#endif

  gtk_set_locale ();
  gtk_init (&argc, &argv);

  add_pixmap_directory (PACKAGE_DATA_DIR "/" PACKAGE "/pixmaps");

  /*
   * The following code was added by Glade to create one of each component
   * (except popup menus), just so that you see something after building
   * the project. Delete any components that you don't want shown initially.
   */
  /*esp_ajou = create_esp_ajou ();
  gtk_widget_show (esp_ajou);*/

 /* esp_mod = create_esp_mod ();
  gtk_widget_show (esp_mod);*/
  esp_aff = create_esp_aff ();
  gtk_widget_show (esp_aff);
  treeview1=lookup_widget(esp_aff,"treeview1");
  afficher_capteur(treeview1);
  /*esp_supp = create_esp_supp ();
  gtk_widget_show (esp_supp);*/

  gtk_main ();
  return 0;
}

