#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 0, qtde_mulheres = 0, qtde_homens = 0;
    double menor_altura = 0, maior_altura = 0, soma_mulheres = 0, media = 0;
    cout << "Quantas pessoas serao digitadas? ";
    cin >> n;

    double alturas[n];
    char generos[n];

    for(int i = 0; i < n; i++){
        cout << "Altura da " << i + 1 << ". pessoa: ";
        cin >> alturas[i];
        cout << "Genero da " << i + 1 << ". pessoa: ";
        cin >> generos[i];
        generos[i] = toupper(generos[i]);
    }

    menor_altura = alturas[0];
    maior_altura = alturas[0];

    for(int i = 1; i < n; i++){
        if (alturas[i] > maior_altura){
            maior_altura = alturas[i];
        }
        if (alturas[i] < menor_altura){
            menor_altura = alturas[i];
        }
    }
    for(int i = 0; i < n; i++){
        if(generos[i] == 'M'){
            qtde_homens++;
        }else if(generos[i] == 'F'){
            qtde_mulheres++;
            soma_mulheres += alturas[i];
        }
    }
    media = soma_mulheres / qtde_mulheres;
    cout << fixed << setprecision(2);
    cout << "Menor altura = " << menor_altura << endl;
    cout << "Maior altura = " << maior_altura << endl;
    cout << "Media das alturas das mulheres = " << media << endl;
    cout << "Numero de homens = " << qtde_homens << endl;

    return 0;
}
