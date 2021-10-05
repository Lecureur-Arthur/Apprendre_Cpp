#ifndef MENU_H
#define MENU_H

#include <string>
#include <algorithm>
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;


class Menu
{
private:
    /// nom du fichier à ouvrir pour créer le menu
    string nom;
    /// La plus grande longueur d'un item
    int longueurMax;
    /// Nombre d'items du menu
    int nbOptions;
    /// Pointeur sur tableau des items
    string *options;
public:
    Menu(const std::string &_nom);
    ~Menu();
    int Afficher();
    static void AttendreAppuiTouche();
};

class Exception
{
public:
    Exception(int _code, std::string _message);
    int ObtenirCodeErreur() const;
    std::string ObtenirMessage() const;

private:
    int code;
    std::string message;
};

enum CHOIX
{
    OPTION_1 = 1,
    OPTION_2,
    OPTION_3,
    RETOUR
};

#endif // MENU_H
