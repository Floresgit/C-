/*Ejercicio 12: Hacer un programa que calcule el resultado de la siguiente expresion: 1-2+3-4+5-6...n
*/
#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){

    int n,aux,suma=0;

    cout<<"Ingrese el numero tope: ";
    cin>>n;

    for(int i=1;i<=n;i++){
        if(i%2 == 0){
            aux = i * -1;
            suma += aux;
        }
        else{
            aux = i * 1;
            suma += aux;
        }
        cout<<"("<<aux<<") + ";
    }
    cout<<"\nLa suma es:  "<<suma<<endl;
    system("pause");
    return 0;
}