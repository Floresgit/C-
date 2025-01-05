#include <iostream>

void pedir_datos();
void simetrica( int [][100], int, int);

int matriz [100][100],numero_filas,numero_columnas;

int main(){
    pedir_datos();
    simetrica(matriz,numero_filas,numero_columnas);

    return 0;
}

void pedir_datos(){
    std::cout<<"Numero de filas?     ";
    std::cin>>numero_filas;
    std::cout<<"Numero de columnas?  ";
    std::cin>>numero_columnas;

    for(int i=0;i<numero_filas;i++){
        for(int j=0;j<numero_columnas;j++){
            std::cout<<"Ingrese el numero ["<<i<<"]["<<j<<"]: ";
            std::cin>>matriz[i][j];
        }
    }
}

void simetrica( int matriz[][100], int numero_filas, int numero_columnas){
    char band = 'V';
    if(numero_filas == numero_columnas){
        for(int i=0;i<numero_filas;i++){
            for(int j=0;j<numero_columnas;j++){
                if(matriz[i][j] != matriz[j][i]){
                    band = 'F';
                    break;
                }
            }
        }
    }
    else{
        band = 'F';
    }

    if(band == 'V'){
        std::cout<<"La matriz es simetrica\n";
    }
    else{
        std::cout<<"La matriz NO es simetrica\n";
    }
}

void mostrar_matriz(int matriz[][3], int numero_filas, int numero_columnas){
    for(int i=0;i<numero_filas;i++){
        for(int j=0;j<numero_columnas;j++){
            std::cout<<matriz[i][j]<<"\t";
        }
        std::cout<<'\n';
    }
}