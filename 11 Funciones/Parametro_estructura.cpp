#include <iostream>

struct Persona{
    char nombre[30];
    int edad;
}persona1;

void pedir_datos();
void mostrar(Persona);

int main(){
    pedir_datos();
    mostrar(persona1);

    return 0;
}
void pedir_datos(){
    std::cout<<"Ingrese su nombre:  ";
    std::cin.getline(persona1.nombre,30,'\n');
    std::cout<<"Ingrese su edad:    ";
    std::cin>>persona1.edad;
}
void mostrar(Persona p){
    std::cout<<"\nNombre:  "<<p.nombre<<'\n';
    std::cout<<"Edad:    "<<p.edad<<'\n';
}