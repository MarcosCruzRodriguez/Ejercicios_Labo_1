/*
 ============================================================================
 Marcos Cruz Rodriguez, Div D
 Ejercicio 5-4 vectores

 Pedir 10 números entre -100 y 100, guardarlos en un Array. Determinar:
 a) Cantidad de negativos.
 b) Sumatoria de los impares.
 c) El mayor de los pares.
 d) Listado de los números ingresados.
 e) Listado de los números mayores a 15.
 f) Listado de los números de las posiciones impares.
 ============================================================================
 */

#include "calculos_array.h"
#define CANTIDAD 10

int main(void)
{
	setbuf(stdout, NULL);
	int numerosEnteros[CANTIDAD];
	int error;
	int contadorNegativos = 0;
	int acumuladorImpares = 0;
	int mayorPares;

	error = inicializacionArray(numerosEnteros,CANTIDAD, -1);

	if(error == 1)
	{
		pedirValores(numerosEnteros,CANTIDAD);
		busquedaDatos(numerosEnteros,CANTIDAD,&contadorNegativos,&acumuladorImpares,&mayorPares);

		printf("\nEl mayor numero par es: %d\nY la suma de los impares da: %d\n",mayorPares,acumuladorImpares);
		printf("\nLa cantidad de negativos son: %d\n",contadorNegativos);

		listadoNumeros(numerosEnteros,CANTIDAD);
	}

	return 0;
}

