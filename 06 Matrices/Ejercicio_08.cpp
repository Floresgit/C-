#include <iostream>
using namespace std;

int main(){
    int matriz1[3][3],matriz2[3][3],matriz3[3][3];

    cout<<"Primera matriz:\n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"ingrese un numero ["<<i<<"]["<<j<<"]: ";
            cin>>matriz1[i][j];
        }
    }
    cout<<"Segunda matriz:\n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"ingrese un numero ["<<i<<"]["<<j<<"]: ";
            cin>>matriz2[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            matriz3[j][i] = matriz1[i][j] * matriz2[j][i];
        }
    }
    cout<<"Resultado de la multiplicacion de la matriz:\n";
    for(int i=0;i<3;i++){
        cout<<'\t';
        for(int j=0;j<3;j++){
            cout<<matriz3[i][j]<<"\t";
        }
        cout<<endl;
    }

    return 0;
}