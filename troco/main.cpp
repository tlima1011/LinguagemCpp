#include <bits/stdc++.h>

using namespace std;

int main()
{
    double troco = 0, total = 0,  preco = 0, dinheiro = 0;
    int quantidade = 0;

    cout << "Preco unitario do Produto R$";
    cin >> preco;
    cout << "Quantidade comprada: ";
    cin >> quantidade;
    cout << "Dinheiro recebido R$";
    cin >> dinheiro;
    total = preco * quantidade;
    troco = dinheiro - total;
    cout << fixed << setprecision(2);
    cout << "TROCO R$" << troco << endl;

    return 0;
}
