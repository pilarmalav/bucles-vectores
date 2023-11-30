/*
 * persona.h
 *
 *  Created on: 29 nov 2023
 *      Author: Usuario
 */

#ifndef PERSONA_H_
#define PERSONA_H_

#define MAX 50
typedef struct {
	char nombre[MAX];
	char direccion;
	int telefono;
	int edad;
} persona;


persona pedirpersona(void);

void mostrarpersona(persona p);








#endif /* PERSONA_H_ */
