#include "../inc/exercises.h"
#include <ctype.h>

static int isInteger(char *integer, int length)
{
	int i = 0;
	while(integer[i] != '\0' && i < length)
	{
		if (!isdigit(integer[i]))
        {
            return 0;
            break;
        }
		i++;
    }
    return 1;
}

void exercise1() {
	printf(" Ejercicio 1\n");

	char number1[10];
	int number2 = 0, add_extra = 0;

	printf("Digite un numero: ");
	scanf("%s", number1);

	if (isInteger(number1, sizeof(number1)))
	{
		number2 = atoi(number1);
	}
	else
	{
		exercise1();
		return;
	}

	if (number2 > 100)
	{
		add_extra = (150*number2)/100;
		number2 += add_extra;
		printf("El numero es mayor a 100, agregado su 150%% es: %d", number2);
	}
}