/*
 * validar_caracteres.c
 *
 *  Created on: 22 sep. 2022
 *      Author: rodri
 */

#include "validar_caracteres.h"

int validarAlfanumerico(char array[])
{
	int i = 0;
	int retorno = 0;
	int largo;

	largo = strlen(array);
	array[largo-1] = '\0';

	for(i = 0; i < largo; i++)
	{
		if((array[i] != '\0') && (array[i] != ' ') && (array[i] < 'a' || array[i] > 'z') && (array[i] < 'A' || array[i] > 'Z') && (array[i] < '0' || array[i] > '9'))
		{
			printf("¡ERROR!\n");
			return retorno;
		}
	}
	retorno = 1;
	return retorno;
}

int validarTelefono(char array[])
{
	int i = 0;
	int retorno = 0;
	int largo;

	largo = strlen(array);
	array[largo-1] = '\0';

	for(i = 0; i < 10; i++)
	{
		if((array[i] != '\0') && (array[i] != '-') && (array[i] < '0' || array[i] > '9'))
		{
			printf("¡ERROR!\n");
			return retorno;
		}
		if(array[0] != 52)
		{
			printf("El primer numero que debe ingresar es 4\n");
			return retorno;
		}
		if(array[4] != '-')
		{
			printf("Debe ingresar un - (GION MEDIO) despues de los primeros cuatro digitos\n");
			return retorno;
		}
	}

	retorno = 1;
	return retorno;
}

/*
//validacion de characteres numericos
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

//validacion de characteres alfabeticos
int esAlfabetico(char array[])
{
	int i = 0;

	while(array[i] != '\0')
	{
		if((array[i] != '\0') && (array[i] < 'a' || array[i] > 'z') && (array[i] < 'A' || array[i] > 'Z'))
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
*/
