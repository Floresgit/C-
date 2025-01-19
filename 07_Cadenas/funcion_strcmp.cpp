#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char cadena1[] = "avion";
    char cadena2[] = "avion";
    char cadena3[] = "becerro";

    if(strcmp(cadena1,cadena2)==0){
        cout<<"Ambas son iguales";
    }
    else{
        cout<<"Ambas son diferentes";
    }
    if(strcmp(cadena3,cadena2) > 0){
        cout<<'\n'<<cadena3<<" esta despues alfabeticamente que "<<cadena2;
    }

    return 0;
}