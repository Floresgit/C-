#include <iostream>
using namespace std;

int main(){

    int saldo_inicial = 1000,opc,saldo = 0,ingreso,retiro;

    cout<<"\tBienvenido a tu cajero\n";
    cout<<"Saldo en cuenta:  "<<saldo_inicial<<endl;
    cout<<"1)Ingresar saldo"<<endl;
    cout<<"2)Retirar saldo"<<endl;
    cout<<"3)Salir"<<endl;
    cout<<"Ingrese su opcion:  ";
    cin>>opc;

    switch (opc)
    {
        case 1:
            cout<<"Ingrese el monto a ingresar:  ";
            cin>>ingreso;
            saldo = saldo_inicial + ingreso;
            cout<<"Nuevo saldo:  "<<saldo;
            break;
        case 2:
            cout<<"Ingrese la cantidad a retirar:  ";
            cin>>retiro;
            if(retiro > saldo_inicial){
                cout<<"No cuenta con el saldo suficinte"<<endl;
            }
            else{
                saldo = saldo_inicial - retiro;
                cout<<"Nuevo saldo:  "<<saldo;
            }
        case 3:
            cout<<"Saliedo del cajero";
            break;
    }

    return 0;
}