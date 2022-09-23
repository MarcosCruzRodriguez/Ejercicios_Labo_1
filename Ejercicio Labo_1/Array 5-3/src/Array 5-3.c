/*
 ============================================================================
 Marcos Cruz Rodriguez, Div D
 Ejercicio 5-3 vectores

 Realizar una función que reciba como parámetros un array de enteros y
 un entero por referencia. La función calculara el máximo valor de ese array y
 utilizara el valor por referencia para retornar ese valor.
 ============================================================================
 */

#include "maximo_array.h"
#define LARGO 5

int main(void)
{
	setbuf(stdout, NULL);
	int numerosEnteros[LARGO];
	int maximoNumero;

	inicializacionArray(numerosEnteros, LARGO, -1);

	pedirEnteros(numerosEnteros, LARGO);

	maximoEntero(numerosEnteros, LARGO,&maximoNumero);

	printf("El numero maximo es: %d",maximoNumero);

	return 0;
}
