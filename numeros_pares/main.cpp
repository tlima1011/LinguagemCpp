#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 0, qtde_pares = 0;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> n;

    int numeros[n];

    for(int i = 0; i < n;i++){
        cout << "Digite o " << i + 1 << ". numero: ";
        cin >> numeros[i];
    }
    cout << endl;
    cout << "NUMEROS PARES: " << endl;
    for(int i = 0; i < n; i++){
        if(numeros[i] % 2 == 0){
            cout << numeros[i] << "  ";
            qtde_pares++;
        }
    }
    cout << endl;
    cout << "QUANTIDADE DE PARES = " << qtde_pares << endl;

    return 0;
}
