/*Ejercicio 16: Realice un programa que calcule la descomposición en factores primos de un número entero.
Por ejemplo: 20 = 2*2*5.
*/
#include <iostream>
using namespace std;

int main(){
    int numero;

    cout<<"Ingrese un numero:  ";
    cin>>numero;


    for(int i=2;numero>1;i++){
        while(numero % i == 0){
            cout<<i<<" * ";
            numero /= i;
        }
    }

    return 0;
}