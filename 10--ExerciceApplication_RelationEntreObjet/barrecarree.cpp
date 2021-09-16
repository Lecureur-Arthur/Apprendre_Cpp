#include "barrecarree.h"

using namespace std;

BarreCarree::BarreCarree(const string _reference, const string _nom, const float _longeur, const float _densite, const float _longeurCote):
    Barre(_reference,_nom,_longeur,_densite),
    longueurCote(_longeurCote)
{
    cout << "Masse Barre Carree : " << CalculerMasse() << endl;
}

float BarreCarree::CalculerSection()
{
    return longueurCote * longueurCote;
}

float BarreCarree::CalculerMasse()
{
    return longeur * CalculerSection() * densite;
}
