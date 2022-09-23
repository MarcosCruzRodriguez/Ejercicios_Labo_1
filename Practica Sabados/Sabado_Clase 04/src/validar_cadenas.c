/*
 * validar_cadenas.c
 *
 *  Created on: 22 sep. 2022
 *      Author: rodri
 */

#include "validar_cadenas.h"

int caracteresNumero(char numeroChr[])
{
	int i;
	int large;
	int retorno = 0;

	large = strlen(numeroChr);

	for(i = 0; i < large; i++)
	{
		if(!(isdigit(numeroChr[i])))
		{
			printf("¡ERROR! Ingrese solo numeros\n");
			return retorno;
		}
	}

	retorno = 1;
	return retorno;
}

int esNumerico(char array[])
{
	int i = 0;

	while(array[i] != '\0')
	{
		if(array[i] < '0' || array[i] > '9')
		{
			return 0;
		}
		else
		{
			i++;
		}
	}
	return 1;
}

int caracteresAlfabeticos(char letras[])
{
	int i;
	int largo;
	int retorno = 0;

	largo = strlen(letras);
	letras[largo-1] = '\0';

	for(i = 0; i < largo; i++)
	{
		if(!(isalpha(letras[i])))
		{
			printf("¡ERROR! Ingrese solo letras\n");
			return retorno;
		}
	}

	retorno = 1;
	return retorno;
}
