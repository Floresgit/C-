#include <iostream>

int main(){
    int numeros[] = {1,2,3,4,5};
    int *dir_numeros;

    dir_numeros = numeros;

    for(int i=0;i<5;i++){
        std::cout<<"Elemento del vector ["<<i<<"]: "<<numeros[i]
        <<" Posicion de memoria: "<<dir_numeros++<<std::endl;
    }
    return 0;
}