#include <iostream>
#include <time.h>
using namespace std;

int main(){
    int matriz1[20][20];
    int matriz2[20][20];
    int filas,columnas,dato;

    cout<<"Numero de filas:      ";
    cin>>filas;
    cout<<"Numero de columnas:   ";
    cin>>columnas;

    srand(time(NULL));

    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            dato = 1 + rand() % (21);
            matriz1[i][j] = dato;
        }
    }
    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            matriz2[i][j] = matriz1[i][j];
        }
    }
    for(int i=0;i<filas;i++){
        cout<<'\t';
        for(int j=0;j<columnas;j++){
            cout<<matriz2[i][j]<<"\t";
        }
        cout<<endl;
    }

    return 0;
}