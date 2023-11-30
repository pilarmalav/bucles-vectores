/*
 ============================================================================
 Name        : ejercicio.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "listapersonas.h"


int main(void) {

	int num=0;
		persona lista[MAXPERSONA];
		int opcion;
		persona per;
		//char nombre[MAXNOMBRE];

		do {
			puts("\nPrograma que almacena los datos de 50 personas");

			puts("1. mostrar la lista de todos los nombres. ");
			puts("2. Mostrar plas personas de una cierta edad. ");
			puts("3. mostrar las personas cuya inicial sea la que el usuario indique. ");
			puts("0. Salir del programa");

			puts("Introduce opcion (0-3)");
					fflush(stdout);
					scanf("%d", &opcion);

					switch(opcion) {
					case 1:
						printf("\nEn la lista hay ahora mismo %d personas", num);
						break;
					case 2:
						printf("\nListado de personas:\n ");
						mostrarlista(lista,num);
						break;
					case 3:
						puts("datos de las personas");
						puts("Introduce a la persona ");
						per=pedirpersona();

						puts("Añadiendo a la persona ");
						num=insertarpaciente(lista, num, per);
						break;
					}


				}while(opcion!=0);


				return EXIT_SUCCESS;


		}

