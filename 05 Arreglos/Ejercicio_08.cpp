#include <iostream>
using namespace std;

int main(){
    int vector1[5],vector2[5];

    for(int i=0;i<5;i++){
        cout<<i+1<<") Ingrese un numero:  ";
        cin>>vector1[i];
    }
    for(int i=0;i<5;i++){
        vector2[i] = vector1[i] * 2;
    }
    for(int i=0;i<5;i++){
        cout<<vector2[i]<<" ";
    }
    return 0;
}