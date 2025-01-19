#include <iostream>

void mostrar_matriz(int [][3], int, int);
void cuadrado(int [][3], int, int);

int main(){
    const int numero_filas = 2;
    const int numero_columnas = 3;
    int matriz[numero_filas][numero_columnas] = {1,2,3 , 4,5,6};

    std::cout<<"Mostrando matriz orignal:\n";
    mostrar_matriz(matriz,numero_filas,numero_columnas);

    cuadrado(matriz,numero_filas,numero_columnas);
    
    std::cout<<"Mostrando matriz elevada:\n";
    mostrar_matriz(matriz,numero_filas,numero_columnas);

    return 0;
}

void mostrar_matriz(int matriz[][3], int numero_filas, int numero_columnas){
    for(int i=0;i<numero_filas;i++){
        for(int j=0;j<numero_columnas;j++){
            std::cout<<matriz[i][j]<<"\t";
        }
        std::cout<<'\n';
    }
}
void cuadrado(int matriz[][3], int numero_filas, int numero_columnas){
    for(int i=0;i<numero_filas;i++){
        for(int j=0;j<numero_columnas;j++){
            matriz[i][j] *= matriz[i][j];
        }
    }
}