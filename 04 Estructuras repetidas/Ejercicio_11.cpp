/*Ejercicio 11: Escriba un programa que calcule el valor de: 2^1+2^2+2^3+...+2^n
*/
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main(){

    int numero,suma=0;

    cout<<"Ingrese el numero tope:  ";
    cin>>numero;

    for(int i=1;i<=numero;i++){
        suma += pow(2,i);
        cout<<2<<"^"<<i<<endl;
    }

    cout<<"La suma es:  "<<suma;
    getch();
    return 0;
}