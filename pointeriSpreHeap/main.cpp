#include <iostream>

using namespace std;

 double* pntA = new double (1.3);

int main()
{

    double* pnt1 = new double (2.3);
    double* pnt2 = new double (5.4);
    double* pntMedie = new double;
    *pntMedie = (*pntA + *pnt1 + *pnt2)/3;
    cout << "Media este: " << *pntMedie << endl;
    delete pnt1,pnt2,pntMedie;
    pnt1 = NULL;
    pnt2 = NULL;
    pntMedie =NULL;

    return 0;
}
