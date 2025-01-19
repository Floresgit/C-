#include <iostream>
using namespace std;

int main(){
    int vector[] = {1,2,3,4,5};
    int inferior,superior,mitad,dato;
    char band = 'F';

    dato = 2;

    inferior = 0;
    superior = 5;

    while(inferior <= superior){
        mitad = (inferior + superior)/2;
        if(vector[mitad] == dato){
            band = 'V';
            break;
        }
        if(vector[mitad] > dato){
            superior = mitad;
            mitad = (inferior + superior)/2;
        }
        if(vector[mitad] < dato){
            inferior = mitad;
            mitad = (inferior + superior)/2;
        }
    }

    if(band == 'V'){
        cout<<"el numero fue encontrado en la posicion "<<mitad;
    }
    else{
        cout<<"El numero no fue encontrado";
    }

    return 0;
}