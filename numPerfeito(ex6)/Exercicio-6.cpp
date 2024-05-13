#include <iostream>
using namespace std;

/*para calcular um número perfeito é necessário saber:
    - seus divisores (mod); pensando em for
    - se sua soma é igual ao numero digitado
*/

int main()
{
    int num, soma = 0, i, resultado;

    cout << "Digite o numero a ser testado: ";
    cin >> num;

    for( i = num - 1 ; i > 0; i--)
    {
        resultado = num % i;
        if (resultado == 0)
        {
            soma = soma + i;
        }
    }

    if(soma == num) 
    {
        cout << "O numero " << soma << " eh perfeito";
    }
    else cout << "O numero digitado nao eh perfeito";

    system("pause");
    return 0;
}