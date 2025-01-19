#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};

void agregar_pila(Nodo *&, int);
void quitar_pila(Nodo *&, int &);

int main (){
	Nodo *pila = NULL;
	int dato;
	
	cout<<"Ingrese un numero:  ";
	cin>>dato;
	agregar_pila(pila,dato);
	
	cout<<"Ingrese un numero:  ";
	cin>>dato;
	agregar_pila(pila,dato);	
	
	cout<<"Eliminando datos"<<endl;
	while(pila != NULL){
		quitar_pila(pila,dato);
		if(pila!=NULL){
			cout<<dato<<" , ";
		}
		else{
			cout<<dato<<".";
		}
	}
	
	getch();
	return 0;
}

void agregar_pila(Nodo *&pila, int n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = pila;
	pila = nuevo_nodo;
	
	cout<<"Elemento "<<n<<" agregado"<<endl;
}

void quitar_pila(Nodo *&pila, int &n){
	Nodo *aux = pila;
	n = aux->dato;
	pila = aux->siguiente;
	delete aux;
}
