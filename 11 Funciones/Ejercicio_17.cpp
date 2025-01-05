#include <iostream>

struct Complejo{
    float real,imaginaria;
}z1,z2;

void pedir_datos();
Complejo suma(Complejo, Complejo);
void mostrar(Complejo);

int main(){
    pedir_datos();

    Complejo x = suma(z1,z2);

    mostrar(x);

    return 0;
}

void pedir_datos(){
    std::cout<<"Ingrese el primer numero complejo:    ";
    std::cin>>z1.real;
    std::cout<<"Ingrese el primer numero imaginario:  ";
    std::cin>>z1.imaginaria;
    std::cout<<"Ingrese el segundo numero complejo:   ";
    std::cin>>z2.real;
    std::cout<<"Ingrese el segundo numero imaginario: ";
    std::cin>>z2.imaginaria;
}

Complejo suma(Complejo z1, Complejo z2){
    z1.real += z2.real;
    z1.imaginaria += z2.imaginaria;

    return z1;
}
void mostrar(Complejo y){
    std::cout<<"Resultado\n";
    std::cout<<"Parte real:        "<<y.real<<'\n';
    std::cout<<"Parte imaginaria:  "<<y.imaginaria<<'\n';
}