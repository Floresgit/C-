#include <iostream>

int encotrar_mayor(int ,int);

int main(){
    int n1, n2;
    int mayor;

    std::cout<<"Ingrese dos numeros:\n";
    std::cin>>n1>>n2;

    mayor = encotrar_mayor(n1,n2);

    std::cout<<"El mayor de dos numeros es:  "<<mayor;

    return 0;
}

int encotrar_mayor(int x,int y){
    int numero_mayor;

    if(x > y){
        numero_mayor = x;
    }
    else{
        numero_mayor = y;
    }
    return numero_mayor;
}