/*
 * maximo_array.c
 *
 *  Created on: 17 sep. 2022
 *      Author: rodri
 */

#include "maximo_array.h"

void inicializacionArray(int array[], int size, int valor)
{
	for(int i = 0; i < size; i++)
	{
		array[i] = valor;
	}
}

void pedirEnteros(int array[], int size)
{
	for(int i = 0; i < size; i++)
	{
		printf("Ingrese un numero: \n");
		scanf("%d",&array[i]);
	}
}

void maximoEntero(int array[], int size, int *numeroMaximo)
{
	int banderaMaxima = 0;

	for(int i = 0; i < size; i++)
	{
		if(array[i] > *numeroMaximo || banderaMaxima == 0)
		{
			*numeroMaximo = array[i];
			banderaMaxima = 1;
		}
	}
}
