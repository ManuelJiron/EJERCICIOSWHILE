Algoritmo SumaNaturales
    Definir n, suma, contador Como Entero;
	
    Escribir "Ingrese un número natural:";
    Leer n;
	
    suma <- 0;
    contador <- 1;
	
    Mientras contador <= n Hacer
        suma <- suma + contador;
        contador <- contador + 1;
    FinMientras
	
    Escribir "La suma de los números naturales desde 1 hasta ", n, " es: ", suma;
	
FinAlgoritmo

