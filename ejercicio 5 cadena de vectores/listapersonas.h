/*
 * listapersonas.h
 *
 *  Created on: 29 nov 2023
 *      Author: Usuario
 */

#ifndef LISTAPERSONAS_H_
#define LISTAPERSONAS_H_
#define MAXPERSONA 50

#include "persona.h"

 int insertarpersona(persona lista[MAXPERSONA], int tam, persona p);

   /**
    * Funcion que busca a una persona por su nombre dentro de la lista
    * Devuelve 1 si ha encontrado a la persona o 0 en caso  contrario
    * Si se ha encntrado se devuelve a la persona la variable p
    * pasada por referencia
    */


 int buscarpersona(persona lista[MAXPERSONA], int tam, char nombre[MAXNOMBRE] , persona * p);
 /**
    * Procedimiento nos muestra el número de personas que hay en la lista
    */
 void mostrarlista(persona lista[MAXPERSONA], int tam);





#endif /* LISTAPERSONAS_H_ */
