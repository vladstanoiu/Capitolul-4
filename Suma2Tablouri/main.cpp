#include <iostream>

using namespace std;

short arraySuma[41];

int main()
{
    short arrayStack[41];
    short* arrayHeap = new short[41];

        //Nu aveai musai nevoie de 2 indici, i si j dat fiind ca ei evolueaza la fel
        //Nu e gresit dar era mai simplu sa folosesti "i" peste tot
        for (short i = 0 , j = 0; i <= 41 , j < 41; ++i, ++j ){
            arrayStack[i] = i * 7;
            arrayHeap[j] = j * 8;
            // *arraySuma va fi intotdeauna primul element al tabloului arraySuma!
            //Deci tu salvezi rezultatul adunarii mereu in primul element din arraySuma
            //Corect era sa folosesti indicele i si pentru arraySuma, adica arraySuma[i]
            *arraySuma = arrayStack[i] + arrayHeap[j];
                cout << arrayStack[i] << " + " << arrayHeap[j];
                cout <<"   Suma lor este:   " << *arraySuma << endl;
            }
        //Am parcurs elementele tabloului arraySuma inca o data
        //Poti vedea ca ele sunt toate neatribuite (sunt 0) cu exceptia primului
        for(short i = 0 ; i <= 41 ; ++i ){
            cout << arraySuma[i] << endl;
        }
        delete[] arrayHeap;
        arrayHeap = NULL;
    return 0;
}
