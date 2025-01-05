#include <iostream>
#include <cmath>

void pedir_datos();
void cudrado(float);

float base;

int main(){
    pedir_datos();
    cudrado(base);

    return 0;
}

void pedir_datos(){
    std::cout<<"Ingrese un numero:  ";
    std::cin>>base;
}

void cudrado(float numero){
    float elevacion = pow(numero,2);

    std::cout<<"EL numero "<<numero<<" elevado es: "<<elevacion;
}