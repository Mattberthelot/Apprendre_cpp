#ifndef VANNE_H
#define VANNE_H
#define gpio_num_t  int

class Vanne
{
public:
    Vanne(const gpio_num_t _brocheImpulsion,const gpio_num_t _sensA,const gpio_num_t _sensB);
    void Ouvrir();
    void Fermer();
private:
    gpio_num_t impulsion;
    gpio_num_t sensA;
    gpio_num_t sensB;
};
#endif // VANNE_H
