#include <iostream>
using namespace std;

int main()
{
    char resposta, letra = 'C';
    int i = 0, pos = 3, u;
    bool errado;
    
    //loop inicial para perguntar a posição do jogador
    do
    {
        //bool para repetir a pergunta de embaralhador/adivinhador ate o usuario digitar uma das duas respostas
        errado = true;
        cout << "voce quer jogar como embaralhador(e) ou adivinhador(a)? ";
        cin >> resposta;
        
        
        char a = 's';
            //resposta == 'e' indica que o usuario sera o embaralhador 
            if(resposta == 'e')
            {
                cout << "bem-vind@ ao jogo dos copos, voce escolheu a opcao embaralhador... " << endl;
                cout << "digite a posicao inicial do objeto, A(1) B(2) C(3): " << endl;
                cin >> pos;
                do
                {
                    cout << "de acordo com o menu abaixo, digite qual movimento voce quer realizar..."<< endl;
                    cout << "nao se preocupe, voce podera digitar mais movimentos apos esta insercao..." << endl;
                    switch (pos)
                    {
                        case 1: cout << "(2) inverter A e B" << endl; cout << "(3) inverter A e C" << endl; break;
                        case 2: cout << "(1) inverter B e A" << endl; cout << "(3) inverter B e C" << endl; break;
                        case 3: cout << "(2) inverter C e B" << endl; cout << "(1) inverter C e A" << endl; break;
                        default: cout << "valor digitado incorretamente, digite (1), digite (s) e tente novamente"; break;
                    }
                    cout << "digite aqui: ";
                    cin >> pos;
                    
                    switch (pos){
                    case 1: letra = 'A'; break;
                    case 2: letra = 'B'; break;
                    case 3: letra = 'C'; break;}
                    
                    if(pos != 1 && pos != 2 && pos != 3)
                    {
                        a = 's';
                    }
                    
                    else
                    {
                        i++;
                        cout << "a opcao foi mudada "<< i << " vez(es)" << endl;
                        cout << "a posicao atual eh '"<< letra << "' voce gostaria de realizar mais movimentos? sim(s)/nao(n): ";
                        cin >> a;
                        
                    }
                }
                while(a != 'n');
            }
            if(i>0)
            {
                resposta = 'a';
            }
            // resposta == 'a' indica que o usuario sera o adivinhador, porem ele sempre sera o adivinhador ao 
             if(resposta == 'a') 
             {
                 if(i!=0)
                 {
                     cout << "agora voce sera encaminhado para o modo adivinhador..." << endl;
                 }
                 
                 int cont;
                 cout << "bem-vind@ ao jogo dos copos, voce escolheu a opcao adivinhador..." << endl;
                 cout << "a posicao inicial do objeto eh: " << letra << endl;
                 cout << "voce podera dizer quantas vezes ela sera mudada: ";
                 cin >> cont;
            
                //função que conta de acordo com o numero de vezes que troca
                 while(cont > 0)
                 {
                    if (pos < 3)
                    {
                        pos ++;
                    }
                    else pos = pos - 2;
                     cont --;
                 }
                 int palpite;
                 cout << "digite ao lado o seu palpite, sendo A(1) B(2) e C(3): ";
                 cin >> palpite;

                 if (palpite != pos)
                 {
                    cout << "lamento, voce errou :(" << endl;
                 }
                 else cout << "voce acertou! :)" << endl;
             }
             else if (resposta != 'a' && resposta != 'e')
             {
                cout << "valor digitado incorretamente" << endl; 
                errado = false;
             } 
             
    }
    while(errado == false);
    cout << "obrigada por jogar o jogo dos copos!" << endl;
    system("pause");
   



    return 0;
}