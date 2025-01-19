#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char cadena1[20];
    char cadena2[20];
    char cadena_aux[20];
    cadena2[0] = '\0';

    cout<<"Ingrese una cadena: ";
    cin.getline(cadena1,20,'\n');

    strcpy(cadena_aux,cadena1);
    strcpy(cadena2,strrev(cadena1));

    cout<<"La cadena original es: "<<cadena_aux<<endl;
    cout<<"La cadena inversa es:  "<<cadena2<<endl;

    if(strcmp(cadena_aux,cadena2)==0){
        cout<<"La cadena1 es polindroma";
    }
    else{
        cout<<"La cadena1 NO es polindroma";
    }


    return 0;
}