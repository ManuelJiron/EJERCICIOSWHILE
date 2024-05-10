/*7. Desarrolla un programa que solicite al usuario ingresar dos vectores 
de igual longitud y luego calcule la suma de ambos vectores. El 
resultado debe mostrarse en un tercer vector*/

#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int longitud;
    cout << "Ingrese la longitud de los vectores: ";
    cin >> longitud;

    int vector1[longitud];
    int vector2[longitud];
    int sumaVector[longitud];

    cout << "Ingrese los elementos del primer vector: ";
    int i = 0;
    while (i < longitud)
    {
        cin >> vector1[i];
        i++;
    }

    cout << "Ingrese los elementos del segundo vector: ";
    i = 0;
    while (i < longitud)
    {
        cin >> vector2[i];
        i++;
    }

    i = 0;
    while (i < longitud)
    {
        sumaVector[i] = vector1[i] + vector2[i];
        i++;
    }

    cout << "El vector resultante de la suma es: ";
    i = 0;
    while (i < longitud)
    {
        cout << sumaVector[i] << " ";
        i++;
    }

    return 0;
}