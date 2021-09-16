#ifndef BARRECARREE_H
#define BARRECARREE_H

#include "barre.h"


class BarreCarree : public Barre
{
public:
    BarreCarree(const string _reference, const string _nom, const float _longeur, const float _densite, const float _longeurCote);
protected:
    float longeurCote;
};

#endif // BARRECARREE_H
