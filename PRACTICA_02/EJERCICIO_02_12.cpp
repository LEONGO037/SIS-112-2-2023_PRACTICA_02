// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 29/08/2023
// Fecha modificacion: 29/08/2023
// Numero de ejericio: 12
// Problema planteado: Un arreglo constante contiene la producción en toneladas métricas de 6 minerales, y otro
// contiene los nombres de estos minerales, para obtener
#include <iostream>
#include<vector>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
    string mineral[6]={"SN", "SB", "AU", "PT", "AG", "CU"};
    int toneladas[6]={998000, 876500, 786670, 636143, 135567, 109412};
    string busqueda;
    cout<<"Mineral que desea buscar"<<endl;cin>>busqueda;
    for(int i=0;i<6;i++)
    {
        if(mineral[i]==busqueda)
            cout<<"La produccion de "<<mineral[i]<<" es de "<<toneladas[i]<<" toneladas metricas"<<endl;
    }
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6-i;j++)
        {
            if(toneladas[j]>toneladas[j+1])
            {
                int aux=toneladas[j];
                toneladas[j]=toneladas[j+1];
                toneladas[j+1]=aux;
                string aux1=mineral[j];
                mineral[j]=mineral[j+1];
                mineral[j+1]=aux1;
            }
        }
    }
    cout<<"Mineral"<<"   "<<"Produccion"<<endl;
    for(int i=0;i<6;i++)
        cout<<mineral[i]<<"         "<<toneladas[i]<<endl;
    return 0;
}
