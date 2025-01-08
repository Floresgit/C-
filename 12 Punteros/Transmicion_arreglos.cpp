#include <iostream>

int maximo(int *, int);

int main(){
    const int elementos = 5;
    int numeros[elementos] = {3,5,2,8,1};

    std::cout<<"EL numero mayor es: "<<maximo(numeros,elementos);

    return 0;
}
int maximo(int *numeros, int longitud){
    int mayor = numeros[0];

    for(int i=0;i<longitud;i++){
        if(*(numeros+i) > mayor){
            mayor = *(numeros+i);
        }
    }
    return mayor;
}