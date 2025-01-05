#include <iostream>

void valor_nuevo(int &, int &);

int main(){
    int num1,num2;

    std::cout<<"Ingrese dos numeros:\n";
    std::cin>>num1>>num2;

    valor_nuevo(num1,num2);

    std::cout<<"El nuevo valor del primer numero es:   "<<num1<<std::endl;
    std::cout<<"El nuevo valor del segundo numero es:  "<<num2<<std::endl;

    return 0;
}

void valor_nuevo(int &x, int &y){
    std::cout<<"El valor del primer numero es:   "<<x<<std::endl;
    std::cout<<"El valor del segundo numero es:  "<<y<<std::endl;

    x = 89;
    y = 45;
}