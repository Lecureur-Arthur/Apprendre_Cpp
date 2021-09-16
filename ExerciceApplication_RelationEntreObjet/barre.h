#ifndef BARRE_H
#define BARRE_H

#include <iostream>
#include <string.h>

using namespace std;

class Barre
{
protected:
    string reference;
    string nom;
    float longeur;
    float densite;
public:
    Barre(const string _reference, const string _nom, const float _longeur, const float _densite);
    void AfficherCaracteristique();
};

#endif // BARRE_H
