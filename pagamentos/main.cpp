#include <bits/stdc++.h>

using namespace std;

int main()
{
    string nome;
    double pagamento = 0, valorHora = 0, horasTrabalhadas = 0;

    cout << "Nome: ";
    //cin.ignore(INT_MAX, '\n');
    getline(cin, nome);
    cout << "Valor por hora R$";
    cin >> valorHora;
    cout << "Horas trabalhadas: ";
    cin >> horasTrabalhadas;
    pagamento = valorHora * horasTrabalhadas;
    cout << fixed << setprecision(2);
    cout << "O pagamento para " << nome << " deve ser R$" << pagamento << endl;

    return 0;
}
