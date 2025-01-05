#include <iostream>

void cambio(int, int &, int &, int &, int &, int &, int &);

int main(){
    int dolares,cien= 0,cincuenta= 0,veinte= 0,diez= 0,cinco= 0,uno= 0;

    std::cout<<"Ingrese sus dolares: ";
    std::cin>>dolares;

    cambio(dolares,cien,cincuenta,veinte,diez,cinco,uno);

    std::cout<<"Cambio a efectivo:"<<std::endl;
    std::cout<<"Cien:       "<<cien<<std::endl;
    std::cout<<"Cincuenta:  "<<cincuenta<<std::endl;
    std::cout<<"Veinte:     "<<veinte<<std::endl;
    std::cout<<"Diez:       "<<diez<<std::endl;
    std::cout<<"Cinco:      "<<cinco<<std::endl;
    std::cout<<"Uno:        "<<uno<<std::endl;

    return 0;
}

void cambio(int dolares, int &cien, int &cincuenta, int &veinte, int &diez, int &cinco, int &uno){
    cien = dolares / 100;
    dolares %= 100;

    cincuenta = dolares / 50;
    dolares %= 50;

    veinte = dolares / 20;
    dolares %= 20;

    diez = dolares / 10;
    dolares %= 10;

    cinco = dolares / 5;
    dolares %= 5;

    uno = dolares;
}