#include <iostream>

template <class TIPOD>
void despliegue(TIPOD);

int main(){
    int dato1 = 4;
    float dato2 = 12.34;
    double dato3 = 123.45678;
    char dato4 = 'a';

    despliegue(dato1);
    despliegue(dato2);
    despliegue(dato3);
    despliegue(dato4);

    return 0;
}

template <class TIPOD>
void despliegue(TIPOD dato){
    std::cout<<"El dato es:  "<<dato<<'\n';
}