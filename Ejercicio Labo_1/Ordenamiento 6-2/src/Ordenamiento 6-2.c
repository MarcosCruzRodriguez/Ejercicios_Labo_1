/*
 ============================================================================
 Marcos Cruz Rodriguez, Div D
 Ejercicio 6-2 ordenamiento

 Realizar un programa que permita el ingreso de 10 números enteros
 (positivos y negativos). Necesito generar un listado de los números positivos de
 manera creciente y negativos de manera decreciente. (Como máximo 5 estructuras
 repetitivas)
 [Listado 1: 4, 5, 6, 10, 18, 29]
 [Listado 2 : -1,-5,-9,-12]
 ============================================================================
 */

#include "listado_de_creciente.h"
#define LARGO 10

int main(void)
{
	setbuf(stdout, NULL);
	int numerosEnteros[LARGO];
	int error;
	int contadorNegativos = 0;

	error = inicializacionArray(numerosEnteros,LARGO,0);

	if(error == 1)
	{
		pedirValores(numerosEnteros,LARGO,&contadorNegativos);

		numerosCreciente(numerosEnteros,LARGO);
		numerosDecreciente(numerosEnteros,contadorNegativos);
		imprimirLista(numerosEnteros,LARGO);
	}

	return 0;
}
