#ifndef IPV4_H
#define IPV4_H

#include <math.h>


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
    void ObtenirPremiereAdresse(unsigned char * _premiere);
    void ObtenirDerniereAdresse(unsigned char * _derniere);
    unsigned int ObtenirNombreMachines();
    IPv4();
    IPv4 &operator= (const IPv4& _ipv4);

};

#endif // IPV4_H
