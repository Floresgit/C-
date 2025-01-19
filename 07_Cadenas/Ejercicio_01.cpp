#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char cadena[20];
    int longitud = 0;

    cout<<"Ingrese una cadena: ";
    cin.getline(cadena,20,'\n');

    longitud = strlen(cadena);

    if(longitud >= 10){
        cout<<"La cadena supera los dies caracteres\n"<<cadena;
    }
    else{
        cout<<"La cadena NO supera los dies caracteres";;
    }
    return 0;
}