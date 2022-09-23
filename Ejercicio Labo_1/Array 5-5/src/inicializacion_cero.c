/*
 * inicializacion_cero.c
 *
 *  Created on: 17 sep. 2022
 *      Author: rodri
 */

#include "inicializacion_cero.h"

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

void pedirValores(int arrayNumeros[], int size)
{
	for(int i = 0; i < size; i++)
	{
		printf("\nIngrese un numero: \n");
		scanf("%d",&arrayNumeros[i]);
		while(arrayNumeros[i] == 0)
		{
			printf("\nReingrese un numero distinto de 0 y entre -50 y 75: \n");
			scanf("%d",&arrayNumeros[i]);
			while(arrayNumeros[i] < -50 || arrayNumeros[i] > 75)
			{
				printf("\nReingrese un numero distinto de 0 y entre -50 y 75: \n");
				scanf("%d",&arrayNumeros[i]);
			}
		}
	}
}

void numerosPositivos(int arrayNumeros[], int size, float *promedioPositivos)
{
	int contadorPositivos = 0;
	int acumuladorPositivos = 0;


	for(int i = 0; i < size; i++)
	{
		if(arrayNumeros[i] > 0)
		{
			contadorPositivos++;
			acumuladorPositivos += arrayNumeros[i];
		}
	}
	*promedioPositivos = acumuladorPositivos / (float)contadorPositivos;
}
