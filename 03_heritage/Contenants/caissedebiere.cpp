#include "caissedebiere.h"
#include <iostream>
#include "caissedebouteille.h"


using namespace std;

caissedebiere::caissedebiere(const int _nbBouteilles,
                             const int _contenance,
                             const int _largeur,
                             const int _hauteur,
                             const  int _profondeur,
                             string _marque):
    CaisseDeBouteille(_largeur,
                      _hauteur,
                      _profondeur,
                        _nbBouteilles),
                        _contenance)

{
  cout << "constructeur de CaissedeBiere" << endl;
}
