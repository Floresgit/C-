#include <iostream>
#include <conio.h>

using namespace std;

struct Persona{
	char nombre[30];
	int edad;
};

struct Persona persona;
struct Persona *puntero_persona = &persona;

void pedir_datos();
void mostrar(Persona *);

int main (){
	pedir_datos();
	mostrar(puntero_persona);
	return 0;
}


void pedir_datos(){
	cout<<"Ingrese su nombre:  ";
	cin.getline(puntero_persona->nombre,30,'\n');
	cout<<"Ingrese la edad:  ";
	cin>>puntero_persona->edad;
}

void mostrar(Persona *puntero_persona){
	cout<<"Su nombre es:    "<<puntero_persona->nombre<<endl;
	cout<<"Su edad es:      "<<puntero_persona->edad<<endl;
}

