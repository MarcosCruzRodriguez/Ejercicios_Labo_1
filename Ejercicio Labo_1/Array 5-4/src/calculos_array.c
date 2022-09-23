/*
 * calculos_array.c
 *
 *  Created on: 17 sep. 2022
 *      Author: rodri
 */

#include "calculos_array.h"

int inicializacionArray(int array[], int size, int valor)
{
	int retorno = 0;

	if(array != NULL && size > 0)
	{
		for(int i = 0; i < size; i++)
		{
			array[i] = valor;
		}
		retorno = 1;
	}
	return retorno;
}

void pedirValores(int array[], int size)
{
	for(int i = 0; i < size; i++)
	{
		printf("\nIngrese un numero: \n");
		scanf("%d",&array[i]);
		while(array[i] < -100 || array[i] > 100)
		{
			printf("\nReingrese un numero entre -100 y 100: \n");
			scanf("%d",&array[i]);
		}
	}
}

void busquedaDatos(int array[], int size, int *contadorNegativos, int *sumaImpares, int *parMaximo)
{
	int banderaMaxima = 0;

	for(int i = 0; i < size; i++)
	{
		if(array[i] % 2 == 0)
		{
			if(array[i] > *parMaximo || banderaMaxima == 0)
			{
				*parMaximo = array[i];
				banderaMaxima = 1;
			}
		}
		else
		{
			if(array[i] % 2 == 1)
			{
				*sumaImpares += array[i];
			}
		}

		if(array[i] < 0)
		{
			*contadorNegativos+= 1;
		}
	}
}

void listadoNumeros(int array[], int size)
{
	for(int i = 0; i < size; i++)
	{
		printf("\nListado de numeros: %d\n",array[i]);
	}
	printf("\n");
	for(int i = 0; i < size; i++)
	{
		if(array[i] > 15)
		{
			printf("Numeros mayores a 15: %d\n",array[i]);
		}
	}
	printf("\n");
	for(int i = 0; i < size; i++)
	{
		if(array[i] % 2 == 1)
		{
			printf("Numero impar: %d\nEn la posicion: %d\n",array[i],i);
		}
	}
}
