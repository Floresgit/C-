#include <iostream>
using namespace std;

struct  Info_direccion{
    char direccion[30];
    char ciudad[20];
    char provincia[20];
};

struct Empleado{
    char nombre[20];
    struct Info_direccion dir_empleado;
    double salario;
};

int main(){
    Empleado empleados[2];

    for(int i=0;i<2;i++){
        fflush(stdin);
        cout<<"Ingrese su nombre:     ";
        cin.getline(empleados[i].nombre,20,'\n');
        cout<<"Ingrese su direccion:  ";
        cin.getline(empleados[i].dir_empleado.direccion,30,'\n');
        cout<<"Ingrese la cuidad:     ";
        cin.getline(empleados[i].dir_empleado.ciudad,20,'\n');
        cout<<"Ingrese la provincia:  ";
        cin.getline(empleados[i].dir_empleado.provincia,20,'\n');
        cout<<"Ingrese el salario:    ";
        cin>>empleados[i].salario;
        cout<<'\n';
    }

    for(int i=0;i<2;i++){
        cout<<empleados[i].nombre<<endl;
        cout<<empleados[i].dir_empleado.direccion<<endl;
        cout<<empleados[i].dir_empleado.ciudad<<endl;
        cout<<empleados[i].dir_empleado.provincia<<endl;
        cout<<empleados[i].salario<<endl<<endl;
    }

    return 0;
}