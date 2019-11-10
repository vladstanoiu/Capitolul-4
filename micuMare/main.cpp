#include <iostream>
#include <ctype.h>
#include <stdio.h>

using namespace std;

int main()
{
    char sirCaractere[20];
    char c;
    cout << "Introdu un sir de caractere mici si MARI fara spatii intre ele: " << endl;
    cin >> sirCaractere;
    int i;
    for ( i = 0; i < 20; i++){
            c = sirCaractere[i];
            if (islower(c)) c=toupper(c);
            else  if (isupper(c)) c=tolower(c);
            putchar(c);
    }
      sirCaractere[i] = '\0';
    cout << sirCaractere[20] << endl;

    return 0;
}
