#include "../inc/exercises.h"

void chargeRoutes(int r, int c, int routes[r][c]) {
	for (int i=0; i<5; i++) {
		for (int j=i; j<5; j++) {
			if (i == j)
				continue;
			printf(" Distancia entre ciudad %d y %d\n > ", i+1, j+1);
			scanf("%d", &routes[i][j]);
			routes[j][i] = routes[i][j];
		}
	}
}

void exercise15() {
	printf(" Ejercicio 15\n");
	int r = 5, c = 5;
	int routes[r][c], first_city, second_city, relations = 0;
	chargeRoutes(r, c, routes);

	// Modify routes
	printf("Inserte las ciudades a modificar\n Primer ciudad\n > ");
	scanf("%d", &first_city);
	first_city -= 1;
	printf(" Segunda ciudad\n > ");
	scanf("%d", &second_city);
	second_city -= 1;
	printf(" Distancia\n > ");
	scanf("%d", &routes[first_city][second_city]);
	routes[second_city][first_city] = routes[first_city][second_city];
	// Show routes, count relations
	for (int i=0; i<5; i++) {
		for (int j=i; j<5; j++) {
			if (i == j)
				continue;
			printf(" Distancia entre ciudades %d y %d = %d\n", i+1, j+1, routes[i][j]);
			if (routes[i][j] != 0)
				relations++;
		}
	}
	printf(" Relaciones entres ciudades %d\n", relations);
	printf(" Ciudades sin ruta %d\n", 10 - relations);
	// Return distance
	printf("Inserte las ciudades\n Primer ciudad\n > ");
	scanf("%d", &first_city);
	printf(" Segunda ciudad\n > ");
	scanf("%d", &second_city);
	printf(" Distancia entre %d y %d = %d\n",
		first_city, second_city, routes[first_city-1][second_city-1]);
}
