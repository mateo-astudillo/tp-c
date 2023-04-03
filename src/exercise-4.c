#include "../inc/exercises.h"

static int isInteger(char *integer, int length) {
	int i = 0;
	// As long as the loop doesn't detect the end of the string, it'll continuing iterating
	while(integer[i] != '\0' && i < length) {
		// If at the first position detect a slash "-" and its next position ain't the end of the string, it'll check if only there's a valid negative number
		if (integer[0] == '-' && integer[i+1] != '\0') {
			if (isdigit(integer[i+1])) {
				// Once the loop reaches the end of the string and the number is a valid negative number, it'll return 0
				if (i == length) {
					return 0;
					break;
				}
			// Otherwise, return 1 that means invalid number
			} else {
				return 1;
				break;
			}
		// If detect that isn't a valid number, it'll break the loop returning 1
		} 
		if (!isdigit(integer[i])) {
	    return 1;
	    break;
    }
	i++;
  }
  return 2;
}

void exercise4() {
	char temp[100];
	int number = 0;
	system(CLEAR);
	printf(" Ejercicio 4\n");
	printf("Digite un numero: ");
	scanf("%s", temp);
	if (isInteger(temp, sizeof(temp)) == 0 || isInteger(temp, sizeof(temp)) == 2) {
		number = atoi(temp);
		if (number != 0) {
			exercise4();
		} 
		if (number == 0) {
			printf("Se ha detectado un numero '0', hasta luego.");
			slp(2);
		}
	} else {
		printf("El numero introducido no es valido, solo se admiten numeros enteros positivos o negativos.");
		slp(2);
	}
}