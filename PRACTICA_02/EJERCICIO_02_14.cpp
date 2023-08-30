// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 29/08/2023
// Fecha modificacion: 29/08/2023
// Numero de ejericio: 14
// Problema planteado: Un arreglo contiene números al azar entre N y M, crear un segundo arreglo que contenga
// los números capicúa contenidos en el primero.
#include<iostream>
#include<string>
#include<sstream>
#include<cmath>
#include<vector>
#include <random>
using namespace std;
//Funcion que da la vuelta al numero
int VerSiCapicua (int numerito)
{
    int numero3=0;
    std::stringstream ss;
    ss<<numerito;
    string auxiliar = ss.str();
    int potencia=auxiliar.length()-1, digito;
    //Da la vuelta al numero
    while(numerito>0)
    {
        digito=numerito%10;
        numerito/=10;
        int num=digito*pow(10,potencia);
        numero3+=num;
        potencia--;
    }
    return numero3;
}
int main()
{
    vector<int> Numeros, Capicua;
    int cantidad, limiteN, limiteM;
    cout<<"Ingrese la cantidad de numeros que desea generar"<<endl; cin>>cantidad;
    cout<<"Ingrese primero el limite inferior y luego el superior"<<endl;cin>>limiteN>>limiteM;
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(limiteN, limiteM);
    for(int i=0;i<cantidad;i++)
    {
        int numeroAleatorio = dis(gen);
        Numeros.push_back(numeroAleatorio);
        //Si el numro es capicua lo aniade a la otra lista
        if(numeroAleatorio==VerSiCapicua(numeroAleatorio))
            Capicua.push_back(numeroAleatorio);
    }
    cout<<"La lista de numeros es:"<<endl;
    for(int i=0;i<cantidad;i++)
        cout<<Numeros[i]<<" ";
    cout<<endl;
    if (Capicua.empty())
        cout<<"El vector de numeros capicua esta vacio"<<endl;
    else
    {
        cout<<"La lista de numeros capicua es:"<<endl;
        for(int i=0;i<Capicua.size();i++)
            cout<<Capicua[i]<<" ";
        cout<<endl;
    }
    return 0;
}
