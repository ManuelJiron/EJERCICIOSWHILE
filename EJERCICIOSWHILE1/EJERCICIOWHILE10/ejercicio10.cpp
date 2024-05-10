/*10.Implementa un programa que solicite al usuario ingresar una matriz y 
luego calcule su transposición. La transposición de una matriz se 
realiza intercambiando filas por columnas. Imprime la matriz 
transpuesta como salida*/

#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int filas, columnas;
    cout << "Ingrese el numero de filas y columnas de la matriz: ";
    cin >> filas >> columnas;

    int matriz[filas][columnas];
    int transpuesta[filas][columnas];

    cout << "Ingrese los elementos de la matriz: ";
    int i = 0;
    int j = 0;
    while (i < filas)
    {
        j = 0;
        while (j < columnas)
        {
            cin >> matriz[i][j];
            j++;
        }
        i++;
    }

    i = 0;
    j = 0;
    while (i < filas)
    {
        j = 0;
        while (j < columnas)
        {
            transpuesta[j][i] = matriz[i][j];
            j++;
        }
        i++;
    }

    cout << "La matriz transpuesta es: " << endl;
    i = 0;
    j = 0;
    while (i < filas)
    {
        j = 0;
        while (j < columnas)
        {
            cout << transpuesta[i][j] << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}