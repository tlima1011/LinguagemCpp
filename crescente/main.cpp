#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x = 0, y = 0;

    cout << "Digite dois numeros.: " << endl;
    do{
        cin >> x >> y;
        if (x < y){
            cout << "CRESCENTE" << endl;
        }else if (y < x){
            cout << "DECRESCENTE" << endl;
        }else{
            break;
        }
        cout << "Digite outros dois numeros: " << endl;
    }while(x != y);

    return 0;
}
