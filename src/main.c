#include "../inc/main.h"
#include "../inc/exercises.h"

int main() {
	int option = 1;
	char *options[] = {
		"0 - Salir",
		"1 - Ejercicio a) 1.",
		"2 - Ejercicio b) 4.",
		"3 - Ejercicio d) 2.",
		"4 - Ejercicio e) 13.",
		"5 - Ejercicio e) 15."
	};
	int options_length = sizeof(options) / sizeof(options[0]);
	system(CLEAR);
	while(option) {
		option = menu(0, options_length, options);
		switch(option) {
			case 0:
				printf(" Adiós\n");
				break;
			case 1:
				exercise1();
				break;
			case 2:
				exercise4();
				break;
			case 3:
				exercise2();
				break;
			case 4:
				exercise13();
				break;
			case 5:
				exercise15();
				break;
			default:
				printf(" Opción no disponible\n");
				break;
		}
		slp(2);
		system(CLEAR);
	}
}
