#include "../inc/main.h"

void slp(int seconds) {
  #ifdef _WIN32
    Sleep(seconds*1000);
  #else
    sleep(seconds);
  #endif
}


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

float getFloat(int min, int max) {
	char temp[100];
	float number = min - 1;
	while (number < min || number > max) {
		printf(" (%d - %d)\n > ", min, max);
		scanf("%s", temp);
		number = atof(temp);
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


