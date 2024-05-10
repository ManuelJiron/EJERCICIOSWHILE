Algoritmo PromedioGeneral
    Definir suma, nota, promedio Como Real;
    Definir contador Como Entero;
	
    suma <- 0;
	
    Para contador <- 1 Hasta 10 Hacer
        Escribir "Ingrese la nota del estudiante ", contador, ":";
        Leer nota;
        suma <- suma + nota;
    FinPara
	
    promedio <- suma / 10;
	
    Escribir "El promedio general de la sección es: ", promedio;
	
FinAlgoritmo
