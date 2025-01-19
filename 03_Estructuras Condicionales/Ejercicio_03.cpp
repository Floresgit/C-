#include <iostream>
using namespace std;

int main(){

    int numero;

    cout<<"Ingrese un numero:  ";
    cin>>numero;

    if(numero == 0){
        cout<<"El numero es cero";
    }
    else if(numero %2 == 0){
        cout<<"El numero es par";
    }
    else{
        cout<<"El numero es inpar";
    }

    return 0;
}