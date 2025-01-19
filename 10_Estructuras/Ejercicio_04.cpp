#include <iostream>

struct Atleta{
    std::string nombre;
    std::string pais;
    int numero_medallas;
};

int main(){
    Atleta atletas[100];
    int n,pos, mayor = 0;

    std::cout<<"Cuantos atletas seran?  ";
    std::cin>>n;

    std::cout<<'\n';
    for(int i=0;i<n;i++){
        std::cout<<"Ingrese su nombre:       ";
        std::cin.ignore();
        std::getline(std::cin, atletas[i].nombre);
        std::cout<<"Ingrese su pais:         ";
        std::getline(std::cin, atletas[i].pais);
        std::cout<<"Cuantas medallas tiene:  ";
        std::cin>>atletas[i].numero_medallas;

        if(mayor < atletas[i].numero_medallas){
            mayor = atletas[i].numero_medallas;
            pos = i;
        }
        std::cout<<'\n';
    }

    std::cout<<'\n';
    std::cout<<"Nombre:  "<<atletas[pos].nombre<<std::endl;
    std::cout<<"Pais:    "<<atletas[pos].pais;

    return 0;
}