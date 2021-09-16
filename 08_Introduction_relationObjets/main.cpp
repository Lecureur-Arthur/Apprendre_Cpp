#include <iostream>
#include "contenant.h"
#include "carton.h"
#include "caissedebouteilles.h"

using namespace std;

int main()
{

    Carton ca(10,5,10,100);
    Caissedebouteilles unecaisse(10,5,10,12,2);
    cout << unecaisse.CalculerVolume() << endl;

    return 0;
}
