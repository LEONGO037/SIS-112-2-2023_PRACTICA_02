// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 29/08/2023
// Fecha modificacion: 29/08/2023
// Numero de ejericio: 13
// Problema planteado: Almacenar en un arreglo los n primeros números primos.
#include <iostream>
#include<vector>
using namespace std;
//Funcion que verifica si es primo o no
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
int main()
{
    vector<int> Primos;
    int numeros=2, numero, primos=0;
    cout<<"Ingrese cuantos numeros primos desea conocer"<<endl;cin>>numero;
    while(primos<numero)
    {
        if(esPrimo(numeros))
        {
            Primos.push_back(numeros);
            primos++;
        }
        numeros++;
    }
    cout<<"Los primeros "<<numero<<" numeros primos son:"<<endl;
    for(int i=0;i<primos;i++)
        cout<<Primos[i]<<" ";
    return 0;
}
