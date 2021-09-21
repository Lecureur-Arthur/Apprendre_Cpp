#ifndef GUITARE_H
#define GUITARE_H

#include "instrumentacordes.h"

class Guitare : public InstrumentACordes
{
private:
    string model;
public:
    Guitare(const string _model, const int _nbCorde, const string _nom);
    ~Guitare();
    void Afficher();
};

#endif // GUITARE_H
