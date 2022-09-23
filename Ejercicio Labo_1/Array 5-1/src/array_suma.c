/*
 * array_suma.c
 *
 *  Created on: 10 sep. 2022
 *      Author: rodri
 */

#include "array_suma.h"

void inicializacionArray(int array[], int size, int valor)
{
	for(int i = 0; i < size; i++)
	{
		array[i] = valor;
	}
}

int pedirValores(int array[], int size, int *resultado)
{
	int retorno = 0;
	int acumuladorIngresos = 0;

	for(int i = 0; i < size; i++)
	{
		printf("\nIngrese cinco numeros enteros: \n");
		scanf("%d",&array[i]);

		if(array[i] % 2 != 0)
		{
			printf("\nEl numero ingresado es impar -> %d",array[i]);
			retorno = 1;
		}
		acumuladorIngresos += array[i];
	}
	if(retorno != 0)
	{
		*resultado = acumuladorIngresos;
	}

	return retorno;
}
