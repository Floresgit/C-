#include <iostream>
using namespace std;

int main(){
    char arreglo1[] = {'a','b','c','d','e'};
    char arreglo2[] = {'f','g','h','i','j'};
    char arreglo3[10];

    for(int i=0;i<5;i++){
        arreglo3[i] = arreglo1[i];
    }
    for(int i=5;i<10;i++){
        arreglo3[i] = arreglo2[i-5];
    }
    for(int i=0;i<10;i++){
        cout<<arreglo3[i]<<" ";
    }

    return 0;
}