#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){

    int base,potencia,resultado = 1;

    cout<<"Ingrese el numero base:  ";
    cin>>base;
    cout<<"Ingrese la potencia:     ";
    cin>>potencia;


    for(int i=0;i<potencia;i++){

        resultado *= base;

    }

    cout<<"El resultado es:  "<<resultado<<endl;

    system("pause");
    return 0;
}