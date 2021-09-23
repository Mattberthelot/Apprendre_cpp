#ifndef CAPTEURHUMIDITE_H
#define CAPTEURHUMIDITE_H
#define gpio_num_t  int

class CapteurHumidite
{
public:
    CapteurHumidite(gpio_num_t _brocheCapteur);
   int MesurerHumiditeDuSol();


private:
   int brocheCapteur;
};

#endif // CAPTEURHUMIDITE_H
