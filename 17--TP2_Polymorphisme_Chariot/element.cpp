#include "element.h"


Element::Element(const int _vitesse):vitesse(_vitesse)
{

}

Element::~Element()
{

}

int Element::getNumero() const
{
    return numero;
}

void Element::setNumero(int value)
{
    numero = value;
}

int Element::getVitesse() const
{
    return vitesse;
}

void Element::setVitesse(int value)
{
    vitesse = value;
}

void Element::Afficher()
{

}
