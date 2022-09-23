/*
 * letras.c
 *
 *  Created on: 22 sep. 2022
 *      Author: rodri
 */

#include "letras.h"

int esLetraConEspacio(char *pResultado)
{
	int retorno = 0;
	int largo;

	largo = strlen(pResultado);
	pResultado[largo-1] = '\0';

	for(int i = 0; i < largo; i++)
	{
		if((pResultado[i] != '\0') && (pResultado[i] < 'a' || pResultado[i] > 'z') && (pResultado[i] < 'A' || pResultado[i] > 'Z') && (pResultado[i] != ' '))
		{
			printf("¡ERROR!\n");
			return retorno;
		}
	}
	retorno = 1;
	return retorno;
}

int esSoloLetra(char *pResultado)
{
	int retorno = 0;
	int largo;

	largo = strlen(pResultado);
	pResultado[largo-1] = '\0';

	for(int i = 0; i < largo; i++)
	{
		if((pResultado[i] != '\0') && (pResultado[i] < 'a' || pResultado[i] > 'z') && (pResultado[i] < 'A' || pResultado[i] > 'Z'))
		{
			printf("¡ERROR!\n");
			return retorno;
		}
	}
	retorno = 1;
	return retorno;
}
