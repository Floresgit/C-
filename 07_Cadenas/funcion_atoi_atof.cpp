#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    char cadena1[] = "123";
    char cadena2[] = "123.45";
    int numero;
    float real;

    numero = atoi(cadena1);
    real = atof(cadena2);
    cout<<numero<<endl;
    cout<<real;
    
    return 0;
}