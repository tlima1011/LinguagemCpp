#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 0, pos_maior = 0;
    double maior = 0;

    cout << "Quantos numeros voce ira digitar? ";
    cin >> n;
    double numeros[n];

    for(int i = 0; i < n;i++){
        cout << "Digite " << i + 1 << ". numero: ";
        cin >> numeros[i];
    }

    maior = numeros[0];

    for (int i = 1; i < n; i++){
        if(numeros[i] > maior){
            maior = numeros[i];
            pos_maior = i;
        }
    }
    cout << endl;
    cout << fixed << setprecision(1);
    cout << "MAIOR VALOR = " << maior << endl;
    cout << "POSICAO DO MAIOR VALOR = " << pos_maior << endl;

    return 0;
}
