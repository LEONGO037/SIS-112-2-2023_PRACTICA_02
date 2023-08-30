// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 28/08/2023
// Fecha modificacion: 28/08/2023
// Numero de ejericio: 2
// Problema planteado:  Escribir un programa que a partir de un arreglo constante de 10 elementos enteros,
// determine el porcentaje de números pares positivos e impares negativos.
#include <iostream>
#include<vector>
using namespace std;
int main ()
{
    vector<int> arreglo;
    int pares=0, impares=0;
    cout<<"Ingrese 10 numeros enteros"<<endl;
    for(int i=0;i<10;i++)
    {
        int auxiliar;
        cin>>auxiliar;
        arreglo.push_back(auxiliar);
        if(arreglo[i]>0 && arreglo[i]%2==0)
            pares++;
        if(arreglo[i]<0 && arreglo[i]%2!=0)
            impares++;
    }
    //Calcula e imprime porcentajes
    cout<<"El porcentaje de numeros pares positivos es "<<pares*10.0<<"%"<<endl;
    cout<<"El porcentaje de numeros impares negativos es "<<impares*10.0<<"%"<<endl;
    return 0;
}
