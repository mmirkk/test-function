#include <iostream>

using namespace std;

bool flag;

bool numPrimo(int numero)
{
    if (numero == 2)
    {
        flag = 1;
    }else if (numero % 2 == 0)
    {
        flag = 0;
    }else if (numero%2 != 0)
    {
        flag = 1;
    }

    return flag;
}

int main()
{
    int num;

    cout << "Ingrese un num: ";
    cin >> num;

    numPrimo(num);

    if (flag == 1)
    {
        cout << "El numero es primo";
    }else if (flag == 0)
    {
        cout << "El numero NO es primo";
    }

    return 0;
}



