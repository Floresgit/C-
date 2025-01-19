/*14. En una clase de 5 alumnos se han realizado tres exámenes y se requiere 
determinar el número de: 
	a) Alumnos que aprobaron todos los exámenes.
	b) Alumnos que aprobaron al menos un examen.
	c) Alumnos que aprobaron únicamente el último examen.
	
Realice un programa que permita la lectura de los datos y el cálculo de las 
estadísticas.
*/
#include <iostream>
#include <conio.h>
#include<locale.h>
using namespace std;

int main(){
    setlocale(LC_CTYPE,"spanish");
    float examen1,examen2,examen3,todos=0,uno=0,ultimo=0;

    
    
    for(int i=1;i<=5;i++){
        cout<<"alumno: "<<i<<endl;
        cout<<"Ingrese la calificacion del primer examen:  ";
        cin>>examen1;
        cout<<"Ingrese la calificacion del segundo examen: ";
        cin>>examen2;
        cout<<"Ingrese la calificacion del tercer examen:  ";
        cin>>examen3;

        if((examen1 >= 6)&&(examen2 >= 6)&&(examen3 >= 6)){
            todos++;
        }
        if((examen1 >= 6)||(examen2 >= 6)||(examen3 >= 6)){
            uno++;
        }
        if(examen3 >= 6){
            ultimo++;
        }
        cout<<endl;
    }

    cout<<"Alumnos que aprobaron todos los examenes:           "<<todos<<endl;
    cout<<"Alumnos que aprobaron al menos un examen:           "<<uno<<endl;
    cout<<"Alumnos que aprobaron unicamente el ultimo examen:  "<<ultimo;

    getch();
    return 0;
}
