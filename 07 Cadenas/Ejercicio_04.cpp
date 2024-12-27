#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char cadena1[] = "Hola que tal";
    char cadena2[20];
    char cadena3[40];
    cadena3[0] = '\0';

    cout<<"Ingrese su nombre: ";
    cin.getline(cadena2,20,'\n');

    strcat(cadena3,cadena1);
    strcat(cadena3," ");
    strcat(cadena3,cadena2);

    cout<<cadena3<<endl;
    return 0;
}