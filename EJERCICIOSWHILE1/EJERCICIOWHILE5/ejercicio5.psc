Algoritmo EstadisticasClase
    Definir nota, aprobados, reprobados, promedio, suma Como Real;
    Definir contador Como Entero;
	
    aprobados <- 0;
    reprobados <- 0;
    suma <- 0;
	
    Para contador <- 1 Hasta 8 Hacer
        Escribir "Ingrese la nota del estudiante ", contador, ":";
        Leer nota;
        suma <- suma + nota;
		
        Si nota >= 70 Entonces
            aprobados <- aprobados + 1;
        Sino
            reprobados <- reprobados + 1;
        FinSi
    FinPara
	
    promedio <- suma / 8;
	
    Escribir "Cantidad de alumnos aprobados: ", aprobados;
    Escribir "Cantidad de alumnos reprobados: ", reprobados;
    Escribir "Promedio general del grupo: ", promedio;
	
FinAlgoritmo
