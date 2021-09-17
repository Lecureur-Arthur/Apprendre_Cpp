#include <iostream>
#include "instrumentdemusique.h"
#include "instrumentacordes.h"
#include "guitare.h"

using namespace std;

int main()
{
    InstrumentDeMusique unInstrumentDeMusique("Piano");
    unInstrumentDeMusique.Afficher();

    InstrumentACordes unInstrumentACordes(4,"basse");
    unInstrumentACordes.Afficher();

    Guitare uneGuitare("Fender", 6, "Guitare");
    uneGuitare.Afficher();

    return 0;
}
