#ifndef CARTON_H
#define CARTON_H
#include "contenant.h"

/*-----Dérivation PUBLIC-----*/
class Carton : public Contenant

/*-----Dérivation PROTEGEE-----*/
//class Carton : protected Contenant

/*-----Dérivation PRIVEE V1-----*/
//class Carton : private Contenant

/*-----Dérivation PRIVEE V2-----*/
//class Carton : Contenant
{
public:
    Carton(const int _largeur, const int _hauteur,
           const int _profondeur, const float _poidsMaxi);
    float ObtenirPoidsMaxi();
    ~Carton();
private:
    float poidsMaxi;
};

#endif // CARTON_H
