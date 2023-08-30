// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 29/08/2023
// Fecha modificacion: 29/08/2023
// Numero de ejericio: 21
// Problema planteado: Programa que declare tres vectores ‘vector1’, ‘vector2’ y ‘vector3’ de cinco enteros cada
// uno, pida valores para ‘vector1’ y ‘vector2’ y calcule vector3=vector1+vector2.
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int Vector1[5], Vector2[5], Vector3[5];
    cout<<"Ingrese los valores del primer vector"<<endl;
    for(int i=0;i<5;i++)
        cin>>Vector1[i];
    cout<<"Ingrese los valores del segundo vector"<<endl;
    for(int i=0;i<5;i++)
        cin>>Vector2[i];
    cout<<"Vector 1"<<setw(3)<<"+ "<<setw(7)<<"Vector 2"<<setw(3)<<"= "<<setw(7)<<"Vector 3"<<endl;
    for (int i=0;i<5;i++)
    {
        Vector3[i]=Vector2[i]+Vector1[i];
        //Uso setw para imprimir de forma ordenada
        cout<<Vector1[i]<<setw(9)<<"+"<<setw(6)<<Vector2[i]<<setw(5)<<"="<<setw(6)<<Vector3[i]<<endl;
    }
    return 0;
}
