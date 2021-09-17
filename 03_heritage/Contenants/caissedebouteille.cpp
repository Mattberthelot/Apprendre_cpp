#include "caissedebouteille.h"
#include <iostream>

using namespace std;



CaisseDeBouteille::~CaisseDeBouteille()
{
    cout<<"destructeur de CaisseDeBouteille"<<endl;
}

int CaisseDeBouteille::CalculerVolume()
{
    return this->nbBouteilles * this->contenance;
}




CaisseDeBouteille::CaisseDeBouteille(const int _nbBouteilles, const int _contenance, const int _largeur, const int _hauteur, const int _profondeur):
    Contenant(_largeur, _hauteur, _profondeur),
    nbBouteilles( _nbBouteilles),
    contenance( _contenance)
{
    cout<<"constructeur de CaissedeBouteille"<<endl;

}
