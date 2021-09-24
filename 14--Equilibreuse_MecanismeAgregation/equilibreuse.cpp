#include "equilibreuse.h"

Equilibreuse::Equilibreuse():
    laCarte("carte magique")

{
    leCodeur = new Codeur(laCarte);
    leMoteur = new Moteur(laCarte,5,4.0);
}

Equilibreuse::~Equilibreuse()
{
    delete leCodeur;
    delete leMoteur;
    cout<<"Destructeur equilibreuse"<<endl;
}

