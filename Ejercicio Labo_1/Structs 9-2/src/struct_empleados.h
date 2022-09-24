/*
 * struct_empleados.h
 *
 *  Created on: 23 sep. 2022
 *      Author: rodri
 */
#include <stdio.h>
#include <stdlib.h>
#define CANTIDAD 300

#ifndef STRUCT_EMPLEADOS_H_
#define STRUCT_EMPLEADOS_H_

typedef struct {
	int id;
	char name[51];
	char lastName[51];
	float salary;
	int sector;
	int isEmpty;
}sEmpleados;

int inicializarEmpleado(sEmpleados valorEmpty);
int buscarLibre(sEmpleados valorEmpty);
void menuOpciones(int *opcion);

#endif /* STRUCT_EMPLEADOS_H_ */
