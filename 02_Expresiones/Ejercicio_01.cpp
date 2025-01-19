/*Ejercicio 1: Escribe la siguiente expresión como expresión en C++:
(a/b) + 1
*/
#include <iostream>
using namespace std;

int main()
{
    float a,b,resultado = 0;

    cout<<"Ingrese el valor a:  ";cin>>a;
    cout<<"Ingrese el valor b:  ";cin>>b;
    
    resultado = (a/b) + 1;
    
    cout<<"El resulatado es:  ("<<a<<"/"<<b<<") + 1 = ";
    cout.precision(2);
    cout<<resultado;
    return 0;
}
