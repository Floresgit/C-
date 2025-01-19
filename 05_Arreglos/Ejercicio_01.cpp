#include <iostream>
using namespace std;

int main(){
    int numero[] = {1,2,3,4,5};
    int suma = 0;

    for(int i=0;i<5;i++){
        suma +=numero[i];
    }
    cout<<"La suma del los vectores es: "<<suma;
    return 0;
}