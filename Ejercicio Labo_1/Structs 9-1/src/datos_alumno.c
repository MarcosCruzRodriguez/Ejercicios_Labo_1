/*
 * datos_alumno.c
 *
 *  Created on: 22 sep. 2022
 *      Author: rodri
 */

#include "datos_alumno.h"

datosAlumno ingresarDatos()
{
	int largoNombre;

	datosAlumno cargaDatos;

	printf("Ingrese su nombre: \n");
	fflush(stdin);
	fgets(cargaDatos.nombre,LARGO,stdin);

	largoNombre = strlen(cargaDatos.nombre);
	cargaDatos.nombre[largoNombre-1] = '\0';

	cargaDatos.nombre[0] = toupper(cargaDatos.nombre[0]);

	printf("Ingrese la primera nota: \n");
	scanf("%d",&cargaDatos.materiaUno);
	while(cargaDatos.materiaUno < 1 || cargaDatos.materiaUno > 10)
	{
		printf("Reingrese la primera nota: \n");
		scanf("%d",&cargaDatos.materiaUno);
	}
	printf("Ingrese la segunda nota: \n");
	scanf("%d",&cargaDatos.materiaDos);
	while(cargaDatos.materiaDos < 1 || cargaDatos.materiaDos > 10)
	{
		printf("Reingrese la segunda nota: \n");
		scanf("%d",&cargaDatos.materiaDos);
	}
	printf("Ingrese la tercera nota: \n");
	scanf("%d",&cargaDatos.materiaTres);
	while(cargaDatos.materiaTres < 1 || cargaDatos.materiaTres > 10)
	{
		printf("Reingrese la tercera nota: \n");
		scanf("%d",&cargaDatos.materiaTres);
	}

	return cargaDatos;
}

void mostrarDatos(datosAlumno datos)
{
	printf("El nombre es: %s\n",datos.nombre);
	printf("Su primera nota fue: %d\n",datos.materiaUno);
	printf("Su segunda nota fue: %d\n",datos.materiaDos);
	printf("Su tercera nota fue: %d\n",datos.materiaTres);
}

float calcularPromedio(datosAlumno datos)
{
	float promedioCalculado;

	datos.sumaNotas = datos.materiaUno + datos.materiaDos + datos.materiaTres;

	promedioCalculado = (float)datos.sumaNotas / 3;

	return promedioCalculado;
}
