#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 0;
    int idade_velha = 0;
    string nome_velho;

    cout << "Quantas pessoas voce vai digitar? ";
    cin >> n;

    string nomes[n];
    int idades[n];

    for(int i = 0; i < n; i++){
        cout << "Dados da " << i + 1 << ". pessoa: " << endl;
        cout << "Nome: ";
        cin.ignore(INT_MAX, '\n');
        getline(cin, nomes[i]);
        cout << "Idade: ";
        cin >> idades[i];
    }

    nome_velho = nomes[0];
    idade_velha = idades[0];

    for(int i = 1; i < n;i++){
        if(idades[i] > idade_velha){
            nome_velho = nomes[i];
            idade_velha = idades[i];
        }
    }
    cout << endl;
    cout << "PESSOA MAIS VELHA: " << nome_velho << " com " << idade_velha << " anos." << endl;





    return 0;
}
