#include <iostream>

int main(){
    int numeros[10],*dir_numeros;
    
    for(int i=0;i<10;i++){
        std::cout<<"Ingresa un numero ["<<i<<"] ";
        std::cin>>numeros[i];
    }

    dir_numeros = numeros;

    for(int i=0;i<10;i++){
        if(*dir_numeros %2 == 0){
            std::cout<<"El numero "<<*dir_numeros<<" es par"
            <<" Pocicion: "<<dir_numeros<<std::endl;
        }
        dir_numeros++;
    }

    return 0;
}