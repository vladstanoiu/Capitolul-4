#include <iostream>

using namespace std;

void ameteala ( int parSiVal , int& parTyRef , int * parTotPont ){

    parSiVal *= 3;
    parTyRef *= 3;
    *parTotPont *= 2;

}

int main()
{
    int drunkenRat = 36;
    //trebuie sa initializam variabila cu 36 pentru ca rezultatul sa fie 216;
    ameteala(drunkenRat, drunkenRat, &drunkenRat);
    cout << drunkenRat ;

    return 0;
}
