#include <iostream>
#include <conio.h>
using namespace std;

int main(){

    int n,suma=0;

    cout<<"Cuantos numeros seran:  ";
    cin>>n;

    for(int i=0;i<n;i++){
        suma += i;
    }

    cout<<"La suma es:  "<<suma;

    getch();
    return 0;
}