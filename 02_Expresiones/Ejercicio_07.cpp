#include <iostream>
using namespace std;

int main(){

    float nota_practicas,nota_teorica,nota_asistencia,nota_final = 0;

    cout<<"Ingrese su nota de practicas:     ";cin>>nota_practicas;
    cout<<"Ingrese su nota de teoria:        ";cin>>nota_teorica;
    cout<<"Ingrese su nota de asistencia:    ";cin>>nota_asistencia;

    nota_final = (nota_practicas *0.30 ) + (nota_teorica * 0.60) + (nota_asistencia * 0.10);
    
    cout<<"La nota final es: "<<nota_final;
    return 0;
}