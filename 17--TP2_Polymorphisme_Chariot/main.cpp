#include <iostream>
#include"element.h"
#include"trajectoire.h"
#include"segment.h"
using namespace std;

int main()
{
    Trajectoire sauccise(10);
    Element *element,*elementbis;
    element = new Segment(10,10,3);
    elementbis = new Segment(10,10);

    //sauccise.Afficher();



    sauccise.Ajouter(element);
    sauccise.Ajouter(elementbis);

    sauccise.Afficher();


    // element->Afficher();
    //elementbis->Afficher();






    return 0;
}
