#include <iostream>

struct Empleados{
    char nombre[20];
    float salario;
};

int main(){
    Empleados empleados[100];
    int n,posicion_mayor, posicion_menor;
    float mayor = 0, menor = 9999;

    std::cout<<"Cuantos empleados seran?  ";
    std::cin>>n;

    for(int i=0;i<n;i++){
        std::cout<<"Ingrese su nombre:   ";
        std::cin.ignore();
        std::cin.getline(empleados[i].nombre,20,'\n');
        std::cout<<"Ingrese su salario:  ";
        std::cin>>empleados[i].salario;

        if(empleados[i].salario > mayor){
            mayor = empleados[i].salario;
            posicion_mayor = i;
        }
        if(empleados[i].salario < menor){
            menor = empleados[i].salario;
            posicion_menor = i;
        }
        std::cout<<'\n';
    }

    std::cout<<std::endl;
    std::cout<<"Empleado con mayor salario:"<<std::endl;
    std::cout<<"Nombre:    "<<empleados[posicion_mayor].nombre<<std::endl;
    std::cout<<"Salario:   "<<empleados[posicion_mayor].salario<<std::endl;
    std::cout<<std::endl;
    std::cout<<"Empleado con menor salario:"<<std::endl;
    std::cout<<"Nombre:    "<<empleados[posicion_menor].nombre<<std::endl;
    std::cout<<"Salario:   "<<empleados[posicion_menor].salario<<std::endl;

    return 0;
}