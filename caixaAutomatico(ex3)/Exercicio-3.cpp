#include <iostream>
using namespace std;

int main()
{
    /* Exercicio 03, As notas consideradas são de 100, 50, 20, 10, 5, 2. 
    As moedas consideradas são de 1, 0.50, 0.25, 0.10, 0.05 e 0.01. 
    Por exemplo, R$75,25 pode ser decomposto em 1 nota de R$50, 1 nota de R$20, 
    1 nota de R$5 e 1 moeda de 0,25 centavos. usuario = 864.72*/

    float resultado = 0, usuario = 0, divisor = 1;
    int n = 0, cedula = 0;

    cout << "Digite o valor a ser decomposto: ";
    cin >> usuario;
    usuario = usuario + 0.00001;
    
    do 
    {
        n = n + 1;
        if (n == 1)
        {
            divisor = 100;
        }
        if ( n == 2)
        {
            divisor = 50;
        }
        if ( n == 3)
        {
            divisor = 20;
        }
        if ( n == 4)
        {
            divisor = 10;
        }
        if ( n == 5)
        {
            divisor = 5;
        }
        if ( n == 6)
        {
            divisor = 2;
        }
        if ( n == 7)
        {
            divisor = 1.00;
        }
        if ( n == 8)
        {
            divisor = 0.50;
        }
        if ( n == 9)
        {
            divisor = 0.25;
        }
        if ( n == 10)
        {
            divisor = 0.10;
        }
        if ( n == 11)
        {
            divisor = 0.05;
        }
        if ( n == 12)
        {
            divisor = 0.01;
        }
        if ( n == 13)
        {
            divisor = 0;
        }
        
        cedula = usuario / divisor;
        if(cedula > 0)                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             
        {
            resultado = usuario - (divisor*cedula);
            cout << "A quantidade de cedulas/moedas de R$" << divisor << " eh " << cedula << endl; 
            usuario = resultado;
        }
    }
    while (divisor > 0.00);
    system("pause");

    return 0;
}
