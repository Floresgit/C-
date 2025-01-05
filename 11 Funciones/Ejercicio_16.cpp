#include <iostream>

void pedir_datos();
void funcion(int [][100],int,int);
void mostrar_matriz(int [][100], int, int);

int matriz[100][100],numero_filas,numero_columnas,fila;

int main(){
    pedir_datos();
    mostrar_matriz(matriz,numero_filas,numero_columnas);
    funcion(matriz,numero_columnas,fila);

    return 0;
}

void pedir_datos(){
    std::cout<<"Numero de filas?     ";
    std::cin>>numero_filas;
    std::cout<<"Numero de columnas?  ";
    std::cin>>numero_columnas;
    std::cout<<"Cual fila se mostrara: ";
    std::cin>>fila;

    for(int i=0;i<numero_filas;i++){
        for(int j=0;j<numero_columnas;j++){
            std::cout<<"Ingrese el numero ["<<i<<"]["<<j<<"]: ";
            std::cin>>matriz[i][j];
        }
    }
}

void funcion(int matriz[][100],int numero_columnas,int fila){
    std::cout<<"\n";
    for(int i=0;i<numero_columnas;i++){
        std::cout<<matriz[fila][i]<<"  ";
    }
}

void mostrar_matriz(int matriz[][100], int numero_filas, int numero_columnas){
    for(int i=0;i<numero_filas;i++){
        for(int j=0;j<numero_columnas;j++){
            std::cout<<matriz[i][j]<<"\t";
        }
        std::cout<<'\n';
    }
}