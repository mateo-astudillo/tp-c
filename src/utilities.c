#include "../inc/main.h"

int getInt(int min, int max) {
	char temp[100];
	int number = min - 1;
	while (number < min || number > max) {
		scanf("%s", temp);
		number = atoi(temp);
	}
	return number;
}

int menu(int o, char *options[o]) {
	int option = 0;
	for (int i=0; i<o; i++)
		printf(" %s\n", options[i]);
	option = getInt(0, o);
	return option;
}

