/*
 ============================================================================
 Marcos Cruz Rodriguez, Div D
 Ejercicio 5-1 vectores

 Pedir 5 números enteros, guardarlos en un Array. Calcular la sumatorio
 de los mismos y mostrar los impares ingresados.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "array_suma.h"

int main(void)
{
	setbuf(stdout, NULL);
	int numerosEnteros[5];
	int total;
	int error;

	inicializacionArray(numerosEnteros, 5, -1);
	error = pedirValores(numerosEnteros, 5, &total);

	if(error == 1)
	{
		printf("\nSe han ingresado los datos correctamente\n");
	}

	printf("La sumatoria de los datos da: %d\n", total);

	return 0;
}
