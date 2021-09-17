#include <iostream>
#include <iomanip>
using namespace std;
#include "menu.h"

enum CHOIX_MENU
{
    OPTION_1 = 1,
    OPTION_2,
    OPTION_3,
    OPTION_4,
    QUITTER
};

int main()
{
    int choix;
    try {
        Menu leMenu("../Apprendre_cpp/01_Les_classes/02_Menu/Menu.txt");
        do
        {
            choix = leMenu.afficher();
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

            case OPTION_4:
                cout << "Vous avez choisi l'option n°4" << endl;
                Menu::AttendreAppuiTouche();
                break;

            case QUITTER:
                break;
            }
        } while(choix != QUITTER);

    } catch (Exception e) {
        cout << e.ObtenirMessage() << endl;
    }


    return 0;

}
