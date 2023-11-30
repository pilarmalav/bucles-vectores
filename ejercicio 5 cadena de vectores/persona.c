/*
 * persona.c
 *
 *  Created on: 29 nov 2023
 *      Author: Usuario
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include "persona.h"

persona pedirpersona(void) {
		persona p;

		puts("Nombre: ");
		fflush(stdout);
		p.nombre[strlen(p.nombre)-1]='\0';


		puts("direccion; ");
		fflush(stdout);
		scanf("%s", &(p.direccion));


		puts("telefono: ");
		fflush(stdout);
		scanf("%d", &(p.telefono));

		puts("edad: ");
		fflush(stdout);
		scanf("%d", &(p.edad));


		return p;
	}


