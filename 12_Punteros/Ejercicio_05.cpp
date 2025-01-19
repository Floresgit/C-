/*
 Pedir al usuario N numeros, almacenarlos en un arreglo din�mico posteriormente ordenar los n�meros en orden ascendente y mostrarlos en pantalla. 
NOTA: Utilizar cualquier m�todo de ordenamiento.
*/
#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

void pedir_datos();
void ordenar_datos(int *, int);
void mostrar_datos(int *, int);

int n, *numero;

int main(){
	
	pedir_datos();
	ordenar_datos(numero,n);
	mostrar_datos(numero,n);
	
	delete[] numero;
	
	getch();
	return 0;
}

void pedir_datos(){
	cout<<"Cuantos valores seran en total:   ";
	cin>>n;
	numero = new int[n];
	
	for(int i=0;i<n;i++){
		
		cout<<"Ingrese un numero:  ";
		cin>>*(numero+i);
	}
	
}

void ordenar_datos(int *numero, int n){
	int aux;
	
	for(int i=0;i<n;i++){
		for (int j=0;j<n-1;j++){
			if(*(numero+j) > *(numero+j+1)){
				aux = *(numero+j);
				*(numero+j) = *(numero+j+1);
				*(numero+j+1) = aux;
			}
		}
	}
	
}

void mostrar_datos(int *numero, int n){
	cout<<"Los numeros son:"<<endl;
	
	for(int i=0;i<n;i++){
		cout<<*(numero+i)<<"\t";
	}
	
}

