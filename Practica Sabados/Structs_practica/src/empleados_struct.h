/*
 * empleados_struct.h
 *
 *  Created on: 22 sep. 2022
 *      Author: rodri
 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define LARGO 30
#define TAM 3

#ifndef EMPLEADOS_STRUCT_H_
#define EMPLEADOS_STRUCT_H_

typedef struct {
	char nombre[LARGO];
	char appelido[LARGO];
	char nombreCompleto[LARGO];
	int legajo;
	int edad;
	int salario;
}datosEmpleados;

void cargarDatos(datosEmpleados ingresarDatos, int tam);

#endif /* EMPLEADOS_STRUCT_H_ */
