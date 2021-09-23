
#include <iostream>
#include "comptebancaire.h"

using namespace std;

CompteBancaire::CompteBancaire( float _solde):
    solde(_solde)

{
cout <<"compte bancaire "<<endl;
}


/**
 * @brief CompteBancaire::Deposer
 * @param _solde
 * @param _montant
 * @details Methode pour deposer de l'argent sur le compte bancaire(solde)
 */
void CompteBancaire::Deposer(float _montant)
{

}

/**
 * @brief CompteBancaire::retirer
 * @param _solde
 * @param _montant
 * @details Methode pour retier de l'argent de mon compte bancaire (solde)
 */
bool CompteBancaire::retirer(float _montant)
{
return solde = solde - _montant;
}


/**
 * @brief CompteBancaire::ConsulterSolde
 * @param _solde
 * @details Methode pour consulter l'argents present sur le compte bancaire
 */
float CompteBancaire::ConsulterSolde ()
{
return solde ;
}

/**
 * @brief CompteBancaire::~CompteBancaire
 * @details destructeur de compte bancaire
 */
CompteBancaire::~CompteBancaire()
{
cout<<"destructeur de compte bancaire "<<endl;
}

