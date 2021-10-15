#include "segment.h"
#include "element.h"

Segment::Segment(const double _longueur, const double _angle,int _vitesse):
    Element(_vitesse),
    longueur(_longueur),
    angle(_angle)
{

}

void Segment::Afficher()
{
  cout<<"("<<numero<<")"<<"SEGMENT L = "<<longueur<<setfill(' ')<<setw(10)<<"A = "<<angle<<setfill(' ')<<setw(10)<<"V = "<<vitesse<<endl;

}
