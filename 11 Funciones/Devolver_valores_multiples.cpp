#include <iostream>

void calucular(int, int, int&, int&);

int main(){
    int numero_1,numero_2;
    int suma=0,producto=0;

    std::cout<<"Ingrese dos numeros:\n";
    std::cin>>numero_1>>numero_2;

    calucular(numero_1,numero_2,suma,producto);

    std::cout<<"Suma:      "<<suma<<std::endl;
    std::cout<<"Producto:  "<<producto<<std::endl;

    return 0;
}

void calucular(int numero_1, int numero_2, int &suma, int &producto){
    suma = numero_1 + numero_2;
    producto = numero_1 * numero_2;
}