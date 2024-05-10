/*Escriba el programa para calcular la suma de los cuadrados de los 
números entre 1 y 100.
*/

#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int i=1, sumaCuadrados = 0;

    while (i<=100)
    {
        sumaCuadrados += i * i;
        i++;
    }

    cout << "La suma de los cuadrados del 1 al 100 es igual a: " << sumaCuadrados << endl;

    return 0;
}
