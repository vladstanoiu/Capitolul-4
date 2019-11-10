#include <iostream>

using namespace std;

short arraySuma[41];

int main()
{
    short arrayStack[41];
    short* arrayHeap = new short[41];

        for (short i = 0; i <= 41; ++i ){
            arrayStack[i] = i * 7;
            arrayHeap[i] = i * 8;
            arraySuma[i] = arrayStack[i] + arrayHeap[i];
                cout << arrayStack[i] << " + " << arrayHeap[i];
                cout <<"   Suma lor este:   " << arraySuma[i] << endl;
            }
        delete[] arrayHeap;
        arrayHeap = NULL;
    return 0;
}
