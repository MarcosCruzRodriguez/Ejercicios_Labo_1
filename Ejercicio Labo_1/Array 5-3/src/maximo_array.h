/*
 * maximo_array.h
 *
 *  Created on: 17 sep. 2022
 *      Author: rodri
 */
#include <stdio.h>
#include <stdlib.h>

#ifndef MAXIMO_ARRAY_H_
#define MAXIMO_ARRAY_H_

void inicializacionArray(int array[], int size, int valor);
void pedirEnteros(int array[], int size);
void maximoEntero(int array[], int size, int *numeroMaximo);

#endif /* MAXIMO_ARRAY_H_ */
