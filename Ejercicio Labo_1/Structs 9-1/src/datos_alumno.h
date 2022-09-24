/*
 * datos_alumno.h
 *
 *  Created on: 22 sep. 2022
 *      Author: rodri
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define LARGO 30
#define CANT_MATERIAS 5


#ifndef DATOS_ALUMNO_H_
#define DATOS_ALUMNO_H_

typedef struct {
	char nombre[LARGO];
	int materias[CANT_MATERIAS];
	int sumaNotas;
	float promedio;
}sAlumno;

int inicializacionArray(sAlumno ingresoDatos, int tam, int valor);
void cargarDatos(sAlumno* ingresoDatos, int tam, int cantM);
void notasAprobadas(sAlumno* sumaMaterias, int cantM, int *contadorMateriasAprobadas);
float promedioNotas(sAlumno* promedioMaterias, int contadorAprobadas);

#endif /* DATOS_ALUMNO_H_ */
