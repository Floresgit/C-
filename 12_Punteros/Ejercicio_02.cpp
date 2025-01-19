#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    int numero,*dir_numero,cont= 0;

    cout<<"Ingrese un numero:  ";
    cin>>numero;

    dir_numero = &numero;

    for(int i=1;i<*dir_numero;i++){
        if(*dir_numero %i == 0){
            cont++;
        }
    }

    if(cont > 2){
        cout<<"El numero: "<<*dir_numero<<" No es primo\n";
    }
    else{
        cout<<"El numero: "<<*dir_numero<<" es primo"<<endl;
        cout<<"Direccion de memoria: "<<dir_numero<<endl;
    }
    return 0;
}