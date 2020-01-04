#include <iostream>
#include <ctype.h>

using namespace std;

int main()
{
    char sirCaractere[19];
    cout << "Introdu un sir de caractere mici si MARI fara spatii intre ele: " << endl;
    cin >> sirCaractere;
    int i;
    for ( i = 0; i < 19; i++)
    {

        if(isupper(sirCaractere[i]))
        {
            sirCaractere[i] = tolower(sirCaractere[i]);
        }
        else if(islower(sirCaractere[i]))
        {
            sirCaractere[i] = toupper(sirCaractere[i]);
        }

    }

    cout << sirCaractere << endl;

    return 0;
}
