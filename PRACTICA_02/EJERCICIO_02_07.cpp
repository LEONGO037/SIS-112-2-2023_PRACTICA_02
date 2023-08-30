// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 29/08/2023
// Fecha modificacion: 29/08/2023
// Numero de ejericio: 7
// Problema planteado:  A partir de dos vectores constantes que contienen nombres de 7 personas cada uno. Escribir un programa que
// escriba la palabra “Iguales” si ambos vectores son iguales y “Diferentes” si no lo son. Serán iguales cuando en la misma posición
// de ambos vectores se tenga el mismo valor para todos los elementos.
#include <iostream>
#include<string>
using namespace std;
int main()
{
    string vector1[7], vector2[7];
    cout<<"Ingrese los nombres del primer vector"<<endl;
    for(int i=0;i<7;i++)
        cin>>vector1[i];
    cout<<"Ingrese los nombres del segundo vector"<<endl;
    for(int i=0;i<7;i++)
        cin>>vector2[i];
    bool iguales=true;
    for(int i=0;i<7;i++)
    {
        if(vector1[i]!=vector2[i])
            iguales=false;
    }
    if (iguales)
        cout<<"Los vectores son iguales"<<endl;
    else
        cout<<"Los vectores no son iguales"<<endl;
    return 0;
}
