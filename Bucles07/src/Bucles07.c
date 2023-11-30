/*
 ============================================================================
 Name        : Bucles07.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description :  Haz un programa que lea tres números, inicio, fin y num. Deberá mostrar en
 	 	 	 	pantalla los números comprendidos entre incio y fin que sean múltiplos de num.
 	 	 	 	Por ejemplo, si me dan como incio y fin, 2 y 11, y como num 3, el resultado que
 	 	 	 	debe mostrar es “3 6 9”
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1, num2, multiplo, mayor, menor,i;

	puts("Muestra los impares coprendidos entre 2 numeros multiplos del tercero");

	printf("Introduce dos números: ");
	fflush(stdout);
	scanf("%d %d", &num1,&num2);

	printf("Introduce multiplo: ");
	fflush(stdout);
	scanf("%d",&multiplo);

	if(num1>num2) {
		mayor=num1;
		menor=num2;
	}else {
		mayor=num2;
		menor=num1;
	}

//	for (i = menor; i <= mayor; i++) {
//		if(i%multiplo==0) {
//			printf("%d\n",i);
//		}
//	}


//	while(menor%multiplo!=0) {
//		menor++;
//	}
//	for (i = menor; i <= mayor; i=i+multiplo) {
//		printf("%d\n",i);
//	}


	menor=menor+multiplo-menor%multiplo;
	for (i = menor; i <= mayor; i=i+multiplo) {
		printf("%d\n",i);
	}

	return EXIT_SUCCESS;
}
