// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 29/08/2023
// Fecha modificacion: 29/08/2023
// Numero de ejericio: 16
// Problema planteado: Crear un vector de 5 elementos de cadenas de caracteres, inicializa el vector con datos
// leídos por el teclado. Copia los elementos del vector en otro vector pero en orden inverso, y muéstralo por la pantalla.
#include <iostream>
#include <string>
using namespace std;
int main ()
{
    string cadenas1[5], cadenas2[5];
    cout<<"Ingrese los datos del vector"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>cadenas1[i];
        //Guarda los elementos en orden inverso en el otro vector
        cadenas2[4-i]=cadenas1[i];
    }
    cout<<"El otro vector en orden inverso es"<<endl;
    for(int i=0;i<5;i++)
        cout<<cadenas2[i]<<endl;
    return 0;
}
