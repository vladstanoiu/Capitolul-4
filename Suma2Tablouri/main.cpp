#include <iostream>

using namespace std;

short arraySuma[41];

int main()
{
    short arrayStack[41];
    short* arrayHeap = new short[41];

        for (short i = 0 , j = 0; i <= 41 , j < 41; ++i, ++j ){
            arrayStack[i] = i * 7;
            arrayHeap[j] = j * 8;
            *arraySuma = arrayStack[i] + arrayHeap[j];
                cout << arrayStack[i] << " + " << arrayHeap[j];
                cout <<"   Suma lor este:   " << *arraySuma << endl;
            }
        delete arrayHeap;
        arrayHeap = NULL;
    return 0;
}
