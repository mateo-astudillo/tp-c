#include "../inc/exercises.h"

static void setNotes(int grades, int students, float **mathNotes){
	for (int i = 0; i < grades; i++) {
		printf(" Grado %d: \n", i+1);
		for (int j = 0; j < students; j++){
			printf(" Ingrese nota alumno %d: ", j+1);
			mathNotes[i][j] = getFloat(1, 10);
		}	
	}
}

static void getMaxNote(int grades, int students, float **mathNotes){
	float  max = 0;
	for (int i = 0; i < grades; i++) {
		for (int j = 0; j < students; j++) {
			if (max <= mathNotes[i][j])
				max = mathNotes[i][j];
		}
	}
	printf(" La nota mayor es: %.2f\n", max);
}

static void getAverage(int grades, int students, float **mathNotes){
	float average, total;
	printf(" Promedio de notas: \n");
	for (int i = 0; i < grades; i++) {
		for (int j = 0; j < students; j++) {
			total += mathNotes[i][j];
		}
		average = total / students;
		total = 0;
		printf(" El promedio de grado %d es: %.2f\n", i, average);
	}
}

static void showNotes(int grades, int students, float **mathNotes){
	printf(" Notas de alumnos\n");
	for (int i = 0; i < grades; i++) {
		printf(" Grado %d: \n", i+1);
		for (int j = 0; j < students; j++)
			printf(" Alumno %d : %.2f \n", j+1, mathNotes[i][j]);
	}
}

static void showApprovedStudents(){}

void exercise13() {
	printf(" Ejercicio 13\n");
	int students = 5, grades = 2, option = 1, stateNotes = 0;
	float **mathNotes = (float **) malloc(grades * sizeof(float *));
	for (int i = 0; i < grades; i++)
      mathNotes[i] = (float *) malloc(students * sizeof(float));

	char *options[] = {
		"0 - Salir",
		"1 - Cargar Notas",
		"2 - Mostrar nota promedio",
		"3 - Mostrar la mayor nota general",
		"4 - Mostrar todas las notas",
		"5 - Alumnos aprobados"
	};

	int options_length = sizeof(options) / sizeof(options[0]);

	while (option != 0) {
		if (!stateNotes) {
			setNotes(grades, students, mathNotes);
			stateNotes = 1;
		}
		option = menu(0, options_length, options);
		switch (option) {
			case 0:
				printf(" Fin\n");
				break;
			case 1:
				setNotes(grades, students, mathNotes);
				break;
			case 2:
				getAverage(grades, students, mathNotes);
				break;
			case 3:
				getMaxNote(grades, students, mathNotes);
				break;
			case 4:
				showNotes(grades, students, mathNotes);
				break;
			case 5:
				showApprovedStudents();
				break;
			default:
				break;
		}
		system(CLEAR);
		slp(1);
	}

	for (int i = 0; i < grades; i++)
      free(mathNotes[i]);
  free(mathNotes);
	
}