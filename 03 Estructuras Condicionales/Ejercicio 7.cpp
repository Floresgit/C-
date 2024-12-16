#include <iostream>
using namespace std;

int main(){

    int edad;

    cout<<"Ingrese su edad:  ";
    cin>>edad;

    if(edad >= 18 && edad <= 25){
        cout<<"La edad esta dentro del rango";
    }
    else{
        cout<<"La edad NO esta dentro del rango";
    }
    return 0;
}