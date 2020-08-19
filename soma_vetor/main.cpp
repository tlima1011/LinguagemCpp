#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 0;
    double media = 0, soma = 0;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> n;

    double numeros[n];

    for(int i =0; i < n;i++){
        cout << "Digite o " << i + 1 << ". numero: ";
        cin >> numeros[i];
    }
    cout << endl;
    cout << "VALORES = ";
    cout << fixed << setprecision(1);
    for (int i = 0; i < n;i++){
        cout << numeros[i] << "  ";
        soma += numeros[i];
    }
    media = soma / n;
    cout << endl;
    cout << fixed << setprecision(2);
    cout << "SOMA = " << soma << endl;
    cout << "MEDIA = " << media << endl;

    return 0;
}
