#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, acima = 0, entre = 0, abaixo = 0;
    double percentual_lucro = 0, lucroTotal = 0, lucro = 0, valor_total_compra = 0, valor_total_venda = 0;

    cout << "Serao digitados de quantos produtos? ";
    cin >> n;
    string nomes[n];
    double preco_compra[n];
    double preco_venda[n];

    for(int i = 0; i < n;i++){
        cout << "Produto " << i + 1 << ": " << endl;
        cin.ignore(INT_MAX, '\n');
        cout << "Nome: ";
        getline(cin, nomes[i]);
        cout << "Preco de Compra R$";
        cin >> preco_compra[i];
        cout << "Preco de Venda R$";
        cin >> preco_venda[i];
    }

    for(int i = 0; i < n; i++){
        lucro = preco_venda[i] - preco_compra[i];
        percentual_lucro = lucro * 100 / preco_compra[i];
        if(percentual_lucro < 10){
            abaixo++;
        }else if(percentual_lucro <= 20){
            entre++;
        }else{
            acima++;
        }
    }

    for(int i = 0; i < n; i++){
        valor_total_compra += preco_compra[i];
        valor_total_venda += preco_venda[i];
        lucroTotal = valor_total_venda - valor_total_compra;
    }

    cout << "RELATORIO.: " << endl;
    cout << "Lucro abaixo de 10%: " << abaixo << endl;
    cout << "Lucro entre 10% e 20%: " << entre << endl;
    cout << "Lucro acima de 20%: " << acima << endl;
    cout << fixed << setprecision(2);
    cout << "Valor total de compra R$" << valor_total_compra << endl;
    cout << "Valor total de venda R$" << valor_total_venda << endl;
    cout << "Lucro Total R$" << lucroTotal << endl;

    return 0;
}
