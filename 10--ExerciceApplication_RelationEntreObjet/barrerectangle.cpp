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
    return longeur * CalculerSection() * densite;
}

void BarreRectangle::AfficherCaracteristiques()
{
    cout << "La référence de la barre est : " << reference << endl;
    cout << "Le nom de la barre est       : " << nom << endl;
    cout << "La longeur de la barre est   : " << longeur << endl;
    cout << "La densite de la barre est   : " << densite << endl;
}
