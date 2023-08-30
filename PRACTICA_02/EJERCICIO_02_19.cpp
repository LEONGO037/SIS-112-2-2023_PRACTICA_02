// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 29/08/2023
// Fecha modificacion: 29/08/2023
// Numero de ejericio: 19
// Problema planteado: Hacer un programa que inicialice un vector de números con valores aleatorios, y posterior
// ordene los elementos de menor a mayor.
#include <iostream>
#include <random>
using namespace std;
int main ()
{
    int numero1, numero2, cantidad;
    cout<<"Ingrese cuantos numeros desea generar"<<endl; cin>>cantidad;
    int Numeros[cantidad];
    cout<<"Ingrese el limite iferior y luego el superior"<<endl; cin>>numero1>>numero2;
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(numero1, numero2);
    for(int i=0;i<cantidad;i++)
    {
        int numeroAleatorio = dis(gen);
        Numeros[i]=numeroAleatorio;
        cout<<Numeros[i]<<" ";
    }
    cout<<endl;
    //Ordenamos el vector
    for (int i=0;i<cantidad;i++)
    {
        for (int j=0;j<cantidad-i;j++)
        {
            if(Numeros[j]>Numeros[j+1])
            {
                int aux=Numeros[j];
                Numeros[j]=Numeros[j+1];
                Numeros[j+1]=aux;
            }
        }
    }
    cout<<"El vector ordenado es:"<<endl;
    for (int i=0;i<cantidad;i++)
        cout<<Numeros[i]<<" ";
    return 0;
}
