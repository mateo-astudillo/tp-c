#include <stdio.h>
#include <stdlib.h>

#ifdef WIN32
#include <windows.h>
#define CLEAR "cls"
#else
#include <unistd.h>
#define CLEAR "clear"
#endif

#include "../inc/exercises.h"

int main() {
	int menu = 1;
	char *options[] = {
		"0 - Salir",
		"1 - Ejercicio 15"
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
			default:
				printf(" Opcion no disponible\n");
				break;
		}
		sleep(2);
		system(CLEAR);
	}
}
