/*
 * empleados_struct.c
 *
 *  Created on: 22 sep. 2022
 *      Author: rodri
 */

#include "empleados_struct.h"

void cargarDatos(datosEmpleados ingresarDatos, int tam)
{
	int largoNombre;
	int largoApellido;

	for(int i = 0; i < tam; i++)
	{
		printf("Ingrese su nombre: \n");
		fflush(stdin);
		fgets(ingresarDatos[i].nombre,LARGO,stdin);

		largoNombre = strlen(ingresarDatos[i].nombre);
		ingresarDatos[i].nombre[largoNombre-1] = '\0';

		printf("Ingrese su apellido: \n");
		fflush(stdin);
		fgets(ingresarDatos[i].appelido,LARGO,stdin);

		largoApellido = strlen(ingresarDatos[i].appelido);
		ingresarDatos[i].appelido[largoApellido-1] = '\0';

		strcpy(ingresarDatos[i].nombreCompleto,ingresarDatos[i].appelido);
		strcat(ingresarDatos[i].nombreCompleto,", ");
		strcat(ingresarDatos[i].nombreCompleto,ingresarDatos[i].nombre);

		strlwr(ingresarDatos[i].nombreCompleto);

		//printf("El nombre ingresado es: %s\n",cargaDatos[i].nombreCompleto);
		//strlen(cargaDatos[i].nombreCompleto);

		ingresarDatos[i].nombreCompleto[0] = toupper(ingresarDatos[i].nombreCompleto[0]);

		for(int j = 0; j < strlen(ingresarDatos[i].nombreCompleto); j++)
		{
			if(isspace(ingresarDatos[i].nombreCompleto[j]))
			{
				j++;
				ingresarDatos[i].nombreCompleto[j] = toupper(ingresarDatos[i].nombreCompleto[j]);
			}
		}

		printf("Ingrese los ultimos 4 digitos del legajo: \n");
		scanf("%d",&ingresarDatos[i].legajo);
		while(ingresarDatos[i].legajo < 1000 || ingresarDatos[i].legajo > 9999)
		{
			printf("¡ERROR! Reingrese los ultimos 4 digitos del legajo: \n");
			scanf("%d",&ingresarDatos[i].legajo);
		}

		printf("Ingrese su edad: \n");
		scanf("%d",&ingresarDatos[i].edad);
		while(ingresarDatos[i].edad < 18)
		{
			printf("¡ERROR! Reingrese su edad: \n");
			scanf("%d",&ingresarDatos[i].edad);
		}

		printf("Ingrese su salario: \n");
		scanf("%d",&ingresarDatos[i].salario);
		while(ingresarDatos[i].salario < 1)
		{
			printf("¡ERROR! Reingrese su salario: \n");
			scanf("%d",&ingresarDatos[i].salario);
		}
	}
}
