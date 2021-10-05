#include <iostream>
#include "barre.h"
#include "barrecarree.h"
#include "barrerectangle.h"
#include "barreronde.h"
#include "catalogue.h"
#include "menu.h"

using namespace std;

int main()
{
/*
    Barre premiereBarre("XM2F", "Aluminium", 10.5, 3);
    cout << "----------------------------------------------------------------------------------" << endl;
    BarreCarree premiereBarreCarree("XZM27Z", "Acier", 25, 4, 3);
    cout << "----------------------------------------------------------------------------------" << endl;
    BarreRectangle premiereBarreRectangle("FGSQ465KLOFS", "Metal_XD", 100, 50, 10, 3);
    cout << "----------------------------------------------------------------------------------" << endl;
    BarreRonde premiereBarreRonde("DGHJKP543DFB23", "Allu", 59, 30, 3);*/


    int choix;
    Menu leMenu("../15--Fonction_virtuelle_polymorphisme/menu.txt");

    cout << "Menu" << endl;
    do {

            choix = leMenu.Afficher();
            switch (choix) {
            case OPTION_1: //
                cout << "choix 1" << endl;
                Menu::AttendreAppuiTouche();
                break;
            case OPTION_2: //
                cout << "choix 2" << endl;
                Menu::AttendreAppuiTouche();
                break;
            case OPTION_3: //
                cout << "choix 3" << endl;
                Menu::AttendreAppuiTouche();
                break;
            case RETOUR: //quitter le menu
                cout << "Vous quitter le menu" << endl;
                Menu::AttendreAppuiTouche();
                break;
            }
        } while (choix != RETOUR);


    catalogue monCatalogue(2);
    monCatalogue.AfficherCatalogue();


    return 0;
}
