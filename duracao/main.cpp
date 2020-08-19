#include <bits/stdc++.h>

using namespace std;

int main()
{
    int resto =0, duracao = 0, horas = 0, minutos = 0, segundos = 0;

    cout << "Digite a duracao em segundos.: ";
    cin >> duracao;
    horas = duracao / 3600;
    resto = duracao % 3600;
    minutos = resto / 60;
    segundos = resto % 60;
    cout << horas << "hh: "<< minutos << "mm: " << segundos << "s." << endl;

    return 0;
}
