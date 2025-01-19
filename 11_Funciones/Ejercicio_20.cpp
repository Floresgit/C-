#include <iostream>

int fibonacci(int );

int main(){
    int elementos;

    do{
        std::cout<<"Cuantos elementos seran?  ";
        std::cin>>elementos;
    }while(elementos <= 0);

    std::cout<<"Serie fibonacci\n";
    for(int i=0;i<elementos;i++){
        std::cout<<fibonacci(i)<<" , ";
    }

    return 0;
}
int fibonacci(int n){
    if(n<2){
        return n;
    }
    else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
}