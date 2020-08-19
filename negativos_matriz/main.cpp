#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m, n;
    cout << "Quantidade de linhas da matriz? ";
    cin >> m;
    cout << "Quantidade de colunas da matriz? ";
    cin >> n;
    int numeros[m][n];

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> numeros[i][j];
        }
    }

    cout << "VALORES NEGATIVOS" << endl;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n;j++){
            if(numeros[i][j] < 0){
                cout << numeros[i][j] << endl;
            }
        }
    }
    return 0;
}
