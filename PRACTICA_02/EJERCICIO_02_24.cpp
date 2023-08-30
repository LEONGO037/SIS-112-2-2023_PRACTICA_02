// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 29/08/2023
// Fecha modificacion: 29/08/2023
// Numero de ejericio: 24
// Problema planteado: Leer una cadena en mayúsculas y cámbielas en mayúsculas.
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string cadena;
    cout<<"Ingrese una cadena en solo mayusculas"<<endl;
    cin>>cadena;
    bool Mayuscula=true;
    for(char c:cadena)
    {
        //Valida que solo sean letras y que todas sean mayusculas
        if(!isupper(c) && !isalpha(c))
        {
            Mayuscula=false;
            break;
        }
    }
    if (Mayuscula)
        cout<<"La cadena en solo mayusculas es"<<endl<<cadena<<endl;
    else
        cout<<"La cadena tiene al menos un caracter minuscula o tiene otros caracteres que no son letras"<<endl;
    return 0;
}
