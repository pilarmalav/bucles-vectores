/*
 * listapersonas.c
 *
 *  Created on: 29 nov 2023
 *      Author: Usuario
 */
#include "listapersonas.h"
#include <string.h>

int inserpersona(persona lista[MAXPERSONA], int tam, persona p) {
	if (tam >=MAXPERSONA) {
		return tam;
	}

	lista[tam]=p;
	tam++;
	return tam;


//	strcpy(lista[tam].nombre, p.nombre);
//	lista[tam].direccion=p.direccion;
//	lista[tam].telefona=p.telefono;
//  lista[tam].edad=p.edad
}

/**
* Funcion que busca una persona por su nombre dentro de la lista
* Devuelve 1 si ha encontrado a la persona o 0 en caso  contrario
* Si se ha encntrado se devuelve a la persona en la variable p
* pasada por referencia
*/
int buscarpersona(persona lista[MAXPERSONA], int tam, char nombre[MAXNOMBRE] , persona * p){
   int i;
   for ( i=0; i<tam; i++) {
	   if(strcmp(nombre, lista[i].nombre) ==0  ) {
//			  strcpy(p->nombre, lista[i].nombre);
//			  p->direccion=lista[i].direccion;
//			  p->telefono=lista[i].telefono;
//            p->edad=lista[i].edad

		  *p=lista[i];
		  return 1;
	   }
   }
   return 0;
}




