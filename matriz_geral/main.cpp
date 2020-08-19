#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 0, soma = 0, linha = 0, coluna = 0;
    cout << "Qual a ordem da matriz? ";
    cin >> n;
    double mat[n][n];

    for(int i = 0; i < n;i++){
        for(int j = 0; j < n;j++){
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> mat[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if (mat[i][j] > 0){
                soma += mat[i][j];
            }
        }
    }
    cout << endl;
    cout << "SOMA DOS POSITIVOS: " << soma << endl;
    cout << endl;
    cout << endl;
    cout << "Escolha uma linha: ";
    cin >> linha;
    cout << "LINHA ESCOLHIDA: ";
    cout << fixed << setprecision(1);
    for(int j = 0; j < n; j++){
        cout << mat[linha][j] << "  ";
    }
    cout << endl;
    cout << endl;
    cout << "Escolha uma coluna: ";
    cin >> coluna;
    cout << "COLUNA ESCOLHIDA: ";
    for(int i = 0; i < n; i++){
        cout << mat[i][coluna] << "  ";
    }
    cout << endl;
    cout << endl;
    cout << "DIAGONAL PRINCIPAL: ";
    for(int i = 0; i < n; i++){
        cout << mat[i][i] << "  ";
    }
    cout << endl;
    cout << endl;
    cout << "MATRIZ ALTERADA: " << endl;
    for (int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(mat[i][j] < 0){
                mat[i][j] = pow(mat[i][j], 2);
                cout << mat[i][j] << "  ";
            }else{
                cout << mat[i][j] << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}
