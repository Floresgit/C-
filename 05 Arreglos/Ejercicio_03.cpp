#include <iostream>
using namespace std;

int main(){
    int numeros[10],n;

    cout<<"Numero de elementos del vector:  ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Ingrese un numero:  ";
        cin>>numeros[i];
    }
    cout<<"numeros del vector:"<<endl;
    for(int i=0;i<n;i++){
        cout<<numeros[i]<<"  ";
    }
    return 0;
}