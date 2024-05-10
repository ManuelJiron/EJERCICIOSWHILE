/*5. Para un grupo de clase de 8 estudiantes, realice un programa que
permita calcular y dar como salida lo siguiente:
✓ Cantidad de alumnos aprobados
✓ Cantidad de alumnos reprobados
✓ Promedio general del grupo
Nota mínima para aprobar: 70*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int estudiantes = 8;
    int i = 1, notas, sumaNotas = 0;
    int aprobados = 0, reprobados = 0;
    float promedio;

    while (i <= estudiantes)
    {
        cout << "Ingrese las notas del estudiante " << i++ << endl;
        cin >> notas;
        if (notas >= 70)
        {
           aprobados++;
        }
        else
        {
           reprobados++;
        }
    }
    sumaNotas += notas;
    promedio = sumaNotas / estudiantes;
    cout << "La cantidad de alumnos aprobados es: " << aprobados << endl;
    cout << "La cantidad de alumnos reprobados es: " << reprobados << endl;
    cout << "El promedio del grupo es: " << promedio << endl;

    return 0;
}
