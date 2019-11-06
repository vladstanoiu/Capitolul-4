#include <iostream>

enum TipTeren {agricol, pasiune, livada, viran};

using namespace std;

struct Suprafata{
    float _lung;
    float _lat;
};

struct Teren{
    long long _cnpProprietar;
    TipTeren _tipTeren;
    Suprafata _suprafata;
    float _arie;
};


int main()
{
    Teren unTeren;

    unTeren._suprafata._lung = 3,2;
    unTeren._suprafata._lat = 4,2;
    unTeren._cnpProprietar = 1900523136625;
    unTeren._tipTeren = viran;
    unTeren._arie = unTeren._suprafata._lung * unTeren._suprafata._lat;

    Teren* oMovila = new Teren;
    oMovila -> _suprafata._lung = unTeren._suprafata._lung;
    oMovila -> _suprafata._lat = unTeren._suprafata._lat;
    oMovila -> _cnpProprietar = unTeren._cnpProprietar;
    oMovila -> _tipTeren = unTeren._tipTeren;
    oMovila -> _arie = unTeren._arie;

    cout << "Suprafata lunga este " << oMovila->_suprafata._lung << endl;
    cout << "Suprafata lata este " << oMovila->_suprafata._lat << endl;
    cout << "CNP-ul proprietarului este " << oMovila->_cnpProprietar << endl;
    cout << "Tipul terenului este " << oMovila->_tipTeren << endl;
    cout << "Aria terenului este " << oMovila->_arie << endl;

    delete oMovila;
    oMovila = NULL;

    return 0;
}
