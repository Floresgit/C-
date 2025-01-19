#include <iostream>
#include <fstream>
void agregar();

int main(){
    agregar();

}
void agregar(){
    std::ofstream archivo;

    archivo.open("programacion.txt",std::ios::app);

    if(archivo.fail()){
        std::cout<<"No se accedio al archivo";
        exit(1);
    }

    archivo<<"Hola que tal";

    archivo.close();
}