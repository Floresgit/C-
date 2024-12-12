#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

void pedir_datos();
void mostrar(int **, int,int);
int **puntero_matriz,n_columnas,n_filas;

int main (){
	
	pedir_datos();
	mostrar(puntero_matriz,n_filas,n_columnas);
	
	for(int i=0;i<n_filas;i++){
		delete[] puntero_matriz[i];
	}
	delete[] puntero_matriz;
	
	getch();
	return 0;
}

void pedir_datos(){
	cout<<"Numero de filas:      ";
	cin>>n_filas;
	cout<<"Numero de columnas:   ";
	cin>>n_columnas;
	
	puntero_matriz = new int *[n_filas];
	
	for(int i=0;i<n_filas;i++){
		puntero_matriz[i] = new int [n_columnas];
	}
	cout<<"digita los numeros de la matriz"<<endl;
	for(int i=0;i<n_filas;i++){
		for(int j=0;j<n_columnas;j++){
			cout<<"Ingrese el numero  ["<<i<<"] ["<<j<<"]:   ";
			cin>>*(*(puntero_matriz+i)+j);
		}
	}
}

void mostrar(int **puntero_matriz, int m_filas, int n_columnas){
	cout<<"\n\nMatriz\n";
	for(int i=0;i<n_filas;i++){
		for(int j=0;j<n_columnas;j++){
			cout<<*(*(puntero_matriz+i)+j)<<"\t";
		}
		cout<<endl;
	}
}
