#include <iostream>
/*
Nombre: Mayor
Se muestra por pantalla el mayor de dos numeros
Autor: Pablo Sebastian Ranieri Castillo
Ultima fecha de modificacion: 13/6/2017
*/
using namespace std;

int main()
{
    int a, b;

    cout <<"Ingrese un numero"<<endl;
    cin >> a;
    cout <<"ingrase otro"<<endl;
    cin >> b;

    if( a > b )
        cout << a <<endl;
    else if( b > a )
        cout << b <<endl;
    else
        cout << "Son iguales";

    return 0;
}
