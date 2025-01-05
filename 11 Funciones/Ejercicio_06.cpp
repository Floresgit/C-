#include <iostream>

template <class T>
T maximo(T, T, T);

int main(){
    char dato1 = 'a',dato2 = 'c', dato3 = 'b';
    char max = maximo(dato1,dato2,dato3);
    std::cout<<"El caracter mayor es:  "<<max;

    return 0;
}

template <class T>
T maximo(T dato1,T dato2, T dato3){
    T mayor;
    if((dato1 > dato2) && (dato1 > dato3)){
        mayor = dato1;
    }
    else if((dato2 > dato1) && (dato2 > dato3)){
        mayor = dato2;
    }
    else{
        mayor = dato3;
    }
    return mayor;
}