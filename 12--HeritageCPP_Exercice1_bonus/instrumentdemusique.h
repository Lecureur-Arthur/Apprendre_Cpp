#ifndef INSTRUMENTDEMUSIQUE_H
#define INSTRUMENTDEMUSIQUE_H

#include <iostream>
#include <string.h>

using namespace std;

class InstrumentDeMusique
{
protected:
    string nom;
public:
    InstrumentDeMusique(const string _nom);
    ~InstrumentDeMusique();
    void Afficher();
};

#endif // INSTRUMENTDEMUSIQUE_H
