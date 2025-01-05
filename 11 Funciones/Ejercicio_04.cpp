#include <iostream>

void pedir_datos();
void fraccionario(float);

float numero;

int main(){
    pedir_datos();
    fraccionario(numero);

    return 0;
}
void pedir_datos(){
    std::cout<<"Ingrese un numero: ";
    std::cin>>numero;
}

void fraccionario(float num){
    int entero = num;
    float resultado = num - entero;
    std::cout<<"La parte fraccionaria del numero es:  "<<resultado;
}