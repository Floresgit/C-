/*
Ejercicio 1: Hacer un programa en C++, utilizando Colas que contenga el siguiente menú: 

 1. Insertar un caracter a una cola
 2. Mostrar todos los elementos de la cola
 3. Salir

*/
#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};

void menu();
void insertar(Nodo *&, Nodo *&, char);
bool cola_vacia(Nodo *);
void eliminar(Nodo *&, Nodo *&, char &);

int main (){
	
	menu();
	
	getch();
	return 0;
}

void menu(){
	Nodo *frente = NULL;
	Nodo *fin = NULL;
	
	int opc;
	char dato;
	do{
		cout<<"\tMENU\n";
		cout<<"1) Insertar un caracter a una cola"<<endl;
		cout<<"2) Mostrar todos los elementos de la cola"<<endl;
		cout<<"3) Salir"<<endl;
		cout<<"Digite una opcion:    ";
		cin>>opc;
		
		switch(opc){
			case 1: 
				cout<<"ingrese un caracter:   ";
				cin>>dato;
				insertar(frente,fin,dato);
			break;
			case 2: 
				cout<<"Mostrando los elementos de la cola"<<endl;
				while(frente != NULL){
					eliminar(frente, fin, dato);
					if(frente != NULL){
						cout<<dato<<" , ";
					}
					else{
						cout<<dato<<".";
					}
				}
				cout<<endl<<endl;
				system("pause");
			break;
			case 3: break;
		}
		system("cls");
	}while(opc != 3);
	
}
void insertar(Nodo *&frente, Nodo *&fin, char caracter){
	Nodo *nuevo = new Nodo();
	nuevo->dato = caracter;
	nuevo->siguiente = NULL;
	
	if(cola_vacia(frente)){
		frente = nuevo;
	}
	else{
		fin->siguiente = nuevo;
	}
	fin = nuevo;
}

bool cola_vacia(Nodo *frente){
	return (frente == NULL)? true : false;
}

void eliminar(Nodo *&frente, Nodo *&fin, char &caracter){
	caracter = frente->dato;
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
