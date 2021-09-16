#ifndef IPV4_H
#define IPV4_H

#include "math.h"

class IPv4
{
private:
    unsigned char * adresse;
    unsigned char * masque ;
    void CalculerMasque(unsigned char _cidr);
    int NbBitA1(unsigned char val);
  public:
    IPv4(const unsigned char * _adresse, const unsigned char _cidr);
    IPv4(const unsigned char * _adresse, const unsigned char * _masque);
    ~IPv4();
    void ObtenirMasque(unsigned char * _masque);
    void ObtenirAdresseReseau(unsigned char * _reseau);
    void ObtenirAdresseDiffusion(unsigned char * _diffusion);
    void ObtenirPremierAdresse(unsigned char * _reseau);
    void ObtenirDernièreAdresse(unsigned char * _reseau);
    unsigned int NombreDeMachine();
};

#endif // IPV4_H
