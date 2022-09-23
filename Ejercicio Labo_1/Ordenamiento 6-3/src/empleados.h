/*
 * empleados.h
 *
 *  Created on: 18 sep. 2022
 *      Author: rodri
 */
#include <stdio.h>
#include <stdlib.h>

#ifndef EMPLEADOS_H_
#define EMPLEADOS_H_

int inicializacionArray(int legajos[], int edad[], float salario[], int sexo[], int size, int valor);
void ingresoDatos(int legajos[], int edad[], float salario[], int sexo[], int size);
void promediosSalario(float salario[], int size, float *promedio);
void listaNoBinarios(int sexo[], int size);

#endif /* EMPLEADOS_H_ */
