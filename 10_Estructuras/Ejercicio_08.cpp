/*Ejercicio 8: Defina una estructura que sirva para representar a una persona.
La estructura debe contener dos campos:
el nombre de la persona y un valor de tipo lógico que indica si la persona tiene algún tipo de discapacidad.
Realice un programa que dado un vector de personas rellene dos nuevos vectores:
uno que contenga las personas que no tienen ninguna discapacidad y otro que contenga las personas con discapacidad.*/
#include <iostream>
#include <cstring>

struct Persona{
    std::string nombre;
    bool discapacidad;
};

int main(){
    Persona persona[30];
    Persona persona_con[30];
    Persona persona_sin[30];
    int n,j=0,k=0;

    std::cout<<"Cuantas personas seran?  ";
    std::cin>>n;

    for(int i=0;i<n;i++){
        std::cout<<"Nombre:             ";
        std::cin.ignore();
        std::getline(std::cin,persona[i].nombre);
        std::cout<<"Discapacidad 1/0?:  ";
        std::cin>>persona[i].discapacidad;

        if(persona[i].discapacidad == 1){
            persona_con[j].nombre = persona[i].nombre;
            j++;
        }
        else{
            persona_sin[k].nombre = persona[i].nombre;
            k++;
        }
        std::cout<<std::endl;
    }

    std::cout<<"\nPeronas con discapacidad:\n";
    for(int i=0;i<j;i++){
        std::cout<<i+1<<".-"<<persona_con[i].nombre<<"\n";
    }

    std::cout<<"Peronas sin discapacidad discapacidad:\n";
    for(int i=0;i<k;i++){
        std::cout<<i+1<<".-"<<persona_sin[i].nombre<<"\n";
    }

    return 0;
}