#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    int numero, *dir_numero;

    cout<<"Ingrese un numero: ";
    cin>>numero;

    dir_numero = &numero;

    cout<<endl;
    if(*dir_numero %2 == 0){
        cout<<"El numero"<<*dir_numero<<" es par"<<endl;
        cout<<"Direccion de memoria "<<dir_numero;
    }
    else{
        cout<<"No es par"<<endl;
        cout<<"Direccion de memoria "<<dir_numero;
    }

    return 0;
}