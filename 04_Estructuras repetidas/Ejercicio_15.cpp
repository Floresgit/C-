/*Ejercicio 15: Realice un programa que solicite al usuario que piense un número entero entre el 1 y el 100.
El programa debe generar un numero aleatorio en ese mismo rango[1-100]
e indicarle al usuario si el numero que dígito es menor o mayor al numero aleatorio,
así hasta que lo adivine. y por ultimo mostrarle el numero de intentos que le llevo.
*/
#include <iostream>
#include <conio.h>
#include <time.h>
using namespace std;

int main(){
    int numero,dato,contador=0;


    srand(time(NULL));
    dato = 1 + rand() % (100);

    cout<<"Ingresa un numero entre el 1-100:  ";
    cin>>numero;
    do{

        if(numero < dato){
            cout<<"Ingrese un numero mayor:  ";
        }
        if(numero > dato){
            cout<<"Ingrese un numero menor:  ";
        }
        contador++;
        cin>>numero;
    }while(numero != dato);

    cout<<"Numero de intentos fue:  "<<contador;

    getch();
    return 0;
}