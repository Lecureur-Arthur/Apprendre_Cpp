#ifndef TRAJECTOIRE_H
#define TRAJECTOIRE_H
#include <element.h>

#include"element.h"

class Trajectoire
{
private:
    Element **parcours;
    int nbEtapesMax;
    int prochaineEtape;
public:
    Trajectoire(const int _nbEtapesMaxi,const int _prochaineEtape=0);
    ~Trajectoire();
bool Ajouter(Element * _pElement);
void Afficher();
};

#endif // TRAJECTOIRE_H
