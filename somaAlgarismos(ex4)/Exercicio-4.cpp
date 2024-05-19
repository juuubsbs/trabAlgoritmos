#include <iostream>
using namespace std;

int main()
{
    int usuario = 0, resultado = 0, soma = 0; 
    
    cout << "Digite o numero que deseja obter a soma: ";
    cin >> usuario;
    
    do
    {
        resultado = usuario%10;
        soma = resultado + soma;
        if (resultado == 0)
        {
            usuario = usuario / 10;
        }
        else usuario = usuario - resultado;
        
    }
    while(usuario >= 10);
    soma = usuario + soma;
    
    cout << soma << endl << endl;
    system("pause");

    return 0;
}