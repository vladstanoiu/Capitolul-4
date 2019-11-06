#include <iostream>

using namespace std;

struct Adresa{

 char prenume[10] = "Vlad", strada[20] = "Luceafarul", judet[10] = "Timis", oras[15] = "Timisoara";
 int numar;
 int codPostal;
    };

int main()
{
    Adresa adresa;
    adresa.numar = 0;
    adresa.codPostal = 300414;
    cout << "Ma numesc " << adresa.prenume << endl;
    cout << "M-am nascut in judetul " << adresa.judet << ", orasul " << adresa.oras << ", pe strada "<< adresa.strada << " la numarul " << adresa.numar << ". Ah, am uitat si codul postal :) -> " << adresa.codPostal << endl;

    return 0;
}
