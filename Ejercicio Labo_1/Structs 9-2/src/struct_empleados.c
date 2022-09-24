/*
 * struct_empleados.c
 *
 *  Created on: 23 sep. 2022
 *      Author: rodri
 */

#include "struct_empleados.h"

void menuOpciones(int *opcion)
{
	printf("\n Menu opciones: \n"
			"\n1- ALTAS \n"
			"2- MODIFICAR \n"
			"3- BAJA \n"
			"4- INFORMAR \n"
			"5- SALIR \n");
	printf("Ingrese una opcion del menu: \n");
	scanf("%d",opcion);
}

int inicializarEmpleado(sEmpleados valorEmpty)
{
	int retorno = 0;

	if(valorEmpty != NULL && CANTIDAD > 0)
	{
		for(int i = 0; i < CANTIDAD; i++)
		{
			valorEmpty[i].isEmpty = 0;
		}
		retorno = 1;
	}
	return retorno;
}

int buscarLibre(sEmpleados valorEmpty)
{
	int retorno = -1;

	if(valorEmpty != NULL && CANTIDAD > 0)
	{
		for(int i = 0; i < CANTIDAD; i++)
		{
			if(valorEmpty[i].isEmpty == 0)
			{
				retorno = i;
				break;
			}
		}
	}

	return retorno;
}
