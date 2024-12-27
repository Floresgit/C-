#include <iostream>
using namespace std;

int main(){
    int matriz1[100][100];
    int filas,columnas;
    char band='F';

    cout<<"Numero de filas:    ";
    cin>>filas;
    cout<<"Numero de columnas: ";
    cin>>columnas;

    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            cout<<"ingrese un numero ["<<i<<"]["<<j<<"]: ";
            cin>>matriz1[i][j];
        }
    }
    if(filas==columnas){
        for(int i=0;i<filas;i++){
            for(int j=0;j<columnas;j++){
                if(matriz1[i][j]==matriz1[j][i]){
                    band = 'V';
                }
            }
        }
    }
    if(band == 'V'){
        cout<<"La matriz es simetrica.";
    }
    else{
        cout<<"La matriz no es simetrica.";
    }
    return 0;
}