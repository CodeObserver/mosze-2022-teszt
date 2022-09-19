#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS];  // Az 'N_ELEMENTS'  'NELEMENTS'-nek volt írva
    std::cout << "1-100 ertekek duplazasa"<<std::endl;  // ' van használva " helyett, valamint sortörés
    for (int i = 1; i <= N_ELEMENTS; i++) //itt kikell egészíteni a forciklust, mert hiányoznak kritériumok
    {
        b[i] = i * 2;
        std::cout << "Ertek:" << b[i] <<std::endl; // Az egyik forciklust eltüntettem , mert szükségtelen volt, valamint hiányzik innen egy ; és egy sortorés
    }
  
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag=0; //változót inicializálni kell
    for (int i = 0; i <= N_ELEMENTS; i++) //N_ELEMENTS után nem , kell hanem ; kell, valamint az egyenlőség is megengedett
    {
        atlag += b[i]; //hiányzik a ; a végéről
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
