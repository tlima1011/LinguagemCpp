#include <bits/stdc++.h>

using namespace std;

int main()
{
    double x, y;

    cout << "Digite os valores das coordenadas X e Y: " << endl;
    do{
        cin >> x;
        cin >> y;
        if(x > 0 && y > 0){
            cout << "QUADRANTE Q1" << endl;
        }else if(x < 0 && y > 0){
            cout << "QUADRAMTE Q2" << endl;
        }else if(x < 0 && y < 0){
            cout << "QUADRANTE Q3" << endl;
        }else if(x > 0 && y < 0){
            cout << "QUADRANTE Q4" << endl;
        }else{
            break;
        }
        cout << "Digite os valores das coordenadas X e Y: " << endl;
    }while(x != 0 || y != 0);

    return 0;
}
