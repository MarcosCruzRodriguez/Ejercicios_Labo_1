/*
 * datos_alumno.c
 *
 *  Created on: 22 sep. 2022
 *      Author: rodri
 */

#include "datos_alumno.h"

int inicializacionArray(sAlumno ingresoDatos, int tam, int valor)
{
	int retorno = 0;

	if(ingresoDatos.materias != NULL && tam > 0)
	{
		for(int i = 0; i < tam; i++)
		{
			ingresoDatos.materias[i] = valor;
		}
		retorno = 1;
	}
	return retorno;
}

void cargarDatos(sAlumno* ingresoDatos, int tam, int cantM) {
	int largoNombre;

	printf("Ingrese su nombre: \n");
	fflush(stdin);
	fgets(ingresoDatos->nombre,LARGO,stdin);

	largoNombre = strlen(ingresoDatos->nombre);
	ingresoDatos->nombre[largoNombre-1] = '\0';

	ingresoDatos->nombre[0] = toupper(ingresoDatos->nombre[0]);

	for(int i = 0; i < cantM; i++) {
		printf("Ingrese la nota de sus materias\n"
				"Materia: %d\n",i+1);
		scanf("%d",&ingresoDatos->materias[i]);
		while(ingresoDatos->materias[i] < 1 || ingresoDatos->materias[i] > 10) {
			printf("Ingrese la nota de sus materias\n"
					"Materia: %d\n",i+1);
			scanf("%d",&ingresoDatos->materias[i]);
		}
	}
}

void notasAprobadas(sAlumno* sumaMaterias, int cantM, int *contadorMateriasAprobadas) {
	int acumulador = 0;

	for(int i = 0; i < cantM; i++) {
		if(sumaMaterias->materias[i] > 6) {
			acumulador += sumaMaterias->materias[i];
			*contadorMateriasAprobadas += 1;
		}
	}
	sumaMaterias->sumaNotas = acumulador;
	printf("%d\n",*contadorMateriasAprobadas);
}

float promedioNotas(sAlumno* promedioMaterias, int contadorAprobadas) {
	float auxPromedio;

	auxPromedio = (float)promedioMaterias->sumaNotas / contadorAprobadas;

	return auxPromedio;

}
