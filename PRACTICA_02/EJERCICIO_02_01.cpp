// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 28/08/2023
// Fecha modificacion: 28/08/2023
// Numero de ejericio: 1
// Problema planteado:  Almacenar un vector de tamaño N, con números al azar entre A y B, e imprima la suma de
// los componentes de índice par y la resta de los componentes de índice impar.
#include <iostream>
#include <random>
#include<vector>
using namespace std;
int main ()
{
    int cantidad, numero1, numero2, suma=0, resta=0;
    vector<int> Numeros;
    cout<<"Ingrese la cantidad de numeros que debe tener el vector"<<endl;cin>>cantidad;
    cout<<"Ingrese el limite inferior y luego el superior"<<endl;cin>>numero1>>numero2;
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(numero1, numero2);
    for(int i=0;i<cantidad;i++)
    {
        // Generar un numeros aleatorios
        int numeroAleatorio = dis(gen);
        Numeros.push_back(numeroAleatorio);
        cout<<Numeros[i]<<endl;
        if(i%2==0)
            suma+=Numeros[i];
        else
            resta-=Numeros[i];
    }
    cout<<"La suma es "<<suma<<endl;
    cout<<"LA resta es "<<resta<<endl;
    return 0;
}
