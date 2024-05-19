#include <iostream>
using namespace std;
 
int main()
{
    double pA, i, pB;
    
    pA = 5000000;
    pB = 7000000;
    
    for ( i=0; pA <= pB; i++)
    {
        pA = pA + (pA*0.03);
        pB = pB + (pB*0.02);
    };
    
    cout << "O tempo necessario eh de " <<  i << " anos.";
    
 
    system ("pause");
    return 0;
}