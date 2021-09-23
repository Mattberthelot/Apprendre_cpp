#ifndef CAISSEDEBIERE_H
#define CAISSEDEBIERE_H
#include "contenant.h"
#include "caissedebouteille.h"
#include <string>


using namespace std;


class caissedebiere: public Contenant
{
public:

    caissedebiere( const int _nbBouteilles,
                          const int _contenance,
                          const int _largeur,
                          const int _hauteur,
                          const  int _profondeur,
                            string _marque);



private:
    caissedebiere( string marque);


    ~caissedebiere();
};

#endif // CAISSEDEBIERE_H
