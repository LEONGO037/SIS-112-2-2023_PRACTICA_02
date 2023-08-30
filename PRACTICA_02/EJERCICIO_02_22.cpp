// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 29/08/2023
// Fecha modificacion: 29/08/2023
// Numero de ejericio: 22
// Problema planteado: Leer 2 vectores de dimensión N y calcule la multiplicación de los mismos en otro vector.
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int cantidad;
    cout<<"Ingrese la cantidad de elementos de los vectores"<<endl;
    cin>>cantidad;
    int Vector1[cantidad], Vector2[cantidad], Vector3[cantidad];
    cout<<"Ingrese los valores del primer vector"<<endl;
    for(int i=0;i<cantidad;i++)
        cin>>Vector1[i];
    cout<<"Ingrese los valores del segundo vector"<<endl;
    for(int i=0;i<cantidad;i++)
        cin>>Vector2[i];
    cout<<"Vector 1"<<setw(3)<<"* "<<setw(7)<<"Vector 2"<<setw(3)<<"= "<<setw(7)<<"Vector 3"<<endl;
    for (int i=0;i<cantidad;i++)
    {
        Vector3[i]=Vector2[i]*Vector1[i];
        //Uso setw para imprimir de forma ordenada
        cout<<Vector1[i]<<setw(9)<<"*"<<setw(6)<<Vector2[i]<<setw(5)<<"="<<setw(6)<<Vector3[i]<<endl;
    }
    return 0;
}
