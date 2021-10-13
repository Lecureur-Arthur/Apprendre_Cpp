#ifndef ELEMENT_H
#define ELEMENT_H

#include <iostream>

#include <iomanip>

using namespace std;

class Element
{
public:
    Element(const int _vitesse=1);
    virtual ~Element();
    virtual void Afficher()=0;

    int getNumero() const;
    void setNumero(int value);

    int getVitesse() const;
    void setVitesse(int value);

protected:
    int numero;
    int vitesse;
};

#endif // ELEMENT_H
