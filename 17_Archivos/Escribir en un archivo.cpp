#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <fstream>
using namespace std;

void escribir();

int main (){
	
	escribir();
	
	getch();
	return 0;
}

void escribir(){
	ofstream archivo;			//int variable;
	string nombre, frase;
	
	cout<<"Nombre del archivo:    ";
	getline(cin,nombre);
	archivo.open(nombre.c_str(), ios::out);	//abriendo el archivo
	//abriendo el archivo  archivo.open("C:/Users/oscar/OneDrive/Desktop/C++/Curso programacion ATS/17 Archivos/prueba2.txt", ios::out);
	//Abriendo el archivo  archivo.open("prueba1.txt", ios::out);
	
	if(archivo.fail()){
		cout<<"No se puede abrir el archivo";
		exit(1);
	}
	
	cout<<"\nIngresa el texto\n";
	getline(cin,frase);
	
	archivo<<frase;
	
	// rellenando el archivo archivo<<"Hola que tal";
	archivo.close();							//cerrando el archivo
}
