#include <iostream>

void pedir_datos();
void mostrar_datos(int *, int);

int n,*numero;

int main(){
    pedir_datos();


    return 0;
}
void pedir_datos(){
	std::cout<<"Cuantos valores seran en total:   ";
	std::cin>>n;
	numero = new int[n];
	
	for(int i=0;i<n;i++){
		
		std::cout<<"Ingrese un numero:  ";
		std::cin>>*(numero+i);
	}
	
}