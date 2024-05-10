/*Realice un programa que permita calcular y dar como salida el
promedio general de una sección, tomando en cuenta que está
compuesta por 10 estudiantes y que se tiene la nota de cada uno de
ellos.*/
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int estudiantes = 10;
    int SumaDenotas;
    float promedio;
    int i = 1;
    int notas;

    while (i <= estudiantes)
    {
        cout << "Ingrese la nota " << i++ << ":" << endl;
        cin >> notas;
        SumaDenotas += notas;
    }

    promedio = SumaDenotas / estudiantes;
    cout << "El promedio general de la seccion es: " << promedio << endl;

    return 0;
}
