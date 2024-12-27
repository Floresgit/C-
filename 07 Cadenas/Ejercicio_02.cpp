#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char cadena[10];
    char vector[10];
    int longitud = 0;

    cout<<"Ingrese una cadena:  ";
    cin.getline(cadena,10,'\n');

    longitud = strlen(cadena);

    for(int i=0;i<longitud;i++){
        vector[i] = cadena[i];
    }

    vector[longitud] = '\0';

    cout<<"Cadena ingresada:            "<<cadena<<endl;
    cout<<"Cadena copiada a vector:     "<<vector<<endl;
    cout<<"Vector caracter por caracter:"<<endl;

    for(int i=0;i<longitud;i++){
        cout<<vector[i]<<endl;
    }
    return 0;
}