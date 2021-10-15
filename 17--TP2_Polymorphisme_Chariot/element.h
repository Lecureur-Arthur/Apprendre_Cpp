#ifndef ELEMENT_H
#define ELEMENT_H

#include <iostream>
using namespace  std;
class Element
{
protected:

    int numero;
    int vitesse;

    //   int parcours;
public:
    Element(int _vitesse=1);

    virtual ~Element();
    virtual void Afficher() =0;

    int getNumero() const;
    void setNumero(int value);
    int getVitesse() const;
    void setVitesse(int value);
};

#endif // ELEMENT_H
