#include <iostream>
#include <iostream>
#include "carton.h"
#include "caissedebouteille.h"
#include "contenant.h"


using namespace std;

int main()
{
 cout<<"Heritage"<<endl;
 Contenant c1(10,20,20);
 cout <<"Volume de c1 :" << c1.CalculerVolume() << endl;


 CaisseDeBouteille c2(6,75,10,20,20);
 cout <<"Volume de c2 :" << c2.CalculerVolume() << endl;
}
