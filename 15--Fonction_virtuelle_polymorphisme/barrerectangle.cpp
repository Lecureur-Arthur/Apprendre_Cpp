#include "barrerectangle.h"



BarreRectangle::BarreRectangle(const string _reference, const string _nom, const float _longeur, const float _densite,
                               const float _longeurCote, const float _largeurCote):
    Barre(_reference,_nom,_longeur,_densite),
    longeurCote(_longeurCote),
    largeurCote(_largeurCote)
{
    cout << "Les caraterisitique de la barre rectangle : " << endl;
    AfficherCaracteristiques();
    cout << "Masse Barre Rectangle : " << CalculerMasse() << endl;
}

float BarreRectangle::CalculerSection()
{
    return longeurCote * largeurCote;
}

float BarreRectangle::CalculerMasse()
{
    return longueur * CalculerSection() * densite;
}

void BarreRectangle::AfficherCaracteristiques()
{
    Barre::AfficherCaracteristiques();
    cout << "Longueur de la barre rectangle est   : " << longeurCote << endl;
    cout << "Largeur de la barre rectangle est   : " << largeurCote << endl;
}
