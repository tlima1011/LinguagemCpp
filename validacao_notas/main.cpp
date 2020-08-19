#include <bits/stdc++.h>

using namespace std;

int main()
{
    double nota1, nota2, media;

    cout << "Digite a primeira nota: ";
    do {
        cin >> nota1;
        if(nota1 < 0 || nota1 > 10){
            cout << "Valor Invalido! Tente novamente: ";
            //cin >> nota1;
        }
    }while(nota1 < 0 || nota1 > 10);

    cout << "Digite a segunda nota: ";
    do {
        cin >> nota2;
        if(nota2 < 0 || nota2 > 10){
            cout << "Valor Invalido! Tente novamente: ";
            //cin >> nota1;
        }
    }while(nota2 < 0 || nota2 > 10);

    media = (nota1 + nota2) / 2;
    cout << fixed << setprecision(2);
    cout << "MEDIA = " << media;

    return 0;
}
