/*Ejercicio 1: Escribe un programa que lea de la entrada estándar dos números y
muestre en la salida estándar su suma, resta, multiplicación y división.*/
#include <iostream>
using namespace std;

int main()
{
    float n1,n2,suma=0,resta=0,multiplicacion=0,division=0;
    cout<<"Ingrese el numero 1:  ";cin>>n1;
    cout<<"Ingrese el numero 2:  ";cin>>n2;

    suma = n1 + n2;
    resta = n1 - n2;
    multiplicacion = n1 * n2;
    division = n1 / n2;

    cout<<"La suma es:               "<<suma<<endl;
    cout<<"La resta es:              "<<resta<<endl;
    cout<<"La multiplicacion es:     "<<multiplicacion<<endl;
    cout<<"La divicion es:           "<<division<<endl;
    return 0;
}
