#include <iostream>

struct Etapas{
    int horas,minutos,segundos;
};

int main(){
    Etapas etapas[100];
    int n,total_horas=0,total_minutos=0,total_segundos=0;


    std::cout<<"Ingrese el numero de etapas:  ";
    std::cin>>n;

    for(int i=0;i<n;i++){
        std::cout<<"Etapa "<<i+1<<'\n';
        std::cout<<"Horas:     ";
        std::cin>>etapas[i].horas;
        std::cout<<"Minutos:   ";
        std::cin>>etapas[i].minutos;
        std::cout<<"Segundos:  ";
        std::cin>>etapas[i].segundos;

        total_horas += etapas[i].horas;
        total_minutos += etapas[i].minutos;
        if(total_minutos >= 60){
            total_minutos -=60;
            total_horas ++;
        }
        total_segundos += etapas[i].segundos;
        if(total_segundos >= 60){
            total_segundos -=60;
            total_minutos ++;
        }
        std::cout<<'\n';
    }

    std::cout<<"Tiempo total empleado en la carrera es:\n";
    std::cout<<"Horas:       "<<total_horas<<std::endl;
    std::cout<<"Minutos:     "<<total_minutos<<std::endl;
    std::cout<<"Segundos:    "<<total_segundos<<std::endl;
    return 0;
}