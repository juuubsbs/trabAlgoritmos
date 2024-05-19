#include <iostream>
using namespace std;

// Exercício 01, receber a quantidade de pessoas e analisar o maior salário.

int main()
{
    int salario, quantidade, i, maior = 0;

    cout << "Digite a quantidade de salários que você deseja analisar: ";
    cin >> quantidade;

    for (i = 1; i <= quantidade ; i++)
    {
        cout << "Digite o salário " << i << " : ";
        cin >> salario;

        if (maior < salario)
        {
            maior = salario;
        }
        cout << maior << endl;
        
    }

    cout << "O salário mais alto é : " << maior;



    system ("pause");
    return 0;
}
