#include <iostream>
using namespace std;

struct Persona{
    char nombre[20];
    int edad;
};


int main(){
    Persona persona1 = {"oscar",20};
    Persona persona2 = {"manuel",15};
    Persona persona3;

    cout<<"Ingrese el tercer nombre:  ";
    cin.getline(persona3.nombre,20,'\n');
    cout<<"Edad: ";
    cin>>persona3.edad;
    cout<<endl;

    cout<<"Nombre 1: "<<persona1.nombre<<endl;
    cout<<"Edad 1:   "<<persona1.edad<<endl;

    cout<<"Nombre 2: "<<persona2.nombre<<endl;
    cout<<"Edad 2:   "<<persona2.edad<<endl;

    cout<<"Nombre 3: "<<persona3.nombre<<endl;
    cout<<"Edad 3:   "<<persona3.edad<<endl;

    return 0;
}