#include <iostream>

int escribe_numeros(int, int);

int main(){
    int inicio,fin;
    std::cout<<"Escriba el inicio:  ";
    std::cin>>inicio;
    std::cout<<"Escriba el fin:     ";
    std::cin>>fin;

    for(int i=inicio;i<=fin;i++){
        std::cout<<escribe_numeros(i,fin)<<"  ";
    }

    return 0;
}
int escribe_numeros(int inicio, int fin){
    if(inicio == fin){
        return inicio;
    }
    else{
        return escribe_numeros(inicio, fin-1);
    }
}