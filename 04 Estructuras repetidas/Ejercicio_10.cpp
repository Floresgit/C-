/*Ejercicio 10: Escriba un programa que calcule el valor de: 1!+2!+3!+...+n! (suma de factoriales).
*/
#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){

    int numero,resultado=1,suma=0;

    cout<<"Ingrese el numero del factorial:  ";
    cin>>numero;

    for(int i=1;i<=numero;i++){
        cout<<i<<" = "<<suma<<'\n';
        for(int j=1;j<=i;j++){
            resultado *= j;
            cout<<'\t'<<j<<" = "<<resultado<<endl;
        }
        suma += resultado;
        resultado = 1;
    }
    cout<<"El resultado es:  "<<suma<<'\n';

    system("pause");
    return 0;
}