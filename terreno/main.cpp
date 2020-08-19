#include <bits/stdc++.h>

using namespace std;

int main()
{
    double area, largura, comprimento, valor;

    cout << "Digite a largura do terreno: ";
    cin >> largura;
    cout << "Digite o comprimento do terreno: ";
    cin >> comprimento;
    cout << "Digite o valor do metro quadrado: ";
    cin >> valor;
    area = largura * comprimento;
    valor = valor * area;
    cout << fixed << setprecision(2);
    cout << "Area do terreno = " << area << "m" << endl;
    cout << "Preco do terreno R$" << valor << endl;

    return 0;
}
