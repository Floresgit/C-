#include <iostream>
#include <cstdio>

int main(){

    int numeros[] = {1,2,3,4,5};
    int *dir_numeros;

    dir_numeros = numeros;

    for(int i=0;i<5;i++){
        std::cout<<"Elemento del vector ["<<i<<"]: "<<numeros[i];
        printf(" Direccion de memoria: %p\n",dir_numeros++);
    }

    return 0;
}