#include <iostream>

using namespace std;

int main()
{
    char sirStack[] = "gheorghe";
    char* sirHeap = new char[5];
    sirHeap = sirStack;
    cout << sirHeap << endl;
    cout << "\n";
    int i;
    for( i = 0 ; sirStack[i] ; i++);
        cout << i << endl;



    return 0;
}
