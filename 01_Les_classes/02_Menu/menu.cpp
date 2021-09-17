#include "menu.h"
#include <iostream>
#include <iomanip>
#include<fstream>
#include <string>
#include <algorithm>




/**
 * @brief Menu::Menu
 */
Menu::Menu():
    nom(""),
    options(nullptr),
    nbOptions(0),
    longueurMax(0)
{ }

Menu::Menu(const string &_nom):
    nom(_nom),
    options(nullptr),
    nbOptions(0),
    longueurMax(0)
{

    // ouvrir le fichier
    ifstream fichier(this->nom);
    if ( fichier.fail()){
        string message = " file not found";

        message = this->nom + message;
        Exception excep(404,message);
        throw (excep);
    }
    else
    {
        nbOptions = static_cast<int>(count(istreambuf_iterator<char>(fichier),
                                           istreambuf_iterator<char>(),'\n'));  // Sinon calculer nbOptions, le nombre d’options dans le fichier
        fichier.seekg(0,ios::beg);



        // allouer dynamiquement le tableau options en fonction de nbOptions


        options = new string  [nbOptions];
        // Pour chaque option dans le fichier
        for (unsigned int indice=0; indice < nbOptions; indice++){
            getline(fichier,options[indice]);               // Lire l’option et l’affecter dans le tableau options

            if(options[indice].length() > longueurMax){     // Si la taille de l’option est plus grande que longueurMax
                longueurMax = options[indice].length();         // alors longueurMax reçoit la taille de l’option
            }
        }

    }

}

Menu::~Menu()
{
    if(this->options != nullptr)
        delete []options;
}


int Menu::afficher()
{
    unsigned int choix;
    if(nbOptions == 0)
        choix = -1;
    else{
        cout<<setfill('-');
        cout <<"+-" << setw(4) << "-+-" << setw(longueurMax+2) <<"-+"<<endl;

        cout<<setfill(' ');
        for(int i =0; i < nbOptions; i++){
            cout << "| " << i+1 << " | " << setw(longueurMax) << options[i] << " |" <<endl;
        }

        cout<<setfill('-');
        cout << "+-" <<setw(4) << "+-" << setw(longueurMax+2) << "-+" <<endl;
        cout<<setfill(' ');

        do{
            cout  << "Votre choix: entre 1 et " << nbOptions <<endl;
            if(!(cin>>choix)){
                cin. clear();
                cin.ignore(std::numeric_limits<streamsize>::max(),'\n');
            }
        }while(choix > nbOptions );

    }
    return choix;
}

void Menu::AttendreAppuiTouche()
{
    string uneChaine;
    cout << endl << "appuyer sur la touche Entrée pour continuer...";
    getline(cin,uneChaine);
    cin.ignore( std::numeric_limits<streamsize>::max(), '\n' );
    system("clear");

}

// Methode classe Exception

Exception::Exception(int _code,std::string _message):
    code(_code),
    message(_message)
{}

int Exception::ObtenirCodeErreur() const
{
    return code;
}

string Exception::ObtenirMessage()const
{
    return message;
}


