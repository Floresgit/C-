#include <iostream>

int sumar(int );

int main(){
    int elementos;

    do{
        std::cout<<"digite el numero de elemtos:  ";
        std::cin>>elementos;
    }while(elementos <= 0);

    std::cout<<"El resultado es: "<<sumar(elementos);

    return 0;
}

int sumar(int n){
    int suma = 0;
    if(n == 1){
        suma = 1;
    }
    else{
        suma = n + sumar(n-1);
    }

    return suma;
}