#include <iostream>
#include <math.h>
using namespace std;

int main (){

    float a,b,c;
    float resultado1 = 0, resultado2 = 0;

    cout<<"Ingrese el valor de a: ";cin>>a;
    cout<<"Ingrese el valor de b: ";cin>>b;
    cout<<"Ingrese el valor de c: ";cin>>c;

    resultado1 = (-b + sqrt(pow(b,2) - (4 * a * c))) / (2 * a);
    resultado2 = (-b - sqrt(pow(b,2) - (4 * a * c))) / (2 * a);

    cout<<"El resultado 1 es:  "<<resultado1<<'\n';
    cout<<"El resultado 2 es:  "<<resultado2;

    return 0;
}