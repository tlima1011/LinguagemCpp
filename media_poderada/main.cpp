#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    double nota1 = 0, nota2 = 0, nota3 = 0, media = 0;

    cout << "Quantos casos vai digitar? ";
    cin >> n;
    for(int i = 0; i < n; i++){
        cout << "Digite tres numeros: " << endl;
        cin >> nota1;
        cin >> nota2;
        cin >> nota3;
        cout << fixed << setprecision(1);
        media = (2 * nota1 + 3 * nota2 + 5 * nota3) / 10;
        cout << "MEDIA = " << media << endl;
    }

    return 0;
}
