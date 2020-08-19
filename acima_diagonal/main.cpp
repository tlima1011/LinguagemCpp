#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, soma = 0;
    cout << "Qual a ordem da matriz? ";
    cin >> n;
    int mat[n][n];
    for(int i = 0; i < n;i++){
        for (int j = 0; j < n;j++){
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> mat[i][j];
        }
    }
    for(int i = 0; i < n;i++){
        for (int j = i + 1; j < n;j++){
            soma += mat[i][j];
        }
    }
    cout << "SOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = " << soma << endl;
    return 0;
}
