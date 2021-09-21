#include "guitare.h"


Guitare::Guitare(const string _model, const int _nbCorde, const string _nom):
    InstrumentACordes(_nbCorde,_nom),
    model(_model)
{
    cout << "Constructeur Guitare" << endl;
}

Guitare::~Guitare()
{
    cout << "Destruction Guitare" << endl;
}

void Guitare::Afficher()
{
    InstrumentACordes::Afficher();
    cout << "Son model est de type : " << model << endl;
}
