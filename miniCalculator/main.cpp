#include <iostream>
#include "Operatii.h"

using namespace std;

void meniu() {
cout << "Introdu operatia pe care vrei sa o aplici:" << '\n' << "1.Adunare" << '\n' << "2.Scadere" << '\n' << "3.Inmultire" << '\n' << "4.Impartire" << '\n' <<  "5.Modulo" << endl;
}

int main()
{
    meniu();
    int selectie;
    int nr1 ;
    int nr2 ;
    cin >> selectie ;
    cout << "Introdu doua numere intregi:" << endl;
    cin >> nr1;
    cin >> nr2;
    cout << "Rezultatul este ";
    switch (selectie){
        case 1: cout << Adunare(nr1 ,nr2); break;
        case 2: cout << Scadere(nr1 ,nr2); break;
        case 3: cout << Inmultire(nr1 ,nr2); break;
        case 4: cout << Impartire(nr1 ,nr2); break;
        case 5: cout << Modulo(nr1 ,nr2); break;
        default : cout << "Numar invalid.";
        }
    return 0;
}
