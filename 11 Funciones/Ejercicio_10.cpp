#include <iostream>

void calculo_anios(int, int &, int &, int &);

int main(){
    int dias_totales,anios= 0,meses= 0,dias= 0;

    std::cout<<"Ingrese el total de dias:   ";
    std::cin>>dias_totales;

    calculo_anios(dias_totales,anios,meses,dias);

    return 0;
}
void calculo_anios(int dias_totales, int &anio, int &mes, int &dias){
    for(int i=0;dias_totales > 365;i++){
        dias_totales -= 365;
        anio++;
    }
    for(int i=0;dias_totales > 30;i++){
        dias_totales -= 30;
        mes++;
    }
    dias = dias_totales;

    std::cout<<"Datos:"<<std::endl;
    std::cout<<"Anios:  "<<anio<<std::endl;
    std::cout<<"Meses:  "<<mes<<std::endl;
    std::cout<<"Dias:   "<<dias<<std::endl;
    std::cout<<"La fecha es: "<<dias<<"/"<<mes<<"/"<<anio+2000<<'\n';
}