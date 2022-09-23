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

#ifndef DATOS_ALUMNO_H_
#define DATOS_ALUMNO_H_

typedef struct {
	char nombre[LARGO];
	int materiaUno;
	int materiaDos;
	int materiaTres;
	int sumaNotas;
	float promedio;
}datosAlumno;

datosAlumno ingresarDatos();

void mostrarDatos(datosAlumno datos);
float calcularPromedio(datosAlumno datos);

#endif /* DATOS_ALUMNO_H_ */
