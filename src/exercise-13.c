#include "../inc/exercises.h"

void exercise13() {
	printf(" Ejercicio 13\n");
	int students = 5;
	int grades = 2;
	int mathNotes[grades][students];

	for (size_t i = 0; i < grades; i++) {
		for (size_t j = 0; j < students; j++)
			mathNotes[i][j] = getInt(1, 10);	
	}
	
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