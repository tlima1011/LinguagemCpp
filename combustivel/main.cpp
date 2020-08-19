#include <iostream>

using namespace std;

int main()
{
    int codigo = 0, alcool = 0, gasolina = 0, diesel = 0;

    do{
        cout << "Informe um codigo (1, 2, 3) ou 4 para parar: ";
        cin >> codigo;
        switch (codigo){
            case 1:
                alcool++;
                break;
            case 2:
                gasolina++;
                break;
            case 3:
                diesel++;
                break;
        }
    }while(codigo != 4);
    cout << "MUITO OBRIGADO!!!" << endl;
    cout << "Alcool: " << alcool << endl;
    cout << "Gasolina: " << gasolina << endl;
    cout << "Diesel: " << diesel << endl;
    return 0;
}
