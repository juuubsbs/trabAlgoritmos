#include <iostream>
using namespace std;

int main()
{
    /* Exercicio 03, As notas consideradas são de 100, 50, 20, 10, 5, 2. 
    As moedas consideradas são de 1, 0.50, 0.25, 0.10, 0.05 e 0.01. 
    Por exemplo, R$75,25 pode ser decomposto em 1 nota de R$50, 1 nota de R$20, 
    1 nota de R$5 e 1 moeda de 0,25 centavos.*/

    float resultado, usuario, divisor;
    int n = 0, cedula;

    cout << "Digite o valor a ser decomposto: ";
    cin >> usuario;
    usuario = usuario + 0.00001;
    
    do 
    {
        n = n + 1;
        switch (n)
        {
            case 1: divisor = 100; break;
            case 2: divisor = 50; break;
            case 3: divisor = 20; break;
            case 4: divisor = 10; break;
            case 5: divisor = 5; break;
            case 6: divisor = 2; break;
            case 7: divisor = 1; break;
            case 8: divisor = 0.5; break;
            case 9: divisor = 0.25; break;
            case 10: divisor = 0.1 ; break;
            case 11: divisor = 0.05 ; break;
            case 12: divisor = 0.01 ; break;
        }
        
        cedula = usuario / divisor;
        if(cedula > 0.00)                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             
        {
            resultado = usuario - (divisor*cedula);
            cout << "A quantidade de cedulas/moedas de R$" << divisor << " eh " << cedula << endl; 
            usuario = resultado;
        }
    }
    while (divisor >= 0.00);
    system("pause");

    return 0;
}
