// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 29/08/2023
// Fecha modificacion: 29/08/2023
// Numero de ejericio: 10
// Problema planteado: Dado un arreglo que contiene la población de los nueve departamentos del país y otro que
// contiene los nombres de estos departamentos, genere un básico grafico estadístico que
// muestre esta población (utilice un factor de escala), además indique el nombre del
// departamento que tiene la mayor población y el nombre del departamento que tiene la menor población.
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
    int poblacion[9];
    string departamentos[9]={"La Paz", "Oruro", "Santa Cruz", "Cochabamba", "Beni", "Pando","Potosi", "Tarija", "Chuquisaca"};
    float escala = 1.0;
    cout << "Ingrese la poblacion de los departamentos:" << endl;
    for (int i = 0; i < 9; i++)
    {
        cout << "Poblacion de " << departamentos[i] << ": ";
        cin >> poblacion[i];
    }
    int maxPoblacion = poblacion[0];
    int minPoblacion = poblacion[0];
    string maxDep, minDep;
    for (int i = 1; i < 9; i++)
    {
        if (poblacion[i] > maxPoblacion)
        {
            maxPoblacion = poblacion[i];
            maxDep = departamentos[i];
        }
        if (poblacion[i] < minPoblacion)
        {
            minPoblacion = poblacion[i];
            minDep = departamentos[i];
        }
    }
    // Encontrar la escala
    for (int i = 0; i < 9; i++)
    {
        if (poblacion[i] > 100000)
        {
            escala = 0.00001;
            break;
        }
    }
    // Imprimir gráfico estadístico
    cout << "\nGrafico estadistico de poblacion por cien mil:"<<endl;
    for (int i = 0; i < 9; i++)
    {
        cout << left << setw(15) << departamentos[i] << ": ";
        int numAsteriscos = static_cast<int>(poblacion[i] * escala);
        for (int j = 0; j < numAsteriscos; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << "\nDepartamento con mayor poblacion: " << maxDep << " (" << maxPoblacion << " habitantes)\n";
    cout << "Departamento con menor poblacion: " << minDep << " (" << minPoblacion << " habitantes)\n";
    return 0;
}
