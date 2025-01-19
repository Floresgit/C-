#include <iostream>

template <class TIPOD>
void mostrar_absoluto(TIPOD );

int main(){
    int numero1 = -4;
    float numero2 = -56.67;
    double numero3 = 123.456789;

    mostrar_absoluto(numero1);
    mostrar_absoluto(numero2);
    mostrar_absoluto(numero3);

    return 0;
}

template <class TIPOD>
void mostrar_absoluto(TIPOD numero){
    if(numero < 0){
        numero = numero * -1;
    }
    std::cout<<"El valor absoluto del numero es:  "<<numero<<'\n';
}