#include <iostream>
using namespace std;

int main()
{
    int usuario, resultado, soma; 
    
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