#include <bits/stdc++.h>

using namespace std;

int main()
{
    int aux = 0, x = 0, y = 0, soma = 0;

    cout << "Digite dois numeros: " << endl;
    cin >> x >> y;

    if (x > y){
        aux = x;
        x = y;
        y = aux;
    }
    for(int i = x + 1; i < y; i++){
        if (i % 2 != 0){
            soma += i;
        }
    }
    cout << "SOMA DOS IMPARES = " << soma;


    return 0;
}
