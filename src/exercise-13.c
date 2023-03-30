#include "../inc/exercises.h"

void exercise13() {
	printf(" Ejercicio 13\n");
	int students = 5, grades = 2;
	float mathNotes[grades][students], average = 0, total = 0;


	for (int i = 0; i < grades; i++) {
		printf(" Grado %d: \n", i+1);
		for (int j = 0; j < students; j++){
			printf(" Ingrese nota alumno %d: ", j+1);
			mathNotes[i][j] = getFloat(1, 10);
		}	
	}

	printf(" Promedio de notas: \n");
	for (int i = 0; i < grades; i++) {
		for (int j = 0; j < students; j++)
		{
			total += mathNotes[i][j];
		}
		average = total / students;
		total = 0;
		printf(" El promedio de grado %d es: %.2f\n", i, average);
	}
	
	printf(" Notas de alumnos\n");
	for (int i = 0; i < grades; i++) {
		printf(" Grado %d: \n", i+1);
		for (int j = 0; j < students; j++)
			printf(" Alumno %d : %.2f \n", j+1, mathNotes[i][j]);
	}
	system("pause");
}

/*
	Se pide cargar en una matriz las notas de matemáticas de los alumnos de
	secundaria de una escuela. Suponiendo que hay 2 grados distintos, 5 alumnos
	por grado, se pide:
	i. Ingresar las notas que ha sacado cada alumno de cada grado.
	ii. Imprimir cuál es la nota promedio de cada grado.
	iii. Imprimir la mayor nota en general.
	iv. Imprimir todas las notas.
	v. Imprimir cuántos alumnos aprobaron (sacaron mayor a 7) y
	cuántos reprobaron de cada grado
*/