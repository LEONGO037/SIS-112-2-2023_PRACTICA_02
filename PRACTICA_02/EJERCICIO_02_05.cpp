// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 28/08/2023
// Fecha modificacion: 28/08/2023
// Numero de ejericio: 5
// Problema planteado:  Un arreglo contiene las estaturas en cm de N personas (estatura al azar en un rango de 50 a
// 240), determinar la mayor estatura, la estatura más baja y el promedio de estaturas.
#include <iostream>
#include <random>
#include<vector>
using namespace std;
int main()
{
    int numero, alto=50, pequenio=240;
    float suma=0.0;
    cout<<"ingrese la cantidad de personas"<<endl;cin>>numero;
    vector<int> Estatura;
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(50, 240);
    for(int i=0;i<numero;i++)
    {
        // Generar un numeros aleatorios
        int numeroAleatorio = dis(gen);
        Estatura.push_back(numeroAleatorio);
        if(Estatura[i]>alto)
            alto=Estatura[i];
        if (Estatura[i]<pequenio)
            pequenio=Estatura[i];
        suma+=Estatura[i];
    }
    cout<<"La menor altura es "<<pequenio<<endl;
    cout<<"La mayor altura es "<<alto<<endl;
    cout<<"El promedio de estatura es "<<suma/numero<<endl;
    return 0;
}
