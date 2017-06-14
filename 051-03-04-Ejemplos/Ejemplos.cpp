#include <iostream>
/*
Nombre: ejemplos
Se muestra por pantalla ejemplos de los
distintos tipos de datos
Autor: Pablo Sebastian Ranieri Castillo
Ultima fecha de modificacion: 13/6/2017
*/
using namespace std;

int main()
{
    cout<<"Ejemplo Variable bool"<<endl;

    bool verdadero, falso;
    verdadero = true;
    falso = false;

    cout<<"Funcion AND: "<<endl;
    cout<<" Verdadero AND Verdadero: "<< (verdadero&&verdadero)<<endl;
    cout<<" Verdadero AND Falso: "<< (verdadero&&falso)<<endl;
    cout<<" Falso AND Falso: "<<(falso && falso)<<endl;

    cout<<"Funcion OR: "<<endl;
    cout<<" Verdadero OR Verdadero: "<<(verdadero || verdadero)<<endl;
    cout<<" Verdadero OR Falso: "<<(verdadero || falso)<<endl;
    cout<<" Falso OR Falso: "<<(falso || falso)<<endl;

    cout<<"Funcion NOT:"<<endl;
    cout<<" NOT Verdadero: "<< !verdadero <<endl;
    cout<<" NOT Falso: "<< !falso<<endl;

    cout<<" "<<endl;

    cout<<"Ejemplo Variable char: "<<endl;

    char char1 = 'A',char2 = '2';
    cout << "Valores: " << char1 << "      " << char2<<endl;

    cout<<" "<<endl;

    unsigned unsInt = 65535 ;
    cout << "Ejemplo Variable unsigned: "<<endl;
    cout <<"Valor: "<< unsInt<<endl;

    cout<<" "<<endl;

    cout << "Ejemplo Variable int: "<<endl;
    int int1 = 3541,int2 = -6546;
    cout << "Valores: " << int1 << "      " << int2<<endl;

    cout<<" "<<endl;

    cout << "Ejemplo Variable double: "<<endl;
    double double1 = 65456.1,double2 = -8521.3;
    cout << "Valores: " << double1 << "      " << double2<<endl;

    cout<<" "<<endl;

    cout << "Ejemplo variable String"<<endl;
    string varstring;
    varstring = "Cadena de Caracteres";
    cout << varstring<< endl;
}
