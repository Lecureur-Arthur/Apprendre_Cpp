#include <iostream>
#include "trajectoire.h"
#include "element.h"
#include "segment.h"

using namespace std;

int main()
{
    Trajectoire traj1(3);
    traj1.Afficher();

    Segment segment1(20,40,3);
    segment1.Afficher();

    Segment segment2(10,20);
    segment2.Afficher();

}
