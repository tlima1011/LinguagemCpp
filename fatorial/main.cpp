#include <bits/stdc++.h>

using namespace std;

int main()
{
    int f = 1, n = 0;
    cout << "Digite o valor de N: ";
    cin >> n;
    for(int i = 1; i <= n;i++){
        f *= i;
    }
    cout << "FATORIAL = " << f;
    return 0;
}
