// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 29/08/2023
// Fecha modificacion: 29/08/2023
// Numero de ejericio: 6
// Problema planteado:  Dados dos arreglos constantes de igual tamaño, generar un tercer arreglo con los elementos intercalados.
#include <iostream>
#include<vector>
using namespace std;
int main()
{
    int tamanio;
    cout<<"Ingrese el tamanio de los vectores"<<endl;cin>>tamanio;
    int arreglo1[tamanio], arreglo2[tamanio], arreglo3[tamanio*2];
    cout<<"ingrese los valores del primer vector"<<endl;
    for(int i=0;i<tamanio;i++)
        cin>>arreglo1[i];
    cout<<"ingrese los valores del segundo vector"<<endl;
    for(int i=0;i<tamanio;i++)
        cin>>arreglo2[i];
    int posision=0;
    for(int j=1;j<=tamanio*2;j++)
    {
        if(j%2==0)
            arreglo3[j-1]=arreglo1[posision];
        else
            arreglo3[j-1]=arreglo2[posision];
        if(j%2==0)
            posision++;
    }
    cout<<"El nuevo vector combinado es:"<<endl;
    for(int k=0;k<tamanio*2;k++)
        cout<<arreglo3[k]<<" ";
    return 0;
}
