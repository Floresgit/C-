#include <iostream>

void intercambio(float *,float *);

int main(){
    float num1= 20.8,num2= 6.78;

    std::cout<<"Primer valor:        "<<num1<<'\n';
    std::cout<<"Segundo valor valor: "<<num2<<'\n';

    intercambio(&num1, &num2);

    std::cout<<"Nuevos valores:\n";
    std::cout<<"Primer valor:        "<<num1<<'\n';
    std::cout<<"Segundo valor valor: "<<num2<<'\n';

    return 0;
}
void intercambio(float *dir_num1,float *dir_num2){
    float aux;
    aux = *dir_num1;
    *dir_num1 = *dir_num2;
    *dir_num2 = aux;
}