/*
 * calculos_array.h
 *
 *  Created on: 17 sep. 2022
 *      Author: rodri
 */
#include <stdio.h>
#include <stdlib.h>

#ifndef CALCULOS_ARRAY_H_
#define CALCULOS_ARRAY_H_

int inicializacionArray(int array[], int size, int valor);
void pedirValores(int array[], int size);
void busquedaDatos(int array[], int size, int *contadorNegativos, int *sumaImpares, int *parMaximo);
void listadoNumeros(int array[], int size);

#endif /* CALCULOS_ARRAY_H_ */
