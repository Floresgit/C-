#include <iostream>
using namespace std;

int main(){

    int n1,n2,n3,n4;

    cout<<"Ingrese el numero 1:  ";
    cin>>n1;
    cout<<"Ingrese el numero 2:  ";
    cin>>n2;
    cout<<"Ingrese el numero 3:  ";
    cin>>n3;
    cout<<"Ingrese el numero 4:  ";
    cin>>n4;

    if(n4 == n1){
        cout<<"El cuarto numero es igual al numero 1  "<<n1;
    }
    else if(n4 == n2){
        cout<<"El cuarto numero es igual al numero 2  "<<n2;
    }
    else if(n4 == n3){
        cout<<"El cuarto numero es igual al numero 3  "<<n3;
    }
    else{
        cout<<"El numero 4 no es igual a ningun numero";
    }
    return 0;
}