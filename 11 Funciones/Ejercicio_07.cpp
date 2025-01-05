#include <iostream>

void intercambiar(int &,int &);

int main(){
    int numero_1= 10,numero_2= 15;

    std::cout<<"El primer valor es:  "<<numero_1<<std::endl;
    std::cout<<"El segundo valor es: "<<numero_2<<std::endl;

    intercambiar(numero_1,numero_2);

    std::cout<<"\nEl primer valor nuevo es:   "<<numero_1<<std::endl;
    std::cout<<"El segundo valor nuevo es:  "<<numero_2<<std::endl;

    return 0;
}

void intercambiar(int &x,int &y){
    int aux;
    aux = x;
    x = y;
    y = aux;
}