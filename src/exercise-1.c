#include "../inc/exercises.h"

static int isInteger(char *integer, int length) {
	int i = 0, result = 2;
	// As long as the loop doesn't detect the end of the string, it'll continuing iterating
	while(integer[i] != '\0' && i < length) {
		// If at the first position detect a minus "-" and its next position ain't the end
		// of the string, it'll check if only there's a valid negative number
		if (integer[0] == '-' && integer[i+1] != '\0') {
			if (isdigit(integer[i+1]))
				result = 0;
			else
				result = 1;
		}
		// If detect that isn't a valid number, returning will be "1"
		if (!isdigit(integer[i]))
      result = 1;
		i++;
  }
	// Once the loop reaches the end of the string and the number is positive
	// it'll return "2", but if it's a valid negative number it'll return "0",
	// otherwise it'll return "1" that means invalid number
  return result; 
}

void exercise1() {
	system(CLEAR);
	char temp[100];
	int number = 0, add_extra = 0;
	printf(" Ejercicio 1\n");
	printf(" Digite un numero: ");
	scanf("%s", temp);
	if (isInteger(temp, sizeof(temp)) == 1) {
		exercise1();
		return;
	}
	number = atoi(temp);
	if (number > 100) {
		add_extra = (150 * number) / 100;
		printf(" El numero '%d' es mayor a 100, agregado su 150%% es: %d\n", number, (number + add_extra) );
	}
	else {
		printf(" El numero ingresado es: %d\n", number);
	}
	slp(2);
}