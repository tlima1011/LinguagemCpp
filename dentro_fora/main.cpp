#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x, fora = 0, dentro = 0;

    cout << "Quantos numeros voce ira digitar? ";
    cin >> n;

    for(int i = 0; i < n;i++){
        cout << "Digite o " << i + 1 <<". numero: ";
        cin >> x;
        if(x >= 10 && x <= 20){
            dentro++;
        }else{
            fora++;
        }
    }
    cout << dentro << " DENTRO" << endl;
    cout << fora << " FORA" << endl;

    return 0;
}
