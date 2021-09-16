#ifndef CAISSEDEBOUTEILLES_H
#define CAISSEDEBOUTEILLES_H
#include "contenant.h"


class Caissedebouteilles : public Contenant
{
public:
    Caissedebouteilles(const int _largeur, const int _hauteur,
                       const int _profondeur, const int _nbBouteille, const int _contenance);
    int CalculerVolume();
    ~Caissedebouteilles();
private:
    int nbBouteilles;
    int contenance;
};

#endif // CAISSEDEBOUTEILLES_H
