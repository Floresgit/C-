#include <iostream>
#include <cstring>

struct Alumno{
    std::string nombre;
    int edad;
    float promedio;
};

int main(){
    Alumno alumno[3];
    int mayor = 0, pos;

    for(int i=0;i<3;i++){
        std::cout<<"Alumno "<<i+1<<std::endl;
        
        std::cout<<"Ingrese su nombre:    ";
        std::cin.ignore();
        std::getline(std::cin, alumno[i].nombre);
        std::cout<<"Ingrese su edad:      ";
        std::cin>>alumno[i].edad;
        std::cout<<"Ingrese su promedio:  ";
        std::cin>>alumno[i].promedio;
        std::cout<<'\n';

        if(mayor < alumno[i].promedio){
            mayor = alumno[i].promedio;
            pos = i;
        }
    }

    std::cout<<"El alumno con mayor puntaje es el "<<pos<<std::endl;
    std::cout<<"Nombre:   "<<alumno[pos].nombre<<std::endl;
    std::cout<<"Edad:     "<<alumno[pos].edad<<std::endl;
    std::cout<<"Promedio: "<<alumno[pos].promedio;


    return 0;
}