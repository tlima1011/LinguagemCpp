#include <bits/stdc++.h>

using namespace std;

int main()
{
    double a = 0, b = 0, c = 0, areaQuadrado, areaTrapezio, areaTriangulo;

    cout << "Digite a medida A: ";
    cin >> a;
    cout << "Digite a medida B: ";
    cin >> b;
    cout << "Digite a medida C: ";
    cin >> c;
    areaQuadrado = a * a;
    areaTriangulo = (a * b) / 2;
    areaTrapezio = c * (a + b) / 2;
    cout << fixed << setprecision(4);
    cout << "AREA DO QUADRADO.: " << areaQuadrado << endl;
    cout << "AREA DO TRIANGULO.: " << areaTriangulo << endl;
    cout << "AREA DO TRAPEZIO.: " << areaTrapezio << endl;

    return 0;
}
