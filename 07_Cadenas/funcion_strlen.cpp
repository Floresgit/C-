#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char cadena1[] = "hola";
    int longitud = 0;

    longitud = strlen(cadena1);
    cout<<cadena1<<endl;
    cout<<"la longitud de la cadena es:  "<<longitud;
    return 0;
}