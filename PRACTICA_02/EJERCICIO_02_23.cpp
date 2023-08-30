// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 29/08/2023
// Fecha modificacion: 29/08/2023
// Numero de ejericio: 23
// Problema planteado: Leer 2 vectores de dimensión N y combine ambos en otro vector.
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int cantidad;
    cout<<"Ingrese la cantidad de elementos de los vectores"<<endl;
    cin>>cantidad;
    int Vector1[cantidad], Vector2[cantidad];
    vector<int> Vector3;
    cout<<"Ingrese los valores del primer vector"<<endl;
    for(int i=0;i<cantidad;i++)
        cin>>Vector1[i];
    cout<<"Ingrese los valores del segundo vector"<<endl;
    for(int i=0;i<cantidad;i++)
        cin>>Vector2[i];
    //Combina ambos vectores
    for (int i=0;i<cantidad;i++)
    {
        Vector3.push_back(Vector1[i]);
        Vector3.push_back(Vector2[i]);
    }
    cout<<"El nuevo vector combinado es:"<<endl;
    for (int i=0;i<Vector3.size();i++)
        cout<<Vector3[i]<<" ";
    return 0;
}
