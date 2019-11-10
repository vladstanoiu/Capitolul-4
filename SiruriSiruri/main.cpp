#include <iostream>

using namespace std;

int main()
{
    char sirStack[] = "vlad";
    unsigned short lungimeSir = sizeof sirStack;
    char* sirHeap = new char[lungimeSir];
    for (short c = 0; c < lungimeSir; ++c){
        sirHeap[c] = sirStack[c];
    }
    cout << sirHeap << endl;
    cout << "\n";
    int i;
    for( i = 1 ; sirStack[i] ; i++){
      if ( sirStack[i] == ' '){
        i = i+1;
        }
    }
    cout << i << endl;
    delete[] sirHeap;
    sirHeap = NULL;
    return 0;
}
