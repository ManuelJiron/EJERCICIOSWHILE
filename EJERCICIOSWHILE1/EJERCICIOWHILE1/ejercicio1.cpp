/*Dado un número natural n se desea calcular la suma de los números 
naturales desde 1 hasta n. Codifica el programa que resuelva este 
planteamiento.*/

#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i = 1, sumaNumero = 0, num;

    cout << "Digite un numero y calculare la suma de 1 hasta el: ";
    cin >> num;

    while (i <=num)
    {
        sumaNumero += i;
        i++;
    }
    
    cout << "La suma de los numeros es igual a: " << sumaNumero << endl;
    
    return 0;
}
