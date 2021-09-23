#ifndef COMPTEBANCAIRE_H
#define COMPTEBANCAIRE_H
#include "solde.h"
#include <string>

class CompteBancaire: public solde
{
public:
    CompteBancaire(float _solde);
    float Deposer( float _montant);
    bool retirer(float _montant);
    float ConsulterSolde();

};

#endif // COMPTEBANCAIRE_H
