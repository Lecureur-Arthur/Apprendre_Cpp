#ifndef BARRECARREE_H
#define BARRECARREE_H

#include "barre.h"


class BarreCarree : public Barre
{
private:
    float longueurCote;
public:
    BarreCarree(const string _reference, const string _nom, const float _longeur, const float _densite, const float _longeurCote);
    float CalculerSection();
    float CalculerMasse();
    void AfficherCaracteristiques();
};

#endif // BARRECARREE_H
