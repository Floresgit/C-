/*Ejercicio 2: Escriba un programa que lea tres números y determine cuál de ellos es el mayor.
*/
#include <iostream>
using namespace std;

int main(){

    int n1,n2,n3;

    cout<<"Ingrese tres numeros:\n";
    cin>>n1>>n2>>n3;

    if(n1 > n2){
        if(n1 > n3){
            cout<<"El primer numero es el mayor";
        }
    }
    else if(n2 > n3){
        cout<<"El segundo numero es el mayor";
    }
    else if(n3 > n1){
        if(n3 > n2){
            cout<<"El tercer numero es el mayor";
        }
    }

    return 0;
}