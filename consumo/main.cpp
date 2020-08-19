#include <bits/stdc++.h>

using namespace std;

int main()
{
    double consumoMedio = 0, distancia = 0, combustivel = 0;

    cout << "Distancia percorrida: ";
    cin >> distancia;
    cout << "Combustivel gasto: ";
    cin >> combustivel;
    cout << fixed << setprecision(3);
    consumoMedio = distancia / combustivel;
    cout << "Consumo medio = " << consumoMedio << " litros" << endl;

    return 0;
}
