/*8. Crea un programa que permita al usuario ingresar dos vectores de la 
misma longitud y luego calcule su producto punto. Muestra el resultado 
al finalizar el cálculo. */

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cout << "Ingrese la longitud de los vectores: ";
    cin >> n;

    int vector1[n], vector2[n];
    int i = 0;

    cout << "Ingrese los elementos del primer vector: ";
    while (i < n)
    {
        cin >> vector1[i];
        i++;
    }

    i = 0;
    cout << "Ingrese los elementos del segundo vector: ";
    while (i < n)
    {
        cin >> vector2[i];
        i++;
    }

    int productoPunto = 0;
    i = 0;

    while (i < n)
    {
        productoPunto += vector1[i] * vector2[i];
        i++;
    }

    cout << "El producto punto de los dos vectores es: " << productoPunto << endl;

    return 0;
}
