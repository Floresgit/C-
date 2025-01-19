/*Ejercicio 13: Hacer un que realice la serie fibonacci
1 1 2 3 5 8 13...n
1 2 3 4 5 6 7....n
*/
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main(){

    int numero,a=0,b=1,c;

    cout<<"Ingrese el numero tope:  ";
    cin>>numero;

    cout<<"1 ";

    for(int i=1;i<numero;i++){
        c = a + b;
        a = b;
        b = c;
        cout<<c<<" ";
    }

    getch();
    return 0;
}