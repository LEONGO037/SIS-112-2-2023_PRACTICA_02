// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 28/08/2023
// Fecha modificacion: 28/08/2023
// Numero de ejericio: 3
// Problema planteado:  Escribir un programa que genere un arreglo de 50 posiciones con números al azar en el
// rango de A - B y determine cuántos de estos elementos son números primos.
#include <iostream>
#include <random>
#include<vector>
using namespace std;
bool esPrimo(int num)
{
    bool Primo=true;
    if (num <= 1)
        Primo=false;
    for (int i = 2; i<= num/2; ++i)
    {
        if (num % i == 0)
            Primo=false;
    }
    return Primo;
}
int main ()
{
    int numero1, numero2, primo=0;
    vector<int> Numeros;
    cout<<"Ingrese el limite iferior y luego el superior"<<endl;cin>>numero1>>numero2;
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(numero1, numero2);
    for(int i=0;i<50;i++)
    {
        // Generar un numeros aleatorios
        int numeroAleatorio = dis(gen);
        Numeros.push_back(numeroAleatorio);
        cout<<Numeros[i]<<endl;
        if(esPrimo(Numeros[i]))
            primo++;
    }
    cout<<"La cantidad de numeros primos es "<<primo<<endl;
    return 0;
}
