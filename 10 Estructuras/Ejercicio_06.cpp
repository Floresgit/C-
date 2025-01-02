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
    Alumno alumno[3];
    float promedio_alumno,mayor = 0.0;
    int pos = 0;

    for(int i=0;i<3;i++){

        std::cout<<"Alumno "<<i+1<<":\n";
        std::cout<<"Ingrese su nombre:   ";
        if (i > 0) std::cin.ignore();
        std::cin.getline(alumno[i].nombre,20,'\n');
        std::cout<<"Ingrese su sexo:     ";
        std::cin.getline(alumno[i].sexo,15,'\n');
        std::cout<<"Ingrese su edad:     ";
        std::cin>>alumno[i].edad;

        std::cout<<"Notas\n";
        std::cout<<"Nota 1: ";
        std::cin>>alumno[i].promedio.nota1;
        std::cout<<"Nota 2: ";
        std::cin>>alumno[i].promedio.nota2;
        std::cout<<"Nota 3: ";
        std::cin>>alumno[i].promedio.nota3;
        std::cout<<'\n';
        
        promedio_alumno = (alumno[i].promedio.nota1 + alumno[i].promedio.nota2 + alumno[i].promedio.nota3) / 3;
        if(mayor < promedio_alumno){
            mayor = promedio_alumno;
            pos = i;
        }
    }

    std::cout<<"Datos del alumno:\n";
    std::cout<<"Nombre:    "<<alumno[pos].nombre<<std::endl;
    std::cout<<"Sexo:      "<<alumno[pos].sexo<<std::endl;
    std::cout<<"Edad:      "<<alumno[pos].edad<<std::endl;
    std::cout<<"Promedio:  "<<mayor<<std::endl;

    return 0;
}