#include <iostream>
#include <cmath>

void pedir_datos();
void funpot(int, int);

int num,pot;

int main(){
    pedir_datos();
    funpot(num,pot);
    return 0;
}

void pedir_datos(){
    std::cout<<"Ingrese un numero:    ";
    std::cin>>num;
    std::cout<<"Ingrese la potencia:  ";
    std::cin>>pot;
}

void funpot(int numero, int potencia){
    long resultado = pow(numero,potencia);

    std::cout<<"El resutado es:  "<<resultado;
}