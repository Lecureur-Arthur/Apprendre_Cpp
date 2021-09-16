#ifndef BARRERONDE_H
#define BARRERONDE_H

#include "barre.h"


class BarreRonde : public Barre
{
protected:
    float diametre;
public:
    BarreRonde(const string _reference, const string _nom, const float _longeur, const float _densite, const float _diametre);
};

#endif // BARRERONDE_H
