#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m = 0, n = 0;
    cout << "Qual a quantidade de linhas: ";
    cin >> m;
    cout << "Qual a quantidade de colunas: ";
    cin >> n;

    double mat[m][n];
    double vet[m];

    for(int i = 0; i < m; i++){
        cout << "Digite os elementos da " << i + 1 << ". linha: " << endl;
        for(int j = 0; j < n;j++){
            cin >> mat[i][j];
        }
    }
    for(int i = 0; i < m; i++){
        vet[i] = 0;
        for (int j = 0; j < n; j++){
            vet[i] += mat[i][j];
        }
    }
    cout << "VETOR GERADO: " << endl;
    cout << fixed << setprecision(1);
    for (int i = 0; i < m; i++){
        cout << vet[i] << endl;
    }


    return 0;
}
