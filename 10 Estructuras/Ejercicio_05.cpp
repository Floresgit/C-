#include <iostream>

struct Promedio{
    float nota1;
    float nota2;
    float nota3;
};

struct Alumno{
    char nombre[20];
    char sexo[15];
    int edad;
    struct Promedio promedio;
};

int main(){
    Alumno alumno;
    float promedio_alumno = 0;

    std::cout<<"Ingrese su nombre:   ";
    std::cin.getline(alumno.nombre,20,'\n');
    std::cout<<"Ingrese su sexo:     ";
    std::cin.getline(alumno.sexo,15,'\n');
    std::cout<<"Ingrese su edad:     ";
    std::cin>>alumno.edad;

    std::cout<<"Notas\n";
    std::cout<<"Nota 1: ";
    std::cin>>alumno.promedio.nota1;
    std::cout<<"Nota 2: ";
    std::cin>>alumno.promedio.nota2;
    std::cout<<"Nota 3: ";
    std::cin>>alumno.promedio.nota3;
    std::cout<<'\n';

    promedio_alumno = (alumno.promedio.nota1 + alumno.promedio.nota2 + alumno.promedio.nota3) / 3;

    std::cout<<"Datos del alumno:\n";
    std::cout<<"Nombre:    "<<alumno.nombre<<std::endl;
    std::cout<<"Sexo:      "<<alumno.sexo<<std::endl;
    std::cout<<"Edad:      "<<alumno.edad<<std::endl;
    std::cout<<"Promedio:  "<<promedio_alumno<<std::endl;

    return 0;
}