#ifndef BARRERECTANGLE_H
#define BARRERECTANGLE_H

#include "barre.h"


class BarreRectangle : public Barre
{
public:
    BarreRectangle(const string _reference, const string _nom, const float _longeur,
                   const float _densite, const float _longeurCote, const float _largeurCote);
protected:
    float longeurCote;
    float largeurCote;
};

#endif // BARRERECTANGLE_H
