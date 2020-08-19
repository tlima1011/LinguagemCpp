#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, qtde_pares = 0;
    double soma_pares = 0, media = 0;
    cout << "Quantos elementos vai ter o vetor? ";
    cin >> n;

    int numeros[n];

    for(int i = 0; i < n;i++){
        cout << "Digite o " << i + 1 << ". numero: ";
        cin >> numeros[i];
    }

    for (int i = 0; i < n; i++){
        if(numeros[i] % 2 == 0){
            soma_pares += numeros[i];
            qtde_pares++;
        }
    }

    if(qtde_pares == 0){
        cout << "NENHUM NUMERO PAR";
    }else{
        cout << fixed << setprecision(1);
        media = soma_pares / qtde_pares;
        cout << "MEDIA DOS PARES = " << media << endl;
    }

    return 0;
}
