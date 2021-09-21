#ifndef INSTRUMENTACORDES_H
#define INSTRUMENTACORDES_H

#include "instrumentdemusique.h"

class InstrumentACordes : public InstrumentDeMusique
{
protected:
    int nbCordes;
public:
    InstrumentACordes(const int _nbCordes, const string _nom);
    ~InstrumentACordes();
    void Afficher();
};

#endif // INSTRUMENTACORDES_H
