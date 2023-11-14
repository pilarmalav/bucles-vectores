/*
 ============================================================================
 Name        : AreaTriangulo2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
		float base, altura;
		float area;

		puts("Programa que calcula el área de un triángulo");
		printf("Introduce la altura: ");

		fflush(stdout);
		scanf("%f", &altura);

		puts("Introduce la base: ");
		fflush(stdout);
		scanf("%f", &base);

		area=base*altura/2;
		printf("El área del triángulo es %f\n",area);
		return 0;

	}
