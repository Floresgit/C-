#include <iostream>
#include <conio.h>
using namespace std;

int main(){

    int numero,contador = 0;

    do{
        cout<<"Ingrese un numero:  ";
        cin>>numero;
        contador++;
    }while(numero != 0);

    cout<<"Intentos realizados: "<<contador;
    getch();
    return 0;
}