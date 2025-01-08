#include <iostream>

int main(){
    int numeros[100],n,*menor;

    std::cout<<"Cuantos numeros seran?  ";
    std::cin>>n;

    for(int i=0;i<n;i++){
        std::cout<<"Ingrese un numero:  ";
        std::cin>>numeros[i];
    }

    menor = numeros;

    for(int i=0;i<n;i++){
        if(*menor >= numeros[i]){
            *menor = numeros[i];
        }
    }

    std::cout<<"El numero menor es: "<<*menor;
    std::cout<<" Direccion: "<<menor;

    return 0;
}