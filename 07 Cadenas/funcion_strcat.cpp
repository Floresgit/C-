#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char cadena1[] = "Esto es una cadena";
    char cadena2[] = " de ejemplo";
    char cadena3[30];

    strcat(cadena3,cadena1);
    strcat(cadena3,cadena2);

    cout<<cadena3;

    return 0;
}