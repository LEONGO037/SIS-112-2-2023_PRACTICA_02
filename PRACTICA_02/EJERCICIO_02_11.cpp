// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 29/08/2023
// Fecha modificacion: 29/08/2023
// Numero de ejericio: 11
// Problema planteado: Almacene en un arreglo las edades de varias personas (hasta ingresar un -1) y a partir de
// este arreglo determine la desviación típica.
#include <iostream>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
    vector<int>Edades;
    float suma=0.0;
    int edad;
    cout<<"Ingrese las edades"<<endl;
    do
    {
        cin>>edad;
        if (edad>-1)
        {
            Edades.push_back(edad);
            suma+=edad;
        }
    }while(edad>-1);
    float promedio=suma/Edades.size();
    float sumatoria=0.0;
    //Calcula la sumatoria de los cuadrados de x sub i menos la media
    for(int i=0;i<Edades.size();i++)
        sumatoria+=pow((Edades[i]-promedio),2);
    float desviacion=sqrt(sumatoria/(Edades.size()-1));
    cout<<"La desviacion estandar es "<<desviacion<<endl;
}
