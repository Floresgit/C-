#include <iostream>
using namespace std;

int main(){
    int matriz[100][100];
    int filas,columnas;

    cout<<"Numero de filas:     ";
    cin>>filas;
    cout<<"Numero de columnas:  ";
    cin>>columnas;

    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            cout<<"Ingrese un numero ["<<i<<"]["<<j<<"]: ";
            cin>>matriz[i][j];
        }
    }
    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}