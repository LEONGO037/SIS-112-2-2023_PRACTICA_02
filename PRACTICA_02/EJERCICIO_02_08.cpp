// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 29/08/2023
// Fecha modificacion: 29/08/2023
// Numero de ejericio: 8
// Problema planteado:  ¿En qué mes(es) se dieron las ventas máximas de la empresa?
// ¿A cuánto ascendieron las ventas máximas?
// ¿Cuál fue el total de las ventas?
#include <iostream>
#include<string>
using namespace std;
int main()
{
    float maximo=0.0, total=0.0;
    float valores[12];
    int posision;
    string meses[12]={"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};
    cout<<"Ingrese los valores de ventas:"<<endl;
    for(int i=0;i<12;i++)
    {
        cin>>valores[i];
        //Se ve el mes de la venta maxima
        if(valores[i]>maximo)
        {
            maximo=valores[i];
            posision=i;
        }
        total+=valores[i];
    }
    cout<<"El mes con el maximo de ventas fue "<<meses[posision]<<endl;
    cout<<"El maximo de ventas fue "<<maximo<<endl;
    cout<<"El total de ventas fue "<<total<<endl;
    return 0;
}
