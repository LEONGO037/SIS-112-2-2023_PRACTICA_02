// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 29/08/2023
// Fecha modificacion: 29/08/2023
// Numero de ejericio: 20
// Problema planteado: Crea un programa que pida un número al usuario un número de mes (por ejemplo, el 4) y
// diga cuántos días tiene (por ejemplo, 30) y el nombre del mes. Debes usar un vector. Para
// simplificarlo vamos a suponer que febrero tiene 28 días.
#include <iostream>
#include <string>
using namespace std;
int main ()
{
    int Dias[12]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string Meses[12]={"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio","Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};
    int numero;
    cout<<"Ingrese un numero de un mes"<<endl;
    cin>>numero;
    if(numero>0 && numero<13)
        //Imprime el mes y numero de dias
        cout<<"El mes numero "<<numero<<" es "<<Meses[numero-1]<<" y tiene "<<Dias[numero-1]<<" dias"<<endl;
    else
        cout<<"Ese numero de mes no existe"<<endl;
    return 0;
}
