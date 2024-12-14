#include <iostream>
using namespace std;

int main(){
    float nota_a,nota_b,nota_c,nota_d,resultado = 0;

    cout<<"Ingrese la nota del alumno a ";cin>>nota_a;
    cout<<"Ingrese la nota del alumno b ";cin>>nota_b;
    cout<<"Ingrese la nota del alumno c ";cin>>nota_c;
    cout<<"Ingrese la nota del alumno d ";cin>>nota_d;

    resultado = (nota_a + nota_b + nota_c + nota_d)/4;

    cout<<"El promedio final es :"<<resultado;
    return 0;
}