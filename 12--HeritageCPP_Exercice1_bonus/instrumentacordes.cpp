#include "instrumentacordes.h"


InstrumentACordes::InstrumentACordes(const int _nbCordes, const string _nom):
    InstrumentDeMusique(_nom),
    nbCordes(_nbCordes)
{
    cout << "Construction InstrumentACorde" << endl;
}

InstrumentACordes::~InstrumentACordes()
{
    cout << "Destruction InstrumentACorde" << endl;
}

void InstrumentACordes::Afficher()
{
    InstrumentDeMusique::Afficher();
    cout << "Son nombre de cordes est : " << nbCordes << endl;
}
