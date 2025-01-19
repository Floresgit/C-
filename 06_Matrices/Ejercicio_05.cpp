#include <iostream>
#include <time.h>
using namespace std;

int main(){
    int matriz1[3][3];
    int matriz2[3][3];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"Ingrese un numero ["<<i<<"]["<<j<<"] ";
            cin>>matriz1[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            matriz2[j][i] = matriz1[i][j];
        }
    }
    cout<<"matriz original:\n";
    for(int i=0;i<3;i++){
        cout<<'\t';
        for(int j=0;j<3;j++){
            cout<<matriz1[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"Matriz transpuesta:\n";
    for(int i=0;i<3;i++){
        cout<<'\t';
        for(int j=0;j<3;j++){
            cout<<matriz2[i][j]<<"\t";
        }
        cout<<endl;
    }

    return 0;
}