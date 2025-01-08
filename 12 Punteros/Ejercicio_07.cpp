/*
Ejercicio 7: Pedir su nombre al usuario y devolver el número de vocales que hay. 
NOTA: Recuerda que debes utilizar punteros.
*/

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

void pedir_datos();
int contar(char *);
void mostrar(int);

char nombre[20];

int main(){
	int vocales;
	
	pedir_datos();
	vocales = contar(nombre);
	mostrar(vocales);
	
	getch();
	return 0;
}

void pedir_datos(){
	cout<<"Ingrese su nombre:   ";
	cin.getline(nombre,20,'\n');
	strupr(nombre);
}

int contar(char *nombre){
	int contador=0;
	for(int i=0;nombre[i]!='\0';i++){
		if( *(nombre+i) == 'A' || *(nombre+i) == 'E' || *(nombre+i) == 'I' || *(nombre+i) == 'O' || *(nombre+i) == 'U' ) {
			contador++;
		}
	}
	return contador;
}

void mostrar(int vocales){
	cout<<"El numero de vocales en el nombre es:"<<endl;
	cout<<vocales;
}
