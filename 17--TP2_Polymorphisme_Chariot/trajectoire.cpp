#include "trajectoire.h"

Trajectoire::Trajectoire(const int _nbEtapesMaxi,int _prochaineEtape):
    nbEtapesMax(_nbEtapesMaxi),
    prochaineEtape(_prochaineEtape)
{
parcours=new Element* [_nbEtapesMaxi];
}

Trajectoire::~Trajectoire()
{

}

bool Trajectoire::Ajouter(Element *_pElement)
{
    bool retour = true;
    if (prochaineEtape<nbEtapesMax){

        parcours[prochaineEtape] =_pElement;

        _pElement->setNumero(prochaineEtape);
        prochaineEtape=prochaineEtape+1;
    }

    else{
        retour = false;
    }

    return retour;
}


void Trajectoire::Afficher()
{

    cout << "Trajectoire : " << endl << endl;

    for (int i=0;i<prochaineEtape;i++){
        parcours[i]->Afficher();

    }
}
