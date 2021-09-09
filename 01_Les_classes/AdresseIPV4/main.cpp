#include <iostream>
#include "IPv4.h"
using namespace std;
void AfficherTableau(unsigned char *tab);
int main()
{
    unsigned char adresse[4]= {192,168,1,1};
    unsigned char masque[4];
    unsigned char reseau[4];
    unsigned char diffusion[4];
    unsigned char premiere[4];
    unsigned char derniere[4];
    unsigned char AutreAdresse[4];


    IPv4 uneAdresse(adresse, 24); // instanciation de la classe IPv4
    IPv4 uneAutreAdresse;  //appel du constructeur par default
    IPv4 AdresseCopie(uneAdresse); //appel du constructeur de copie
    IPv4 adresse3;
   adresse3 = uneAdresse;

            cout << "Adresse IPv4 : ";


    uneAdresse.ObtenirMasque(masque); // appel d'une méthode
    cout << "Masque : ";
    IPv4::AfficherTableau(adresse);




    uneAdresse.ObtenirAdresseReseau(reseau);
    cout << "Réseau : ";
    IPv4::AfficherTableau(masque);



    uneAdresse.ObtenirAdresseDiffusion(diffusion);
    cout << "Diffusion : ";
    IPv4:: AfficherTableau(reseau);



    uneAdresse.ObtenirPremiereAdresse(premiere);
    cout << "Premiere addresse: ";
    IPv4:: AfficherTableau(premiere);



     uneAdresse.ObtenirDerniereAdresse(derniere);
     cout << "Derniere addresse: ";
     IPv4:: AfficherTableau(derniere);


     cout << "Nombre de machines: "<<uneAdresse.NombreMachines() <<endl;



     cout<<"Adresse reseau par default :";

     uneAutreAdresse.ObtenirAdresseReseau(reseau) ;
     IPv4::AfficherTableau(reseau);



     cout<<"Adresse reseau de l'adresse copier :";

     AdresseCopie.ObtenirAdresseReseau(reseau) ;
     IPv4::AfficherTableau(reseau);



     cout<<"Adresse reseau de adresse3 :";
     adresse3.ObtenirAdresseReseau(reseau) ;
     IPv4::AfficherTableau(reseau);
    return 0;
}



