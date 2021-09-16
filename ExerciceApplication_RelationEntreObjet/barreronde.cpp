#include "barreronde.h"


BarreRonde::BarreRonde(const string _reference, const string _nom, const float _longeur, const float _densite, const float _diametre):
    Barre(_reference,_nom,_longeur,_densite),
    diametre(_diametre)
{
    cout << "Masse Barre &éRonde : " << CalculerMasse() << endl;
}

float BarreRonde::CalculerSection()
{
    return (3.141592 * (diametre * diametre))/4;
}

float BarreRonde::CalculerMasse()
{
    return longeur * CalculerSection() * densite;
}
