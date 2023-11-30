/*
 ============================================================================
 Name        : Bucles03.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description :  Algoritmo que imprima la tabla de multiplicar correspondiente a un número
  	  	  	    comprendido entre uno y diez, introducido por el usuario, usando un esquema for.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	unsigned tabla, i;

	puts("Tablas de multiplicar");
	// muestra una debaja de la otra
//	for(tabla=1; tabla<=10;tabla++) {
//		for (i=0;i<=10; i++) {
//			printf("%u x %u = %u\n", tabla,i,tabla*i);
//		}
//		printf("\n");
//	}

	// muestra todas las tablas a la vez
	for (i=0;i<=10; i++) {
		for(tabla=1; tabla<=10;tabla++) {
			printf("%u x %u = %u\t", tabla,i,tabla*i);
		}
		printf("\n");
	}


	return EXIT_SUCCESS;
}
