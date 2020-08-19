#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, menor16 = 0;
    double soma = 0, media = 0, porc_menor = 0;

    cout << "Quantas pessoas serao digitadas? ";
    cin >> n;

    string nomes[n];
    int idades[n];
    double alturas[n];

    for(int i = 0; i < n;i++){
        cout << "Dados da " << i + 1 << "a pessoa" << endl;
        cout << "Nome: ";
        cin.ignore(INT_MAX, '\n');
        getline(cin, nomes[i]);
        cout << "Idade: ";
        cin >> idades[i];
        cout << "Altura: ";
        cin >> alturas[i];
    }

    for(int i = 0; i < n;i++){
        soma += alturas[i];
        if(idades[i] < 16){
            menor16++;
        }
    }
    media = (double) soma / n;
    porc_menor = (double) menor16 * 100 / n;
    cout << fixed << setprecision(2);
    cout << endl << "Altura media: " << media << endl;
    cout << fixed << setprecision(1);
    cout << "Pessoas com menos de 16 anos: " << porc_menor << "%" << endl;
    for(int i = 0; i < n;i++){
        if(idades[i] < 16){
            cout << nomes[i] << endl;
        }
    }

    return 0;
}
