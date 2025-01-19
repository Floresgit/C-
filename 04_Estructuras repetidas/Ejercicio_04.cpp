#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    
    float temperatura,hora = 4,suma = 0,media,alta,baja;

    cout<<"son las "<<hora<<" horas"<<endl;
    cout<<"Ingrese la temperatura:  ";
    cin>>temperatura;

    alta = temperatura;
    baja = temperatura;
    hora += 4;
    suma += temperatura;

    cout<<'\n';

    for(int i=0;i<5;i++){

        cout<<"son las "<<hora<<" horas"<<endl;
        cout<<"Ingrese la temperatura:  ";
        cin>>temperatura;
        hora += 4;
        cout<<endl;

        if(temperatura > alta){
            alta = temperatura;
        }
        if(temperatura < baja){
            baja = temperatura;
        }
        suma += temperatura;
    }
    media = suma / 6;

    cout<<"La temperatura media es:  "<<media<<endl;
    cout<<"La temperatura mas baja fue:  "<<baja<<endl;
    cout<<"La temperatura mas alta fue:  "<<alta;

    getch();
    return 0;
}