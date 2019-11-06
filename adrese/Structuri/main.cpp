#include <iostream>

using namespace std;

struct Adresa{

 char prenume[10], strada[20], judet[10], oras[15];
 int numar;
 int codPostal;
    };

int main()
{
    Adresa adresa;
    adresa.numar;
    adresa.codPostal;
    cout << "Introduceti prenumele , judetul, orasul si strada, numarul si codul postal al dvs. in aceasta ordine: " << endl;
    cin >> adresa.prenume;
    cin >> adresa.judet;
    cin >> adresa.oras;
    cin >> adresa.strada;
    cin >> adresa.numar;
    cin >> adresa.codPostal;
    cout << "Ma numesc " << adresa.prenume << endl;
    cout << "M-am nascut in judetul " << adresa.judet << ", orasul " << adresa.oras << ", pe strada "<< adresa.strada << " la numarul " << adresa.numar << "  cu  codul postal " << adresa.codPostal << endl;

    return 0;
}
