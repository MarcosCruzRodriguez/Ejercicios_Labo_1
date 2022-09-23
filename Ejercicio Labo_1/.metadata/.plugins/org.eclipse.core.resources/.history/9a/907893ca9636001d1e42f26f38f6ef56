/*
 ============================================================================
 Marcos Cruz Rodriguez, Div D
 Ejercicio 5-2 vectores

 Hacer una función que calcule el promedio de los valores del Array que
 recibe y me devuelva el promedio.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "array_promedio.h"

int main(void)
{
	setbuf(stdout, NULL);
	int numerosEnteros[5];
	int datosAcumulados;
	float promedio;

	inicializacionArray(numerosEnteros, 5, -1);
	pedirValores(numerosEnteros, 5, &datosAcumulados);
	promedioArray(5, datosAcumulados, &promedio);

	printf("\nEl promedio de los valores array es: %.2f\n", promedio);

	return 0;
}
