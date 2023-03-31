#include "../inc/exercises.h"

static int isInteger(char *integer, int length) {
	int i = 0;
	while(integer[i] != '\0' && i < length) {
		if (!isdigit(integer[i])) {
	    return 0;
	    break;
    }
		i++;
  }
  return 1;
}

void exercise1() {
	printf(" Ejercicio 1\n");
	char temp[100];
	int number = 0, add_extra = 0;
	printf(" Digite un numero: ");
	scanf("%s", temp);
	if ( isInteger( temp, sizeof(temp) ) ) {
		number = atoi(temp);
	} else {
		system(CLEAR);
		exercise1();
		return;
	}
	if (number > 100) {
		add_extra = (150 * number) / 100;
		number += add_extra;
		printf(" El numero es mayor a 100, agregado su 150%% es: %d", number);
	}
}