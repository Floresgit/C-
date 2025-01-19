#include <iostream>
using namespace std;

int main(){
    int vector[] = {4,1,2,3,5};
    int i,dato;
    char band = 'F';

    dato = 2;

    i=0;
    while((band == 'F') && (i<5)){
        if(vector[i] == dato){
            band = 'V';
        }
        i++;
    }
    if(band == 'F'){
        cout<<"El numero a buscar no existe.";
    }
    else if(band == 'V'){
        cout<<"El numero fue encontrado en la posicion "<<i-1;
    }
  
    return 0;
}