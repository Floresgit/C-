#include <iostream>

struct Fecha{
    int anio,mes,dia;
}fecha_1,fecha_2;

void pedir_datos();
Fecha calcular(Fecha, Fecha);
void mostrar(Fecha);

int main(){
    pedir_datos();
    Fecha x = calcular(fecha_1,fecha_2);
    mostrar(x);

    return 0;
}

void pedir_datos(){
    std::cout<<"Primera fecha:\n";
    std::cout<<"Anio: ";
    std::cin>>fecha_1.anio;
    std::cout<<"mes:  ";
    std::cin>>fecha_1.mes;
    std::cout<<"dia:  ";
    std::cin>>fecha_1.dia;
    std::cout<<"Segunda fecha:\n";
    std::cout<<"Anio: ";
    std::cin>>fecha_2.anio;
    std::cout<<"mes:  ";
    std::cin>>fecha_2.mes;
    std::cout<<"dia:  ";
    std::cin>>fecha_2.dia;
}

Fecha calcular(Fecha fecha_1, Fecha fecha_2){
    Fecha fecha_mayor;
    if(fecha_1.anio == fecha_2.anio){
        if(fecha_1.mes == fecha_2.mes){
            if(fecha_1.dia == fecha_2.dia){
                std::cout<<"Ambas fechas son iguales\n";
            }
            else if(fecha_1.dia > fecha_2.dia){
                fecha_mayor = fecha_1;
            }
            else{
                fecha_mayor = fecha_2;
            }
        }
        else if(fecha_1.mes > fecha_2.mes){
            fecha_mayor = fecha_1;
        }
        else{
            fecha_mayor = fecha_2;
        }
    }
    else if(fecha_1.anio > fecha_2.anio){
        fecha_mayor = fecha_1;
    }
    else{
        fecha_mayor = fecha_2;
    }

    return fecha_mayor;
}

void mostrar(Fecha x){
	std::cout<<"\nMostrando fecha mayor: "<<x.dia<<"/"<<x.mes<<"/"<<x.anio<<std::endl;
}