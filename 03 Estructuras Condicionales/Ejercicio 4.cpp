#include <iostream>
using namespace std;

int main(){

    int numero;

    cout<<"Ingrese un numero:  ";
    cin>>numero;

    if(numero == 0){
        cout<<"El numero es 0";
    }
    else if(numero < 0){
        cout<<"El numero es menor a cero";
    }
    else{
        cout<<"El numero mayo a cero";
    }

    return 0;
}