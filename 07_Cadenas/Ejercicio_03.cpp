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

    if(strcmp(cadena1,cadena2)==0){
        cout<<"Ambas son iguales";
    }
    else{
        cout<<"Ambas son diferentes";
        
        if(strcmp(cadena1,cadena2) > 0){
            cout<<'\n'<<cadena1<<" esta despues alfabeticamente que "<<cadena2;
        }
        else{
            cout<<'\n'<<cadena2<<" esta despues alfabeticamente que "<<cadena1;
        }
    }

    return 0;
}