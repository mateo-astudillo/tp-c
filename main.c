#include <stdio.h>
#include <stdlib.h>

#ifdef WIN32
#include <windows.h>
#define CLEAR "cls"
#else
#include <unistd.h>
#define CLEAR "clear"
#endif

int main() {
	int menu = 1;
	char *options[] = {
		"0 - Salir",
		"1 - Ejercicio 12",
		"2 - Ejercicio 13",
		"3 - Ejercicio 14"
	};
	int options_length = sizeof(options) / sizeof(options[0]);
	while(menu) {
		for (int i=0; i<options_length; i++)
			printf("%s\n", options[i]);
		printf(" > ");
		scanf("%d", &menu);
		switch(menu) {
			case 1:
				printf("Ejercicio 12\n");
				break;
			case 2:
				printf("Ejercicio 13\n");
				break;
			case 3:
				printf("Ejercicio 14\n");
				break;
		}
	}
}
