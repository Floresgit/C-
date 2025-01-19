#include <iostream>

void pedir_datos();
int suma(int [],int);

int vector[100],tam;

int main(){
    pedir_datos();
    std::cout<<"La suma del vector es: "<<suma(vector,tam);

    return 0;
}
void pedir_datos(){
    std::cout<<"Ingrese el tamanio del vector:  ";
    std::cin>>tam;

    for(int i=0;i<tam;i++){
        std::cout<<i+1<<") Ingrese un numero: ";
        std::cin>>vector[i];
    }
    vector[tam] = '\0';
}
int suma(int vector[], int tam){
    int suma=0;
    for(int i=0;i<tam;i++){
        suma += vector[i];
    }
    return suma;
}