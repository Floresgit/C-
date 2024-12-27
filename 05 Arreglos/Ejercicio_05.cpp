#include <iostream>
using namespace std;

int main(){
    int n,numeros[10],mayor=0;

    cout<<"Numero de elementos del vector:  ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<i+1<<") Ingrese un numero:  ";
        cin>>numeros[i];
        if(numeros[i] > mayor){
            mayor = numeros[i];
        }
    }
    cout<<"El numero mayor es: "<<mayor;
    return 0;
}