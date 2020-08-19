#include <bits/stdc++.h>

using namespace std;

int main()
{
    double area, raio;

    cout << "Digite o valor do raio do circulo: ";
    cin >> raio;
    area = 3.1415 * pow(raio, 2);
    cout << fixed << setprecision(3);
    cout << "AREA = " << area << endl;

    return 0;
}
