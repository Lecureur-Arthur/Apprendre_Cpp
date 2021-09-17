#include "instrumentdemusique.h"

InstrumentDeMusique::InstrumentDeMusique(const string _nom): nom(_nom)
{
    cout << "Constructeur InstrumentDeMusique" << endl;
}

InstrumentDeMusique::~InstrumentDeMusique()
{
    cout << "Destructeur InstrumentDeMusique" << endl;
}

void InstrumentDeMusique::Afficher()
{
    cout << "Le nom de l'instrument est : " << nom << endl;
}
