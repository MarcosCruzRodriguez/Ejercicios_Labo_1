/*
 * array_promedio..c
 *
 *  Created on: 10 sep. 2022
 *      Author: rodri
 */

#include "array_promedio.h"

void inicializacionArray(int array[], int size, int valor)
{
	for(int i = 0; i < size; i++)
	{
		array[i] = valor;
	}
}

void pedirValores(int array[], int size, int *resultado)
{
	int acumuladorIngresos = 0;

	for(int i = 0; i < size; i++)
	{
		printf("\nIngrese cinco numeros enteros: \n");
		scanf("%d",&array[i]);

		acumuladorIngresos += array[i];
	}

	*resultado = acumuladorIngresos;
}

void promedioArray(int size, int total, float *promedioArray)
{
	*promedioArray = (float)total / size;
}
