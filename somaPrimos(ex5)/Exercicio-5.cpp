#include <iostream>
using namespace std;


int main()
{
    int soma = 0, ent1, ent2, nivela = 0, i;

    cout << "Digite o inicio do intervalo: ";
    cin >> ent1;

    cout << "Digite o fim  do intervalo: ";
    cin >> ent2;

    if(ent1>ent2)//nivela o intervalo, para ter certeza de que foi digitado primeiro o menor e depois o maior.
    {
        nivela = ent1;
        ent1 = ent2;
        ent2 = nivela;
    }

    for (i = ent1; i <= ent2; i++)
    {
        if( i == 1)
        {
            soma = soma;
        }
        else if( i%2 != 0 && i%3 != 0 )
        {
                soma = soma + i;
        }
        if ( i == 2 || i == 3)
        {
            soma = soma + i;
        }
    }
    
    cout << "A soma dos numeros primos presentes no intervalo eh: "<< soma << endl;


    system("pause");
    return 0;
}    