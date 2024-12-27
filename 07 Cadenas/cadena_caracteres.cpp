#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char palabra1[] = "Oscar";
    char palabra2[] = {'o','s','c','a','r','\0'};
    char nombre[20];

    cout<<"Ingrese su nombre:  ";
    cin.getline(nombre,20,'\n');

    cout<<palabra1<<endl;
    cout<<palabra2<<endl;
    cout<<nombre<<endl;
    return 0;
}