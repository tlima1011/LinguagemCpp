#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout << "Quantos numeros voce ira digitar? ";
    cin >> n;

    int numeros[n];

    for(int i = 0; i < n; i++){
        cout << "Digite o " << i + 1 << ". numero: ";
        cin >> numeros[i];
    }
    cout << "\nNUMEROS NEGATIVOS: " << endl;
    for(int i = 0; i < n; i++ ){
        if (numeros[i] < 0){
            cout << numeros[i] << endl;
        }
    }

    return 0;
}
