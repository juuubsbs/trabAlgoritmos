#include <iostream>
using namespace std;

int main()
{
    int anterior=1, resultado = 1, n, lixo, i;

    cout << "Digite o tamanho da sequencia que voce deseja obter: ";
    cin >> n;

    lixo = n;

    cout << 1 << ", ";
    cout << 1 << ", ";
    for( i = 2; i < n ; i++ )
    {
        lixo = anterior + resultado;
        cout << lixo << ", ";
        anterior = resultado;
        resultado = lixo;
        
    }


    return 0;
}