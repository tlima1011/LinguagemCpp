#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x;
    string resultado;

    cout << "Quantos numeros ira digitar: ";
    cin >> n;
    for(int i = 0; i < n; i++){
        cout << "Digite o " << i + 1 << ". numero: ";
        cin >> x;
        if (x == 0){
            cout << "NULO" << endl;
        }else if(x % 2 != 0){
            resultado = "IMPAR ";
            if (x < 0){
                resultado += "NEGATIVO";
                cout << resultado << endl;
            }else{
                resultado += "POSITIVO";
                cout << resultado << endl;
            }
        }else if (x % 2 == 0){
            resultado = "PAR ";
            if (x < 0){
                resultado += "NEGATIVO";
                cout << resultado << endl;
            }else{
                resultado += "POSITIVO";
                cout << resultado << endl;
            }
        }
    }
    //cout << resultado;
    return 0;
}
