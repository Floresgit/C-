#include <iostream>
using namespace std;

int main(){
    int vector[] = {4,2,3,1,5};
    int i,pos,aux;

    for(i=0;i<5;i++){
        pos = i;
        aux = vector[i];
        
        while((pos > 0) && (vector[pos-1] > aux)){
            vector[pos] = vector[pos-1];
            pos--;
        }
        vector[pos] = aux;
    }

    cout<<"Orden acesendete:   ";
    for(i=0;i<5;i++){
        cout<<vector[i]<<" ";
    }

    cout<<"\nOrden decesendete:  ";
    for(i=4;i>=0;i--){
        cout<<vector[i]<<" ";
    }
    return 0;
}