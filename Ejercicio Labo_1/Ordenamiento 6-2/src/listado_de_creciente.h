/*
 * listado_de_creciente.h
 *
 *  Created on: 17 sep. 2022
 *      Author: rodri
 */
#include <stdio.h>
#include <stdlib.h>

#ifndef LISTADO_DE_CRECIENTE_H_
#define LISTADO_DE_CRECIENTE_H_

int inicializacionArray(int arrayNumeros[], int size, int valor);
void pedirValores(int arrayNumeros[], int size, int *contadorNegativo);
void numerosCreciente(int array[], int size);
void numerosDecreciente(int array[], int size);
void imprimirLista(int arrayNumeros[], int size);

#endif /* LISTADO_DE_CRECIENTE_H_ */
