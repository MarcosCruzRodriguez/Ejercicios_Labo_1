/*
 ============================================================================
 Marcos Cruz Rodriguez, Div D
 Ejercicio 6-1 ordenamiento

 Disponemos de dos variables numéricas (a y b). Realizar un algoritmo
 que permita el intercambio de valores de dichas variables.
 ============================================================================
 */

#include "pedir_numeros.h"

int main(void)
{
	setbuf(stdout, NULL);
	int primerNumero;
	int segundoNumero;

	pedirNumeros(&primerNumero,&segundoNumero);
	printf("\nEl primer numero ingresado es: %d y el segudno ingresado es: %d\n",primerNumero,segundoNumero);

	intercambioValores(primerNumero,segundoNumero);


	return 0;
}
