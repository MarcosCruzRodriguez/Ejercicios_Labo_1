/*
 * empleados_struct.c
 *
 *  Created on: 22 sep. 2022
 *      Author: rodri
 */

#include "empleados_struct.h"

int caracteresNumero(char numeroChr[]) {
	int i;
	int large;
	int retorno = 1;

	large = strlen(numeroChr);

	for(i = 0; i < large; i++) {
		if(!(isdigit(numeroChr[i]))) {
			printf("¡ERROR! ingrese solo numeros\n");
			retorno = 0;
			break;
		}
	}

	return retorno;
}

int caracteresLetras(char letrasChr[]) {
	int i;
	int large;
	int retorno = 1;

	large = strlen(letrasChr);

	for(i = 0; i < large; i++) {
		if(!(isalpha(letrasChr[i]))) {
			printf("¡ERROR! ingrese solo letras\n");
			retorno = 0;
			break;
		}
	}

	return retorno;
}
