#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};

void insertar_cola(Nodo *&,Nodo *& ,int);
bool cola_vacia (Nodo *);
void eliminar_cola(Nodo *&,Nodo *&, int &);

int main (){
	Nodo *frente = NULL;
	Nodo *fin = NULL;
	int dato;
	
	cout<<"Ingrese un dato:   ";
	cin>>dato;
	insertar_cola(frente, fin, dato);
	
	cout<<"Ingrese un dato:   ";
	cin>>dato;
	insertar_cola(frente, fin, dato);
	
	cout<<"Ingrese un dato:   ";
	cin>>dato;
	insertar_cola(frente, fin, dato);
	
	cout<<"Eliminando elementos"<<endl;
	
	while(frente != NULL){
		eliminar_cola(frente, fin ,dato);
		if(frente!=NULL){
			cout<<dato<<" , ";
		}
		else{
			cout<<dato<<".";
		}
	}
	
	getch();
	return 0;
}

void insertar_cola(Nodo *&frente,Nodo *&fin ,int n){
	Nodo *nuevo_nodo = new Nodo();
	
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = NULL;
	
	if(cola_vacia(frente)){
		frente = nuevo_nodo;
	}
	else{
		fin->siguiente = nuevo_nodo;
	}
	fin = nuevo_nodo;
	cout<<"Dato "<<n<<" agregado correctamente"<<endl;
}

bool cola_vacia(Nodo *frente){
	return (frente == NULL)? true : false; // if, else
}

void eliminar_cola(Nodo *&frente,Nodo *&fin, int &n){
	n = frente->dato;
	Nodo *aux = frente;
	
	if(frente == fin){
		frente = NULL;
		fin = NULL;
	}
	else{
		frente = frente->siguiente;
	}
	delete aux;
}
