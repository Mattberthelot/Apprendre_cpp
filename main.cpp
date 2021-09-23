#include <iostream>
#include <iomanip>
using namespace std;
#include "menu.h"



/**
 * @brief The CHOIX_MENU enum
 * @details Création des choix du menu
 * @author Berthelot matt
 */
enum CHOIX_MENU

{
    /** les differents choix du menu*/
    OPTION_0=0,
    OPTION_1,
    OPTION_2,
    OPTION_3,
    Retour
};

int main()
{
    int choix;
    try {
             Menu leMenu("../Apprendre_cpp/controle/LaBanque/compteBancaire.txt");
        do
        {
            choix = leMenu.Afficher();
            switch (choix)
            {


            case OPTION_1:
                cout << "Vous avez choisi l'option n°1" << endl;
                Menu::AttendreAppuiTouche();
                break;

            case OPTION_2:
                cout << "Vous avez choisi l'option n°2" << endl;
                Menu::AttendreAppuiTouche();
                break;

            case OPTION_3:
                cout << "Vous avez choisi l'option n°3" << endl;
                Menu::AttendreAppuiTouche();
                break;

            case Retour:
                break;
            }
        } while(choix !=Retour);
/** mettre un message d'érreur si  le fichier n'est pas trouvé*/
    } catch (Exception e) {
        cout << e.ObtenirMessage() << endl;
    }


    return 0;

}
