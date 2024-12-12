/*
Ejercicio 11: Hacer una estructura llamada alumno, en la cual se tendrán los siguientes Campos:
Nombre, edad, promedio, pedir datos al usuario para 3 alumnos,
comprobar cuál de los 3 tiene el mejor promedio y posteriormente imprimir los datos del alumno.
NOTA: Usar punteros a estructura
*/
#include <iostream>
#include <conio.h>
using namespace std;

struct Alumno{
	char nombre[30];
	int edad;
	float promedio;
};

struct Alumno alumno[3];
struct Alumno *puntero_alumno = alumno;

void pedir_datos();
void calcular(Alumno *);

int main (){
	
	pedir_datos();
	calcular(puntero_alumno);
	
	return 0;
}

void pedir_datos(){
	for(int i=0;i<3;i++){
		fflush(stdin);
		cout<<"Ingrese su nombre:         ";
		cin.getline((puntero_alumno+i)->nombre,30,'\n');
		cout<<"Ingrese su edad:           ";
		cin>>(puntero_alumno+i)->edad;
		cout<<"Ingrese su calificacion:   ";
		cin>>(puntero_alumno+i)->promedio;
		cout<<endl;
	}
}

void calcular(Alumno *puntero_alumno){
	float mayor = 0.0;
	int posicion=0;
	for(int i=0;i<3;i++){
		if((puntero_alumno+i)->promedio > mayor){
			mayor = (puntero_alumno+i)->promedio;
			posicion = i;
		}
	}
	
	cout<<"El alumno con mejor promedio es:"<<endl;
	cout<<"Nombre:    "<<(puntero_alumno+posicion)->nombre<<endl;
	cout<<"Edad:      "<<(puntero_alumno+posicion)->edad<<endl;
	cout<<"Promedio:  "<<(puntero_alumno+posicion)->promedio<<endl;
}

