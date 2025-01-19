#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};

void agregar_pila(Nodo *&, int);

int main (){
	Nodo *pila = NULL;
	int n1, n2;
	cout<<"Ingrese un numero:  ";
	cin>>n1;
	agregar_pila(pila,n1);

	cout<<"Ingrese un numero:  ";
	cin>>n2;
	agregar_pila(pila,n2);	
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
