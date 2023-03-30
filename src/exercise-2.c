#include "../inc/exercises.h"

void exercise2() {
	printf(" Ejercicio 2\n");
	int lines;
	char letter[2];
	
	printf("Ingresa una letra: ");
	scanf("%s",letter);

    printf("Ingresa la cantidad de lineas para el triangulo: ");
    scanf("%d", &lines);

      for (int i = lines; i >= 1; i--) {
        for (int j = 0; j < i; j++) {
            printf("%s", letter);
        }
        printf("\n");
    }
}
