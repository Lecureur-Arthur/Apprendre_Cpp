#include "barrerectangle.h"



BarreRectangle::BarreRectangle(const string _reference, const string _nom, const float _longeur, const float _densite,
                               const float _longeurCote, const float _largeurCote):
    Barre(_reference,_nom,_longeur,_densite),
    longeurCote(_longeurCote),
    largeurCote(_largeurCote)
{

}
