#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char cadena1[] = "Oscar";
    char cadena2[20];

    strcpy(cadena2,cadena1);

    cout<<cadena2;
    return 0;
}