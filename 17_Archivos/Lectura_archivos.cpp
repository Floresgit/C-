#include <iostream>
#include <cstdlib>
#include <fstream>

void leer();

int main(){
    leer();

    return 0;
}
void leer(){
    std::ifstream archivo;
    std::string texto;
    archivo.open("programacion.txt",std::ios::in);

    if(archivo.fail()){
        std::cout<<"No se pudo acceder al archivo\n";
        exit(1);
    }

    while(!archivo.eof()){
        std::getline(archivo,texto);
        std::cout<<texto<<std::endl;
    }
    archivo.close();
}