#ifndef MENU_H
#define MENU_H
#include <iostream>
#include <iomanip>
#include <string>


using namespace std;

class Menu
{
private:

    string nom;
    string *options;
    unsigned int nbOptions;
    unsigned int longueurMax;

public:
    Menu();
    Menu(const string &_nom);
    ~Menu();
    int afficher();
    static void AttendreAppuiTouche();



};
class Exception{
public:
    Exception(int _code, std::string _message);
    int ObtenirCodeErreur()const;
    std::string ObtenirMessage()const;

private:
    int code;
    std::string message;
};

#endif // MENU_H
