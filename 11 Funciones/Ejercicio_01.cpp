#include <iostream>

void pedir_datos();
void multiplicacion( float, float);

float numero1, numero2;

int main(){
    pedir_datos();
    multiplicacion(numero1, numero2);

    return 0;
}

void pedir_datos(){
    std::cout<<"ingrese dos numero:\n";
    std::cin>>numero1>>numero2;
}

void multiplicacion( float x, float y){
    float mul = x * y;

    std::cout<<"La multiplicacion es:  "<<mul;
}