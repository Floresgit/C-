#include <iostream>

void pedir_datos();
void cambiar_signo( int [], int);
void mostrar(int [], int);

int vector[100],tam;

int main(){
    pedir_datos();
    cambiar_signo(vector,tam);
    mostrar(vector,tam);

    return 0;
}
void pedir_datos(){
    std::cout<<"Ingrese el tamnio del vector:  ";
    std::cin>>tam;

    for(int i=0;i<tam;i++){
        std::cout<<i+1<<") Ingrese un numero: ";
        std::cin>>vector[i];
    }
}
void cambiar_signo( int vector[], int tam){
    for(int i=0;i<tam;i++){
        vector[i] *= -1;
    }
}
void mostrar(int vector[], int tam){
    for(int i=0;i<tam;i++){
        std::cout<<vector[i]<<"  ";
    }
}