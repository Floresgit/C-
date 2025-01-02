#include <iostream>
#include <string.h>
//using namespace std;

struct Corredor {
    char nombre[20];
    int edad;
    char sexo[10];
    char club[10];
};

int main(){
    Corredor corredor;
    char categoria[10];

    std::cout<<"ingrese el nombre:  ";
    std::cin.getline(corredor.nombre,20,'\n');
    std::cout<<"Ingrese la edad:    ";
    std::cin>>corredor.edad;
    std::cin.ignore();
    std::cout<<"Ingrese el sexo:    ";
    std::cin.getline(corredor.sexo,10,'\n');
    std::cout<<"Ingrese su club:    ";
    std::cin.getline(corredor.club,20,'\n');

    if(corredor.edad <= 18){
        strcpy(categoria,"Juvenil");
    }

    else if(corredor.edad <= 40){
        strcpy(categoria,"Senior");
    }

    else{
        strcpy(categoria,"Veterano");
    }

    std::cout<<"Datos del corredor:"<<std::endl;

    std::cout<<"Nombre:     "<<corredor.nombre<<std::endl;
    std::cout<<"Edad:       "<<corredor.edad<<std::endl;
    std::cout<<"Sexo:       "<<corredor.sexo<<std::endl;
    std::cout<<"club:       "<<corredor.club<<std::endl;
    std::cout<<"Categoria:  "<<categoria;


    return 0;
}