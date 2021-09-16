#include "caissedebouteilles.h"
#include <iostream>

using namespace std;


Caissedebouteilles::Caissedebouteilles(const int _largeur, const int _hauteur, const int _profondeur, const int _nbBouteille, const int _contenance):
    Contenant(_largeur,_hauteur,_profondeur),
    nbBouteilles(_nbBouteille),
    contenance(_contenance)
{
    cout<<"Constructeur caisse de bouteille" << endl;
}

int Caissedebouteilles::CalculerVolume()
{
    return nbBouteilles * contenance;
}

Caissedebouteilles::~Caissedebouteilles(){
    cout<<"Destructeur caisse de bouteille" << endl;
}
