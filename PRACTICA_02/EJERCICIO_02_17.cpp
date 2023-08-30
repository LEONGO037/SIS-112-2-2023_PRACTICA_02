// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 29/08/2023
// Fecha modificacion: 29/08/2023
// Numero de ejericio: 17
// Problema planteado: Se quiere realizar un programa que lea por teclado las 5 notas obtenidas por un alumno
// (comprendidas entre 0 y 100). A continuación, debe mostrar todas las notas, la nota media, la nota más alta que ha
// sacado y la menor.
#include <iostream>
using namespace std;
int main ()
{
    int Notas[5];
    int notita, mayor=0, menor=100;
    float suma=0.0;
    cout<<"Ingrese las 5 notas entre 0 y 100"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>notita;
        //Validador de que la nota este entre 0 y 100
        while(notita<0 || notita>100)
        {
            cout<<"Nota fuera del rango, intente de nuevo"<<endl;
            cin>>notita;
        }
        Notas[i]=notita;
        suma+=notita;
        if(notita>mayor)
            mayor=notita;
        if(notita<menor)
            menor=notita;
    }
    cout<<"Las notas son:"<<endl;
    for(int i=0;i<5;i++)
        cout<<Notas[i]<<endl;
    cout<<"Su mayor nota es "<<mayor<<endl;
    cout<<"Su menor nota es "<<menor<<endl;
    cout<<"El promedio de notas es "<<suma/5.0<<endl;
    return 0;
}
