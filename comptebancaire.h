#ifndef COMPTEBANCAIRE_H
#define COMPTEBANCAIRE_H

#include <string>

class CompteBancaire
{
public:
    CompteBancaire(float _solde);
    void Deposer( float _montant);
    bool retirer(float _montant);
    float ConsulterSolde();
    ~CompteBancaire();
private:
    float solde;


};

#endif // COMPTEBANCAIRE_H
