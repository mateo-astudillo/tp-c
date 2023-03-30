#include "../inc/exercises.h"

static void chargeRoutes(int r, int c, int routes[r][c]) {
	for (int i=0; i<5; i++) {
		for (int j=i; j<5; j++) {
			if (i == j)
				continue;
			printf(" Distancia entre ciudad %d y %d\n", i+1, j+1);
			routes[i][j] = getInt(0, 500);
			routes[j][i] = routes[i][j];
		}
	}
}

static void modifyRoutes(int r, int c, int routes[r][c]) {
	int first, second, row, col;
	printf(" Inserte las ciudades a modificar\n Primer ciudad\n");
	first= getInt(1, 5);
	printf(" Segunda ciudad\n");
	second = first;
	while (first == second)
		second = getInt(1, 5);
	printf(" Distancia\n");
	row = first - 1;
	col = second - 1;
	routes[row][col] = getInt(0, 500);
	routes[col][row] = routes[row][col];
}

static void showRoutes(int r, int c, int routes[r][c]) {
	for (int i=0; i<5; i++) {
		for (int j=i; j<5; j++) {
			if (i == j)
				continue;
			printf(" Distancia entre ciudades %d y %d = %d\n", i+1, j+1, routes[i][j]);
		}
	}
}

static void countRelations(int r, int c, int routes[r][c]) {
	int relations = 0;
	for (int i=0; i<5; i++) {
		for (int j=i; j<5; j++) {
			if (i == j)
				continue;
			if (routes[i][j] != 0)
				relations++;
		}
	}
	printf(" Relaciones entres ciudades %d\n", relations);
	printf(" Ciudades sin ruta %d\n", 10 - relations);
}

static void distanceBetween(int r, int c, int routes[r][c]) {
	int first = 0, second = 0;
	printf("Inserte las ciudades\n Primer ciudad\n");
	first = getInt(1, 5);
	printf(" Segunda ciudad\n");
	second = getInt(1, 5);
	printf(" Distancia entre %d y %d = %d\n", first, second, routes[first-1][second-1]);
}

void exercise15() {
	printf(" Ejercicio 15\n");
	int r = 5, c = 5, option = 1, state_routes = 0;
	int routes[r][c];
	char *options[] = {
		"0 - Salir",
		"1 - Cargar rutas",
		"2 - Modificar ruta",
		"3 - Mostrar distancia entre ciudades",
		"4 - Contar relaciones entre ciudades",
		"5 - Ver distancia entre ciudades"
	};
	int options_length = sizeof(options) / sizeof(options[0]);
	while (option != 0) {
		option = menu(0, options_length, options);
		switch (option) {
			case 0:
				printf(" Fin\n");
				break;
			case 1:
				chargeRoutes(r, c, routes);
				state_routes = 1;
				break;
			case 2:
				modifyRoutes(r, c, routes);
				break;
			case 3:
				if (state_routes)
					showRoutes(r, c, routes);
				break;
			case 4:
				countRelations(r, c, routes);
				break;
			case 5:
				distanceBetween(r, c, routes);
				break;
			default:
				break;
		}
		system(CLEAR);
		sleep(2);
	}
}
