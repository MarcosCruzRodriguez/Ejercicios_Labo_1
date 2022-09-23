/*
 ============================================================================
 Name        : Structs_practica.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define LARGO 30
#define TAM 3

typedef struct {
	char nombre[LARGO];
	char apellido[LARGO];
	char nombreCompleto[LARGO];
	/*int notaProgramacion;
	int notaMatematica;
	int notaIngles;
	float promedio;*/
}datosAlumno;

int main(void) {
	setbuf(stdout, NULL);
	int largoNombre;
	int largoApellido;

	datosAlumno cargarDatos[TAM];

	for(int i = 0; i < TAM; i++)
	{
		printf("Ingrese su nombre: \n");
		fflush(stdin);
		fgets(cargarDatos[i].nombre,LARGO,stdin);

		largoNombre = strlen(cargarDatos[i].nombre);
		cargarDatos[i].nombre[largoNombre-1] = '\0';

		printf("Ingrese su apellido: \n");
		fflush(stdin);
		fgets(cargarDatos[i].apellido,LARGO,stdin);

		largoApellido = strlen(cargarDatos[i].apellido);
		cargarDatos[i].apellido[largoApellido-1] = '\0';

		strcpy(cargarDatos[i].nombreCompleto,cargarDatos[i].apellido);
		strcat(cargarDatos[i].nombreCompleto,", ");
		strcat(cargarDatos[i].nombreCompleto,cargarDatos[i].nombre);

		strlwr(cargarDatos[i].nombreCompleto);

		cargarDatos[i].nombreCompleto[0] = toupper(cargarDatos[i].nombreCompleto[0]);

		for(int j = 0; j < strlen(cargarDatos[i].nombreCompleto); j++)
		{
			if(isspace(cargarDatos[i].nombreCompleto[j]))
			{
				j++;
				cargarDatos[i].nombreCompleto[j] = toupper(cargarDatos[i].nombreCompleto[j]);
			}
		}

		printf("El nombre completo ingresado es: %s\n",cargarDatos[i].nombreCompleto);
	}

	return 0;
}
