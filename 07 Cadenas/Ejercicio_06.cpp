#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char cadena1[20];
    char cadena2[20];

    cout<<"Ingrese la primera cadena:  ";
    cin.getline(cadena1,20,'\n');
    cout<<"Ingrese la segunda cadena:  ";
    cin.getline(cadena2,20,'\n');

    strupr(cadena1);
    strupr(cadena2);

    if(strcmp(cadena1,cadena2)==0){
        cout<<"Las cadenas son iguales";
    }
    else{
        cout<<"Las cadenas NO son iguales";
    }
    return 0;
}