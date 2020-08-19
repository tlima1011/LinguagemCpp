#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    double media = 0, soma = 0;
    cout << "Quantos elementos vai ter o vetor? ";
    cin >> n;

    double numeros[n];

    for(int i = 0; i < n; i++){
        cout << "Digite o " << i + 1 << ". numero: ";
        cin >> numeros[i];
    }

    for (int i = 0; i < n; i++){
        soma += numeros[i];
    }
    media = soma / n;
    cout << endl;
    cout << fixed << setprecision(3);
    cout << "MEDIA DO VETOR = " << media << endl;
    cout << fixed << setprecision(1);
    cout << "ELEMENTOS ABAIXO DA MEDIA: " << endl;
    for(int i = 0; i < n; i++){
        if(numeros[i] < media){
            cout << numeros[i] << endl;
        }
    }


    return 0;
}
