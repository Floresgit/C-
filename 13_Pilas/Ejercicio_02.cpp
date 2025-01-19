#include <iostream>
#include <cstdlib>

struct Nodo{
    char dato;
    Nodo *siguiente;
};
void menu();
void agregar(Nodo *&, char);
void eliminar(Nodo *&, char &);

int main(){
    menu();

    return 0;
}
void menu(){
    Nodo *pila = NULL;
    int opc,cont= 0;
    char caracter;

    do{
        std::cout<<"1) Insertar elementos.\n";
        std::cout<<"2) Mostrar elementos.\n";
        std::cout<<"3) Salir.\n";
        std::cout<<"Ingrese una opcion: ";
        std::cin>>opc;

        switch(opc){
            case 1:{
                std::cout<<"Ingrese un caracter:  ";
                std::cin>>caracter;
                agregar(pila,caracter);
                cont++;
            }break;
            case 2:{
                std::cout<<"Mostrando los caracteres"<<std::endl;
                while(pila != NULL){
                    eliminar(pila, caracter);
                    if(pila != NULL){
                        std::cout<<caracter<<" , ";
                    }
                    else{
                        std::cout<<caracter<<".";
                    }
                }
                std::cout<<std::endl;
            }break;
            case 3:{
                std::cout<<"Saliendo del programa"<<std::endl;
            }break;
        }
    }while(opc != 3);
}
void agregar(Nodo *&pila, char dato){
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = dato;
    nuevo_nodo->siguiente = pila;
    pila = nuevo_nodo;
    std::cout<<"El caracter '"<<dato<<"' se agrego correctamente"<<std::endl;
}
void eliminar(Nodo *&pila,char &dato){
    Nodo *aux = pila;
    dato = pila->dato;
    pila = aux->siguiente;
    delete aux;
}