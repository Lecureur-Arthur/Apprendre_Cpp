#include "vecteur.h"

Vecteur::Vecteur(const double _x, const double _y):x(_x),y(_y)
{

}

Vecteur Vecteur::operator +(Vecteur)
{

}

Vecteur Vecteur::operator -(Vecteur)
{

}

void Vecteur::Afficher()
{

}

//---------------------------------------------------------------------------------//

//GETTER de y
double Vecteur::getY() const
{
    return y;
}
//SETTER de y
void Vecteur::setY(double value)
{
    y = value;
}
//GETTER de x
double Vecteur::getX() const
{
    return x;
}
//SETTER de x
void Vecteur::setX(double value)
{
    x = value;
}
