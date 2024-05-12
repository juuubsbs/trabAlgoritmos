#include <iostream>
using namespace std;


int main()
{
    int soma, ent1, ent2, nivela = 0, i;

    cout << "Digite o inicio do intervalo: ";
    cin >> ent1;

    cout << "Digite o fim  do intervalo: ";
    cin >> ent2;

    if(ent1>ent2)//nivela o intervalo.
    {
        nivela = ent1;
        ent1 = ent2;
        ent2 = nivela;
    }

    for (i = ent1; i <= ent2; i++)
    {
        if( i%2 != 0 )
        {
            if ( i%3 != 0 )
            {
                soma = soma + i;
            }
        }
    }
    
    cout << "A soma dos numeros primos presentes no intervalo eh: "<< soma << endl;


    system("pause");
    return 0;
}    