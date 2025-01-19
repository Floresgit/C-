/*Ejercicio 9: Escriba una función nombrada tiempo()
que tenga un parámetro en número entero llamado totalSeg y tres parámetros de referencia
enteros nombrados horas, min y seg. La función es convertir el número de segundos transmitido
en un número equivalente de horas, minutos y segundos.*/
#include <iostream>

void tiempo(int, int &, int &, int &);

int main(){
    int total_segundos,horas= 0,minutos= 0,segundos= 0;
    std::cout<<"Ingrese el total de segundos:  ";
    std::cin>>total_segundos;

    tiempo(total_segundos,horas,minutos,segundos);
    return 0;
}

void tiempo(int total_segundos, int &horas, int &minutos, int &segundos){
    for(int i=0;total_segundos > 3600;i++){
        total_segundos -= 3600;
        horas++;
    }
    for(int i=0;total_segundos > 60;i++){
        total_segundos -=60;
        minutos++;
    }
    segundos = total_segundos;
        
    std::cout<<"Tiempo convertido:"<<std::endl;
    std::cout<<"Horas:     "<<horas<<std::endl;
    std::cout<<"Minutos:   "<<minutos<<std::endl;
    std::cout<<"Segundos:  "<<segundos<<std::endl;
}