#include <stdio.h>
#include <stdlib.h>

#ifdef WIN32
#include <windows.h>
#define CLEAR "cls"
#else
#include <unistd.h>
#define CLEAR "clear"
#endif


void exercise15() {
	printf(" Ejercicio 15\n");
	int routes[5][5];
	for (int i=0; i<5; i++) {
		for (int j=i; j<5; j++) {
			if (i == j)
				continue;
			printf(" Distancia entre ruta %d y %d\n > ", i+1, j+1);
			scanf("%d", &routes[i][j]);
			routes[j][i] = routes[i][j];
		}
	}
}


int main() {
	int menu = 1;
	char *options[] = {
		"0 - Salir",
		"1 - Ejercicio 15",
		"2 - Ejercicio 13",
		"3 - Ejercicio 14"
	};
	int options_length = sizeof(options) / sizeof(options[0]);
	while(menu) {
		for (int i=0; i<options_length; i++)
			printf(" %s\n", options[i]);
		printf(" > ");
		scanf("%d", &menu);
		switch(menu) {
			case 1:
				exercise15();
				break;
			case 2:
				printf(" Ejercicio 13\n");
				break;
			case 3:
				printf(" Ejercicio 14\n");
				break;
		}
	}
}
