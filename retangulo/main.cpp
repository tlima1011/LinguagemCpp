#include <bits/stdc++.h>

using namespace std;

int main()
{
    double base = 0, altura = 0, area = 0, perimetro = 0, diagonal = 0;
    cout << "Base do Retangulo: ";
    cin >> base;
    cout << "Altura do Retangulo: ";
    cin >> altura;
    area = base * altura;
    perimetro = 2 * (base + altura);
    diagonal = sqrt(pow(base,2) + pow(altura,2));
    cout << fixed << setprecision(4);
    cout << "AREA = " << area << endl;
    cout << "PERIMETRO = " << perimetro << endl;
    cout << "DIAGONAL = " << diagonal << endl;

    return 0;
}
