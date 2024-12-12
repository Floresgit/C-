/*
Ejercicio 9: Realice un programa que calcule la suma de dos matrices dinámicas.
*/
#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

void pedir_datos();
void sumar_matrices(int **, int **, int, int);
void mostrar(int **, int, int);

int **puntero_matriz1, **puntero_matriz2, n_f, n_c;

int main (){
	pedir_datos();
	sumar_matrices(puntero_matriz1,puntero_matriz2,n_f,n_c);
	mostrar(puntero_matriz1, n_f, n_c);
	
	for(int i=0;i<n_f;i++){
		delete[] puntero_matriz1[i];
		delete[] puntero_matriz2[i];
	}
	delete[] puntero_matriz1;
	delete[] puntero_matriz2;
	
	return 0;
}

void pedir_datos(){
	cout<<"Numero de filas:     ";
	cin>>n_f;
	cout<<"Numero de columnas:  ";
	cin>>n_c;
	
	//primera matriz
	puntero_matriz1 = new int *[n_f];
	for(int i=0;i<n_f;i++){
		puntero_matriz1[i] = new int [n_c];
	}
	cout<<"Ingrese los elementos de la primera matriz;"<<endl;
	for(int i=0;i<n_f;i++){
		for(int j=0;j<n_c;j++){
			cout<<"Ingrese el dato ["<<i<<"] ["<<j<<"]:  ";
			cin>>*(*(puntero_matriz1+i)+j);
		}
	}
	//segunda matriz
	puntero_matriz2 = new int *[n_f];
	for(int i=0;i<n_f;i++){
		puntero_matriz2[i] = new int [n_c];
	}	
	cout<<"Ingrese los elementos de la segunda matriz;"<<endl;
	for(int i=0;i<n_f;i++){
		for(int j=0;j<n_c;j++){
			cout<<"Ingrese el dato ["<<i<<"] ["<<j<<"]:  ";
			cin>>*(*(puntero_matriz2+i)+j);
		}
	}
}

void sumar_matrices(int **puntero_matriz1, int **puntero_matriz2, int n_f, int n_c){
	for(int i=0;i<n_f;i++){
		for(int j=0;j<n_c;j++){
			*(*(puntero_matriz1+i)+j) += *(*(puntero_matriz2+i)+j);
		}
	}
}

void mostrar(int **puntero_matriz1, int n_f, int n_c){
	cout<<"La suma de las matrices es:"<<endl;
	for(int i=0;i<n_f;i++){
		for(int j=0;j<n_c;j++){
			cout<<*(*(puntero_matriz1+i)+j)<<"\t";
		}
		cout<<endl;
	}	
	
}
