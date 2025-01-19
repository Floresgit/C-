/*
Ejercicio 6: Escribe un programa que defina un vector de números y
calcule si existe algún número en el vector cuyo valor equivale a la
suma del resto de números del vector.*/
#include <iostream>
using namespace std;

int main(){
    int numeros[] = {1,2,10,3,4};
    int suma = 0,mayor = 0;

    for(int i=0;i<5;i++){
        suma += numeros[i];

        if(numeros[i] > mayor){
            mayor = numeros[i];
        }
    }
    if(mayor == suma - mayor){
        cout<<"Es el numero "<<mayor;
    }
    else{
        cout<<"No existe";
    }
    return 0;
}