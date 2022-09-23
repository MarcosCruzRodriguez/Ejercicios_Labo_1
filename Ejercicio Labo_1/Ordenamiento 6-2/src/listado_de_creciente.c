/*
 * listado_de_creciente.c
 *
 *  Created on: 17 sep. 2022
 *      Author: rodri
 */

#include "listado_de_creciente.h"

int inicializacionArray(int arrayNumeros[], int size, int valor)
{
	int retorno = 0;

	if(arrayNumeros != NULL && size > 0)
	{
		for(int i = 0; i < size; i++)
		{
			arrayNumeros[i] = valor;
		}
		retorno = 1;
	}
	return retorno;
}

void pedirValores(int arrayNumeros[], int size, int *contadorNegativo)
{
	for(int i = 0; i < size; i++)
	{
		printf("\nIngrese un numero: \n");
		scanf("%d",&arrayNumeros[i]);
		if(arrayNumeros[i] < 0)
		{
			*contadorNegativo += 1;
		}
	}
}

void numerosCreciente(int array[], int size)
{
	int auxiliar;

	for(int i = 0; i < size-1; i++)
	{
		for(int j = i+1; j < size; j++)
		{
			if(array[i] > array[j])
			{
				auxiliar = array[i];
				array[i] = array[j];
				array[j] = auxiliar;
			}
		}
	}
}

void numerosDecreciente(int array[], int size)
{
	int auxiliar;

	for(int i = 0; i < size-1; i++)
	{
		for(int j = i+1; j < size; j++)
		{
			if(array[i] < array[j])
			{
				auxiliar = array[i];
				array[i] = array[j];
				array[j] = auxiliar;
			}
		}
	}
}

void imprimirLista(int arrayNumeros[], int size)
{
	printf("Listado 1: \n");
	for(int i = 0; i < size; i++)
	{
		printf("%d ,",arrayNumeros[i]);
	}
}
