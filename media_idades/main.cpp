#include <bits/stdc++.h>

using namespace std;

int main()
{
    int idade = 0;
    double media = 0, soma = 0, cont = 0;

    cout << "Digite as idades: " << endl;
    cin >> idade;
    if (idade < 0){
        cout << "IMPOSSIVEL CALCULAR";
    }else{
        //cout << "Digite as idades: " << endl;
        do{
            soma += idade;
            cin >> idade;
            cont++;
        }while(idade > 0);
    media = soma / cont;
    cout << fixed << setprecision(2);
    cout << "MEDIA = " << media << endl;
    }



    return 0;
}
