#include <iostream>

void pedir_datos();
void funcion(int [], int);

int vector[100],tam;

int main(){

    std::cout<<"Ingrese el tamanio del vector: ";
    std::cin>>tam;

    pedir_datos();
    funcion(vector,tam);

    return 0;
}
void pedir_datos(){
    for(int i=0;i<tam;i++){
        std::cout<<i+1<<") Ingrese un numero:  ";
        std::cin>>vector[i];
    }
    vector[tam] = '\0';
}
void funcion(int vector[], int tam){
    char band = 'V';
    for(int i=0;i<tam;i++){
        if(i>0){
            if(vector[i-1] > vector[i]){
                band = 'F';
                break;
            }
        }
    }
    if(band == 'F'){
        std::cout<<"La cadena no es acendente\n";
    }
    else{
        std::cout<<"La cadena si es acendente\n";
    }
}