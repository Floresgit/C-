#include <iostream>

int elevacion(int ,int );

int main(){
    int base,exponente;
    std::cout<<"Ingrese la base:       ";
    std::cin>>base;
    std::cout<<"Ingrese el exponente:  ";
    std::cin>>exponente;

    std::cout<<"\nPotencia de "<<base<<" elevado a "<<exponente<<" es: "<<elevacion(base,exponente);

    return 0;
}
int elevacion(int x,int y){
    int pot;
    if(y == 1){
        pot = x;
    }
    else{
        pot = x * elevacion(x,y-1);
    }
    return pot;
}