#ifndef BARRERONDE_H
#define BARRERONDE_H

#include "barre.h"


class BarreRonde : public Barre
{
private:
    float diametre;
public:
    BarreRonde(const string _reference, const string _nom, const float _longeur, const float _densite, const float _diametre);
    float CalculerSection();
    float CalculerMasse();
    void AfficherCaracteristiques();
};

#endif // BARRERONDE_H
