/*6. Hacer un programa que sume los números pares comprendidos entre
100 y 200*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i = 100, sumaPares = 0;
    while (i <= 200)
    {
        if (i % 2 == 0)
        {
            sumaPares += i;
        }
        i++;
    }

    cout << "La suma de los pares es igual a: " << sumaPares << endl;

    return 0;
}
