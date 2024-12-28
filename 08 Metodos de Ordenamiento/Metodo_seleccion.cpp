#include <iostream>
using namespace std;

int main(){
    int vector[] = {3,2,1,5,4};
    int i,j,auxiliar,minimo;

    for(i=0;i<5;i++){
        minimo = i;
        for(j=i+1;j<5;j++){
            if(vector[j] < vector[minimo]){
                minimo = j;
            }
            auxiliar = vector[i];
            vector[i] = vector[minimo];
            vector[minimo] = auxiliar;
        }
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