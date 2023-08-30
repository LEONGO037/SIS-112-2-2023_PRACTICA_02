// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 28/08/2023
// Fecha modificacion: 28/08/2023
// Numero de ejericio: 4
// Problema planteado:  Un arreglo contiene las edades de un grupo de 50 personas con números al azar, determine:
// el porcentaje de mayores (>=18 años) y menores de edad (<18 años).
#include <iostream>
#include <random>
#include<vector>
using namespace std;
int main()
{
    float mayores=0.0, menores=0.0;
    vector<int> Edades;
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(1, 110);
    for(int i=0;i<50;i++)
    {
        // Generar un numeros aleatorios
        int numeroAleatorio = dis(gen);
        Edades.push_back(numeroAleatorio);
        cout<<Edades[i]<<endl;
        if(Edades[i]>=18)
            mayores++;
        else
            menores++;
    }
    cout<<"El porcentaje de personas mayores de edad es "<<(mayores/50)*100.0<<"%"<<endl;
    cout<<"El porcentaje de personas menores de edad es "<<(menores/50)*100.0<<"%"<<endl;
    return 0;
}


