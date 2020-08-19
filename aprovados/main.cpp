#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 0;

    cout << "Quantos alunos serao digitados? ";
    cin >> n;
    string nomes[n];
    double medias[n];
    double notas1[n];
    double notas2[n];

    for(int i = 0; i < n; i++){
        cout << "Digite nome, primeira e segunda nota do " << i + 1 << ". aluno" << endl;
        cin.ignore(INT_MAX, '\n');
        getline(cin, nomes[i]);
        cin >> notas1[i];
        cin >> notas2[i];
        medias[i] = (notas1[i] + notas2[i]) / 2;
    }
    cout << "Alunos aprovados: " << endl;
    for(int i = 0; i < n; i++){
        if(medias[i] >= 6){
            cout << nomes[i] << endl;
        }
    }





    return 0;
}
