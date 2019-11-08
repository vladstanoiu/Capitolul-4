#include <iostream>

using namespace std;

enum Tip {mere=1, pere, gutui, cirese, visine};

struct Produs{
    Tip tipProdus;
    float cantitate;
    float pret;
};

int main()
{
    Produs tablouas[3];
    unsigned short copie;
    for (int a = 0; a < 3; a++){
        cout << "Introduceti tipul( 1 - mere, 2 - pere, 3 - gutui, 4 - cirese, 5 - visine). " ;
        cin >> copie;
        cout << "" << endl;
        tablouas[a].tipProdus = static_cast<Tip>(copie);

        cout << "Introduceti canditatea: " ;
        cin >> tablouas[a].cantitate;
        cout << "" ;

        cout << "Introduceti pretul: "  ;
        cin >> tablouas[a].pret;
        cout << "" << endl;
        }
            for (int x = 0; x < 1; x++){
                cout << "Produs" << "\tCant" << "\tPret" <<endl;
                    for (int y = 0; y < 3; y++){

                        switch (tablouas[y].tipProdus){
                            case mere: cout << "Mere" ; break;
                            case pere: cout << "Pere" ; break;
                            case gutui: cout << "Gutui" ; break;
                            case cirese: cout << "Cirese" ; break;
                            case visine: cout << "Visine" ; break;
                            default: cout << "Nu exista asemenea produs" ;

                        }
                        cout << " " << "\t" << tablouas[y].cantitate << "\t" << tablouas[y].pret << endl;
                    }
            }
        unsigned int stoc = 0;
            for (int s = 0; s <3; s++){
                stoc = stoc + (tablouas[s].cantitate * tablouas[s].pret);
            }
        cout << "Valoarea stocului: " << stoc << endl;
    return 0;
}
