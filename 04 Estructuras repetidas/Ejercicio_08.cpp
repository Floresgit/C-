#include <iostream>
#include <conio.h>
using namespace std;

int main(){

    int n,suma=0;

    cout<<"Cuantos numeros seran:  ";
    cin>>n;
    n = (n * 2)-1;
    for(int i=1;i<=n;i+=2){
        suma += i;
        cout<<i<<endl;
    }

    cout<<"La suma es:  "<<suma;

    getch();
    return 0;
}