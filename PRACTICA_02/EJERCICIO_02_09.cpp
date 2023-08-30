// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 29/08/2023
// Fecha modificacion: 29/08/2023
// Numero de ejericio: 9
// Problema planteado: Un arreglo contiene las calificaciones de un examen dado por un grupo de estudiantes, otro
// arreglo contiene los nombres de los mismos y un tercer arreglo contiene la sigla de la carrera.
// Escribir un programa que permita obtener el nombre del alumno que obtuvo la mayor y el
// nombre del alumno que obtuvo la nota menor, además mostrar que carrera tuvo un
// desempeño mayor con relación al promedio del curso.
#include <iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
//Funcion que ve si la sigla ya fue ingresada
bool existeEnVector(vector<string> v, string busqueda)
{
    return find(v.begin(), v.end(), busqueda) != v.end();
}
int main()
{
    vector<int>calificaciones;
    vector<string> nombres, siglas, siglasrepetidas;
    int cantidad, mayor=0, menor=100;
    string mayor1, menor1;
    cout<<"ingrese la cantidad de estudiantes"<<endl;cin>>cantidad;
    for(int i=0;i<cantidad;i++)
    {
        int cali;
        string nom, sig;
        cout<<"Ingrese el nombre del alumno"<<endl;cin>>nom;
        cout<<"ingrese su calificacion"<<endl;cin>>cali;
        cout<<"Ingrese la sigla de su carrera"<<endl;cin>>sig;
        nombres.push_back(nom);
        calificaciones.push_back(cali);
        siglas.push_back(sig);
        if (not(existeEnVector(siglasrepetidas,sig)))
            siglasrepetidas.push_back(sig);
        if(calificaciones[i]>mayor)
        {
            mayor=calificaciones[i];
            mayor1=nombres[i];
        }
        if(calificaciones[i]<menor)
        {
            menor=calificaciones[i];
            menor1=nombres[i];
        }
    }
    vector<int> promedios[siglasrepetidas.size()];
    float mejorprom=0;
    string siglita;
    for (int j=0;j<siglasrepetidas.size();j++)
    {
        float suma=0, estu=0;
        for(int i=0;i<cantidad;i++)
        {
            if(siglas[i]==siglasrepetidas[j])
            {
                suma+=calificaciones[i];
                estu++;
            }
        }
        if((suma/estu)>mejorprom)
        {
            mejorprom=suma/estu;
            siglita=siglasrepetidas[j];
        }

    }
    cout<<"La persona con mejor calificacion es "<<mayor1<<endl;
    cout<<"La persona con peor calificaion es "<<menor1<<endl;
    cout<<"La carrera con mejor promedio es "<<siglita<<endl;
    return 0;
}
