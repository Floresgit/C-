/*Ejercicio 9: Escriba un programa que calcule el valor de: 1*2*3*...*n (factorial)
*/
#include <iostream>
#include <conio.h>
using namespace std;

int main(){

    int numero,resultado=1;

    cout<<"Ingrese el numero del factorial:  ";
    cin>>numero;

    for(int i=1;i<=numero;i++){
        resultado *= i;
    }
    cout<<"El resultado es:  "<<resultado;

    getch();
    return 0;
}