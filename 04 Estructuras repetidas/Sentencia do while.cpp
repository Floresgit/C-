#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){

    int i = 1;

    do{
        cout<<i<<endl;
        i++;
    }while(i <= 10);
    cout<<"----------------\n";
    int j = 10;

    do{
        cout<<j<<endl;
        j--;
    }while(j >= 1);
    
    system("pause");
    return 0;
}