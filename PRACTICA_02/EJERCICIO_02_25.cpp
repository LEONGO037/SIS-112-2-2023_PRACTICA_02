// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 29/08/2023
// Fecha modificacion: 29/08/2023
// Numero de ejericio: 25
// Problema planteado: Genere un vector de N elementos y llénelos aleatoriamente entre valores de 1 a 100 e
// indique el mayor elemento, el menor elemento y el promedio.
#include <iostream>
#include <vector>
#include <random>
using namespace std;
int main()
{
    int numero, mayor=1, menor=100;
    float suma=0.0;
    cout<<"ingrese la cantidad de numeros"<<endl;cin>>numero;
    vector<int> Numeros;
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(1, 100);
    for(int i=0;i<numero;i++)
    {
        // Generar un numeros aleatorios
        int numeroAleatorio = dis(gen);
        Numeros.push_back(numeroAleatorio);
        if(Numeros[i]>mayor)
            mayor=Numeros[i];
        if (Numeros[i]<menor)
            menor=Numeros[i];
        suma+=Numeros[i];
    }
    cout<<"El numero menor es "<<menor<<endl;
    cout<<"El numero mayor es "<<mayor<<endl;
    cout<<"El promedio de los numeros es "<<suma/numero<<endl;
    return 0;
}
