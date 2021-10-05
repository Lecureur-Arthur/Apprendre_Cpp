#ifndef CATALOGUE_H
#define CATALOGUE_H

#include "barre.h"


class catalogue
{
private:
    Barre **lesBarres;  //pour la création d'un tableau de pointeurs de barre
    int index;          //index de la prochaine case libre du tableau
    const int nbBarres; //nombre maxi de barres dans le tableau
public:
    catalogue(const int _nbBarres);
    virtual ~catalogue();
    virtual bool AjouterBarre(Barre *ptrBarre);
    virtual void AfficherCatalogue();
};

#endif // CATALOGUE_H
