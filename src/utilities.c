#include "../inc/main.h"

int getInt(int min, int max) {
	char temp[100];
	int number = min - 1;
	while (number < min || number > max) {
		printf(" (%d - %d)\n > ", min, max);
		scanf("%s", temp);
		number = atoi(temp);
	}
	return number;
}

int menu(int first, int last, char *options[last]) {
	int option = 0;
	for (int i=0; i<last; i++)
		printf(" %s\n", options[i]);
	option = getInt(first, last - 1);
	return option;
}
