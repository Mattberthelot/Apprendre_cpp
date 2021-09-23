#include "comptebancaire.h"
#include <iostream>
#include "solde.h"

using namespace std;

CompteBancaire::CompteBancaire( float _solde,float _montant):
    CompteBancaire(_solde),
    Deposer(_montant),
    retirer(_montant)

{
cout<<"compte bancaire "<<endl;
}


/**
 * @brief CompteBancaire::Deposer
 * @param _solde
 * @param _montant
 * @details Methode pour deposer de l'argent sur le compte bancaire(solde)
 */
CompteBancaire::Deposer(float _solde,float _montant)
{
return this->solde + this->montant = solde;
}


/**
 * @brief CompteBancaire::retirer
 * @param _solde
 * @param _montant
 * @details Methode pour retier de l'argent de mon compte bancaire (solde)
 */
CompteBancaire::retirer(float _solde,float _montant)
{
return this->solde - this->montant= this->solde;
}


/**
 * @brief CompteBancaire::ConsulterSolde
 * @param _solde
 * @details Methode pour consulter l'argents present sur le compte bancaire
 */
CompteBancaire::ConsulterSolde (float _solde)
{
return this->solde ;
}

/**
 * @brief CompteBancaire::~CompteBancaire
 * @details destructeur de compte bancaire
 */
CompteBancaire::~CompteBancaire()
{
cout<<"destructeur de compte bancaire "<<endl;
}

