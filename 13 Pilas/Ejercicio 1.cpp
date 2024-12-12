#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};

void agregar(Nodo *&, int);
void eliminar(Nodo *&, int &);

int main (){
	Nodo *pila = NULL;
	
	int dato=0;
	char opc;
	
	do{
		cout<<"Digita un numero:              ";
		cin>>dato;
		agregar(pila,dato);
		cout<<"Desea agregar otro dato?(S/N)  ";
		cin>>opc;
	}while((opc== 'S') || (opc == 's'));
	
	cout<<"Eliminando elementos de la pila"<<endl;
	while(pila != NULL){
		eliminar(pila, dato);
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

void agregar(Nodo *&pila, int n){
	Nodo *nuevo = new Nodo();
	nuevo->dato = n;
	nuevo->siguiente = pila;
	pila = nuevo;
	cout<<"Dato: "<<n<<" agregado"<<endl;
}

void eliminar(Nodo *& pila, int & n){
	Nodo *aux = pila;
	n = aux->dato;
	pila = aux->siguiente;
	delete aux;
}


