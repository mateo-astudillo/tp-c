#include "../inc/exercises.h"

static int isInteger(char *integer, int length)
{
	int i = 0;
	while(integer[i] != '\0' && i < length) // As long as the loop doesn't detect the end of the string, it'll continuing iterating
	{
		if (integer[0] == '-' && integer[i+1] != '\0') // If at the first position detect a slash "-" and its next position ain't the end of the string, it'll check if only there's a valid negative number
		{
			if (isdigit(integer[i+1]))
			{
				if (i == length) // Once the loop reaches the end of the string and the number is a valid negative number, it'll return 0
				{
					return 0;
					break;
				}
			}
			else // Otherwise, return 1 that means invalid number
			{
				return 1;
				break;
			}
		}
		else if (!isdigit(integer[i])) // If detect that isn't a valid number, it'll break the loop returning 1
        {
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

	if (isInteger(temp, sizeof(temp)) == 0 || isInteger(temp, sizeof(temp)) == 2)
	{
		number = atoi(temp);

		if (number != 0)
		{
			exercise4();
		}
		else if (number == 0)
		{
			printf("Se ha detectado un numero '0', hasta luego.");
			slp(2);
		}
	}
	else
	{
		printf("El numero introducido no es valido, solo se admiten numeros enteros positivos o negativos.");
		slp(2);
	}
}