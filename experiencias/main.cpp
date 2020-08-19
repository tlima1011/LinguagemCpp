#include <bits/stdc++.h>

using namespace std;

int main()
{
    char tipo_cobaia;
    int n, qtde = 0, qtde_coelhos = 0, qtde_ratos = 0, qtde_sapos = 0, total = 0;
    double porc_coelhos = 0, porc_ratos = 0, porc_sapos = 0;

    cout << "Quantos casos de teste serao digitados? ";
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cout << "Quantidade de cobaias: ";
        cin >> qtde;
        cout << "Tipo de cobaia [C] - Coelho [R] - Rato - Sapo [S]: ";
        cin >> tipo_cobaia;
        tipo_cobaia = toupper(tipo_cobaia);
        switch (tipo_cobaia)
        {
        case 'C':
            qtde_coelhos += qtde;
            break;
        case 'R':
            qtde_ratos += qtde;
            break;
        case 'S':
            qtde_sapos += qtde;
            break;
        default:
            do
            {
                if((tipo_cobaia != 'C') && (tipo_cobaia != 'R') && (tipo_cobaia != 'S'))
                {
                    cout << "Invalido ...Digite [C] - Coelho [R] - Rato [S] - Sapo: ";
                    cin >> tipo_cobaia;
                    tipo_cobaia = toupper(tipo_cobaia);
                }
            }
            while((tipo_cobaia != 'C') && (tipo_cobaia != 'R') && (tipo_cobaia != 'S'));
        }
        total = qtde_coelhos + qtde_ratos + qtde_sapos;
    }
    porc_coelhos = (double) qtde_coelhos / total;
    porc_ratos = (double) qtde_ratos / total;
    porc_sapos = (double) qtde_sapos / total;
    cout << fixed << setprecision(2);
    cout << "\nRELATORIO FINAL: " << endl;
    cout << "Total: " << total << " cobaias" << endl;
    cout << "Total de coelhos: " << qtde_coelhos << endl;
    cout << "Total de ratos: " << qtde_ratos << endl;
    cout << "Total de sapos: " << qtde_sapos << endl;
    cout << "Percentual de coelhos: " << porc_coelhos * 100 << "%" << endl;
    cout << "Percenutal de ratos: " << porc_ratos * 100 << "%" << endl;
    cout << "Percentual de sapos: " << porc_sapos * 100 << "%" << endl;

    return 0;
}
