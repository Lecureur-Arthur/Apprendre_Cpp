#ifndef SEGMENT_H
#define SEGMENT_H

#include "element.h"
#include <iostream>
#include <iomanip>
class Segment : public Element
{
private:
    double longueur;
    double angle;
public:
    Segment(const double _longueur,const double _angle,int _vitesse=1); //mettre le par default a la fin
    void Afficher();

};

#endif // SEGMENT_H
