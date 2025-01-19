/*Ejercicio 2: Escribe un programa que lea de la entrada estándar el precio de un producto y
muestre en la salida estándar el precio del producto al aplicarle el IVA.*/
#include <iostream>
using namespace std;

int main()
{
    float presio,iva,calculo =0;

    cout<<"Ingrese el presio del producto   ";cin>>presio;
    cout<<"Ingrese el porcentaje del IVA:  ";cin>>iva;
    calculo = presio * (iva/100);
    presio += calculo;

    cout<<"El presio final es:  "<<presio;
    return 0;
}
