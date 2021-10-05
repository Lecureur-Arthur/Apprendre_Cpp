#ifndef BARRE_H
#define BARRE_H

#include <iostream>
#include <string.h>

using namespace std;

class Barre
{
public:
    Barre(const string _reference, const string _nom, const float _longeur, const float _densite);
    void AfficherCaracteristiques();
    virtual float CalculerMasse() = 0; //fonction virtuelle pure
protected:
    string reference;
    string nom;
    float longueur;
    float densite;
};

#endif // BARRE_H
