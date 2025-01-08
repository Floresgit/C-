#include <iostream>

int main(){
    int num, *dir_num;

    num = 20;
    dir_num = &num;

    std::cout<<"Numero:   "<<*dir_num<<std::endl;
    std::cout<<"Direccion de memoria:  "<<dir_num<<std::endl;

    return 0;
}