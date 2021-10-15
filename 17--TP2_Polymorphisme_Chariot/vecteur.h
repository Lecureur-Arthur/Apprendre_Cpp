#ifndef VECTEUR_H
#define VECTEUR_H


class Vecteur
{
private:
    double x;
    double y;
public:
    Vecteur(const double _x, const double _y);
    Vecteur operator +(Vecteur);
    Vecteur operator -(Vecteur);
    void Afficher();

    //GETTER & SETTER de x
    double getX() const;
    void setX(double value);
    //GETTER & SETTER de y
    double getY() const;
    void setY(double value);
};

#endif // VECTEUR_H
