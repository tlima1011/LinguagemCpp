#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, produto;

    cout << "Informe a tabuada: ";
    cin >> n;
    cout << "Tabuada de.: " << n << endl;
    for (int i = 1; i <= 10;i++){
        produto = n * i;
        cout << n << " x " << i << " = " << produto << endl;
    }

    return 0;
}
