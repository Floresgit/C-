#include <iostream>

void cuadrado(int [], int);
void mostrar(int [], int);

int main(){
    const int TAM = 5;
    int vector[TAM] = {1,2,3,4,5};

    cuadrado(vector,TAM);
    mostrar(vector,TAM);

    return 0;
}
void cuadrado(int vector[], int longitud){
    for(int i=0;i<longitud;i++){
        vector[i] *= vector[i];
    }
}
void mostrar(int vector[], int longitud){
    for(int i=0;i<longitud;i++){
        std::cout<<vector[i]<<' ';
    }
}