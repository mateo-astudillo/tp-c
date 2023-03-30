#include "../inc/exercises.h"

static char setChar(){
	char letter;
	printf("Ingresa una letra: ");
	scanf(" %c", &letter);
	return letter;
}

static int setLines(){
	int lines;
	printf("Ingresa la cantidad de lineas para el triangulo: ");
    lines = getInt(0,50);
	return lines;
}

static void showTriangle(int lines, char letter){
	 for (int i = lines; i >= 1; i--) {
        for (int j = 0; j < i; j++) {
            printf("%c", letter);
        }
        printf("\n");
    }
}

void exercise2() {
	printf(" Ejercicio 2\n");

	char *options[] = {
		"0 - Salir",
		"1 - Ingresar letra",
		"2 - Cambiar cantidad de lineas del triangulo",
		"3 - Mostrar triangulo"
	};
	char letter = '*';
	int options_length = sizeof(options) / sizeof(options[0]), option = 1, lines=5;
	system(CLEAR);
	printf(" Default letter: *\n Default lines: 5\n\n");
	while (option != 0) {
		option = menu(0, options_length, options);
		switch (option) {
			case 0:
				printf(" Fin\n");
				break;
			case 1:
				letter = setChar();
				break;
			case 2:
				lines = setLines();
				break;
			case 3:
				showTriangle(lines, letter);
				slp(2);
				break;
			default:
				break;
		}
		system(CLEAR);
	}
     
}
