#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char nombre[20];

    cout<<"Ingrese su nombre en mayusculas:  ";
    cin.getline(nombre,20,'\n');

    if(nombre[0] == 'A'){
        strlwr(nombre);
        cout<<nombre;
    }
    return 0;
}