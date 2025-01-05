#include <iostream>

int factorial(int );

int main(){
    std::cout<<"El factorial es "<<factorial(5);

    return 0;
}

int factorial(int n){
    if(n == 0){
        n = 1;
    }
    else{
        n = n * factorial(n-1);
    }
    return n;
}