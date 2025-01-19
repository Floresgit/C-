#include <iostream>

class Nodo{
    public:
        int dato;
        Nodo *siguiente;
};

void agregar_cola(Nodo *&, Nodo *&, int);
bool cola_vacia(Nodo *);

int main(){
    Nodo *frente = NULL;
    Nodo *fin = NULL;
    int dato;

    std::cout<<"Ingrese un elemento:  ";
    std::cin>>dato;

    agregar_cola(frente, fin, dato);

    return 0;
}

void agregar_cola(Nodo *&frente, Nodo *&fin, int dato){
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = dato;
    nuevo_nodo->siguiente = NULL;

    if(cola_vacia(frente)){
        frente = nuevo_nodo;
    }
    else{
        fin->siguiente = nuevo_nodo;
    }

    fin = nuevo_nodo;

    std::cout<<"Elemento "<<dato<<" insertado correctamente"<<std::endl;
}

bool cola_vacia(Nodo *frente){
    return (frente == NULL )? true : false;
}