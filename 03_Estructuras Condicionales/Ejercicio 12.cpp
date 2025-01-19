#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int opc,numero,cubo = 0;

    cout<<"1)Cubo de un numero"<<endl;
    cout<<"2)Numero par o inpar"<<endl;
    cout<<"3)Salir"<<endl;
    cout<<"Ingrese una opcion:  ";
    cin>>opc;

    switch (opc)
    {
    case 1:
        cout<<"Ingrese un numero:  ";
        cin>>numero;
        cubo = pow(numero,3);
        cout<<"el numero '"<<numero<<"' al cubo es:  "<<cubo<<endl;
        break;
    case 2:
        cout<<"Ingrese un numero:  ";
        cin>>numero;
        if(numero == 0){
            cout<<"El numero es 0"<<endl;
        }
        else if(numero %2 == 0){
            cout<<"El numero es par"<<endl;
        }
        else{
            cout<<"El numero es inpar"<<endl;
        }
        break;
    case 3:
        cout<<"Saliedo del programa"<<endl;
        break;
    }

    return 0;
}