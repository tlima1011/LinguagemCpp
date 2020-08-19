#include <bits/stdc++.h>

using namespace std;

int main()
{
    int senha = 0;

    cout << "Digite a senha: ";
    do{
        cin >> senha;
        if (senha != 2002){
            cout << "Senha invalida! Tente novamente: ";
        }
    }while(senha != 2002);
    cout << "Acesso permitido!" << endl;
    return 0;
}
