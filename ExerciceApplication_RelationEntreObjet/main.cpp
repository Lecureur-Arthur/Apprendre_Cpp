#include <iostream>
#include "barre.h"
#include "barrecarree.h"
#include "barrerectangle.h"
#include "barreronde.h"

using namespace std;

int main()
{

    Barre premiereBarre("XM2F", "Aluminium", 10.5, 3);
    cout << "----------------------------------------------------------------------------------" << endl;
    BarreCarree premiereBarreCarree("XZM27Z", "Acier", 25, 4, 3);
    cout << "----------------------------------------------------------------------------------" << endl;
    BarreRectangle premiereBarreRectangle("FGSQ465KLOFS", "Metal_XD", 100, 50, 10, 3);
    cout << "----------------------------------------------------------------------------------" << endl;
    BarreRonde premiereBarreRonde("DGHJKP543DFB23", "Allu", 59, 30, 3);

    return 0;
}
