/*
 * pedir_numeros.c
 *
 *  Created on: 17 sep. 2022
 *      Author: rodri
 */

#include "pedir_numeros.h"

void pedirNumeros(int *numeroUno, int *numeroDos)
{
	printf("Ingrese el primer numero: \n");
	scanf("%d",numeroUno);
	printf("Ingrese el segundo numero: \n");
	scanf("%d",numeroDos);
}

void intercambioValores(int numeroUno, int numeroDos)
{
	int auxiliar;

	auxiliar = numeroUno;
	numeroUno = numeroDos;
	numeroDos = auxiliar;

	printf("\nEl intercambio ded valores es primero: %d y el segundo: %d\n",numeroUno,numeroDos);
}
