#include <iostream>

void pedir_datos();
void mostrar(int [], int);

int vector[100],tam;

int main(){
    pedir_datos();
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

void mostrar(int vector[], int tam){
    for(int i=0;i<tam;i++){
        if(vector[i] %2 != 0){
            std::cout<<vector[i]<<"  ";
        }
    }
}