#include "catalogue.h"

#include <iostream>
using namespace std;

//Constructeur catalogue
catalogue::catalogue(const int _nbBarres):nbBarres(_nbBarres)
{
    lesBarres = new Barre *[nbBarres];
    index = 0;
}

//Destructeur catalogue
catalogue::~catalogue()
{
    delete[] lesBarres;
}

//Peremet d'ajouter un barre grace a un pointeur
bool catalogue::AjouterBarre(Barre *ptrBarre)
{
    bool retour = true;
    if (index < nbBarres)
        lesBarres[index++]=ptrBarre;
    else
        retour = false;
    return retour;
}

//Affichage de catalogue
void catalogue::AfficherCatalogue()
{
    for (int indice = 0; indice < index; indice++) {
        lesBarres[indice]->AfficherCaracteristiques();
        cout << lesBarres[indice]->CalculerMasse() << endl;
    }
}
