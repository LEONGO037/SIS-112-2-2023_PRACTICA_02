// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 29/08/2023
// Fecha modificacion: 29/08/2023
// Numero de ejericio: 15
// Problema planteado: Realizar un programa que defina un vector de 10 enteros, a continuación lo inicialice con
// valores aleatorios (del 1 al 10) y posteriormente muestre en pantalla cada elemento del vector
// junto con su cuadrado y su cubo.
#include <iostream>
#include <random>
#include<iomanip>
#include<cmath>
using namespace std;
int main ()
{
    int Numero[10];
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(1, 10);
    cout<<"Numero  "<<"Cuadrado  "<<"Cubo"<<endl;
    for(int i=0;i<10;i++)
    {
        int numeroAleatorio = dis(gen);
        Numero[i]=numeroAleatorio;
        //Uso setw para que quede ordenada la salida
        cout<<Numero[i]<<setw(10)<<pow(Numero[i],2)<<setw(10)<<pow(Numero[i],3)<<endl;
    }
    return 0;
}
