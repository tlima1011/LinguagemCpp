#include <bits/stdc++.h>

using namespace std;

int main()
{
    int soma = 0, x = 0;

    cout << "Digite um numero inteiro: ";
    do{
        cin >> x;
        if (x % 2 != 0){
            x++;
        }
        soma = 5 * x + 20;
    }while(x == 0);
    cout << "SOMA = " << soma;

    return 0;
}
