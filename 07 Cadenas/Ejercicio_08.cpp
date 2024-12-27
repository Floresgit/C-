#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    char cadena1[10];
    char cadena2[10];
    int numero;
    float real,suma = 0;

    cout<<"Ingresa una cadena:  ";
    cin.getline(cadena1,10,'\n');
    cout<<"Ingresa una cadena:  ";
    cin.getline(cadena2,10,'\n');

    numero = atoi(cadena1);
    real = atof(cadena2);

    suma = numero + real;

    cout<<"la suma de los numeros es:  "<<suma;
    return 0;
}