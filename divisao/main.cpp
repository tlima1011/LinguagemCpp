#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num = 0, den = 0, n = 0;
    double divisao;

    cout << "Quantos casos voce vai digitar? ";
    cin >> n;
    for(int i = 0; i < n;i++){
        cout << "Entre com o numerador: ";
        cin >> num;
        cout << "Entre com o denominador: ";
        cin >> den;
        if(den == 0){
           cout << "DIVISAO IMPOSSIVEL" << endl;
        }else{
            divisao = (double) num / den;
            cout << fixed << setprecision(2);
            cout << "DIVISAO = " << divisao << endl;
        }
    }


    return 0;
}
