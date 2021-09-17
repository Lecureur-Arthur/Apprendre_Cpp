#include "barre.h"
#include <iostream>
#include <string.h>



Barre::Barre(const string _reference, const string _nom, const float _longeur, const float _densite):
    reference(_reference),
    nom(_nom),
    longueur(_longeur),
    densite(_densite)
{
    cout << "Constructeur de la Barre" << endl;
}

void Barre::AfficherCaracteristiques()
{
    cout << "La référence de la barre est : " << reference << endl;
    cout << "Le nom de la barre est       : " << nom << endl;
    cout << "La longeur de la barre est   : " << longueur << endl;
    cout << "La densite de la barre est   : " << densite << endl;
}
