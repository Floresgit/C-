/*Ejercicio 1: Escriba un programa que lea dos números y determine cuál de ellos es el mayor.
*/
#include <iostream>
using namespace std;

int main(){

    int n1,n2;

    cout<<"Ingrese dos numeros:\n";
    cin>>n1>>n2;

    if(n1 == n2){
        cout<<"Los numero son iguales";
    }
    else{
        if(n1 > n2){
            cout<<"El numero "<<n1<<" es mas grande";
        }
        else{
            cout<<"El numero "<<n2<<" es mas grande";
        }
    }
}