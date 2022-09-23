/*
 * empleados.c
 *
 *  Created on: 18 sep. 2022
 *      Author: rodri
 */

#include "empleados.h"

int inicializacionArray(int legajos[], int edad[], float salario[], int sexo[], int size, int valor)
{
	int retorno = 0;

	if(legajos != NULL && edad != NULL && salario != NULL && sexo != NULL)
	{
		if(size > 0)
		{
			for(int i = 0; i < size; i++)
			{
				legajos[i] = valor;
			}
			retorno = 1;
		}
	}
	return retorno;
}


void ingresoDatos(int legajos[], int edad[], float salario[], int sexo[], int size)
{
	for(int i = 0; i < size; i++)
	{
		printf("Ingrese los ultimos cuatro digitos del legajo: \n");
		scanf("%d",&legajos[i]);
		while(legajos[i] < 1000 || legajos[i] > 9999)
		{
			printf("Reingrese los ultimos cuatro digitos del legajo: \n");
			scanf("%d",&legajos[i]);
		}
		printf("Ingrese la edad del empleado: \n");
		scanf("%d",&edad[i]);
		while(edad[i] < 18)
		{
			printf("Reingrese la edad del empleado: \n");
			scanf("%d",&edad[i]);
		}
		printf("Ingrese el salario del empleado: \n");
		scanf("%f",&salario[i]);
		while(salario[i] < 1)
		{
			printf("Reingrese el salario del empleado: \n");
			scanf("%f",&salario[i]);
		}

		printf("Ingrese el sexo del empleado: \n"
				"1. Femenino\n"
				"2. Masculino\n"
				"3. No binario\n");
		scanf("%d",&sexo[i]);
		while(sexo[i] < 1 || sexo[i] > 3)
		{
			printf("Ingrese el sexo del empleado: \n"
					"1. Femenino\n"
					"2. Masculino\n"
					"3. No binario\n");
			scanf("%d",&sexo[i]);
		}

	}
}

void promediosSalario(float salario[], int size, float *promedio)
{
	float acumulador = 0;

	for(int i = 0; i < size; i++)
	{
		acumulador += salario[i];
	}

	*promedio = acumulador / (float)size;
}

void listaNoBinarios(int sexo[], int size)
{
	for(int i = 0; i < size; i++)
	{
		if(sexo[i] == 3)
		{
			printf("En el indice %d, tenemos un empleado de sexo no binario\n",i);
		}
	}
}
