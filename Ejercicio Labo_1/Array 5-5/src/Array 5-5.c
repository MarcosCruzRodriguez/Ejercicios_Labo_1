/*
 ============================================================================
 Marcos Cruz Rodriguez, Div D
 Ejercicio 5-4 vectores

 Pedir 10 números enteros distintos de cero entre -50 y 75. La carga
 deberá ser aleatoria (todos los elementos se inicializan en cero por default).
 Determinar el promedio de los positivos. Desde el mayor de los negativos los
 números negativos hasta llegar a cero.
 ============================================================================
 */

#include "inicializacion_cero.h"
#define CANTIDAD 10

int main(void)
{
	setbuf(stdout, NULL);
	int numeros[CANTIDAD];
	int error;
	float promedioPositivos;

	error = inicializacionArray(numeros,CANTIDAD,0);

	if(error == 1)
	{
		pedirValores(numeros,CANTIDAD);
		numerosPositivos(numeros,CANTIDAD,&promedioPositivos);

		printf("El promedio de los positivos es: %.2f\n",promedioPositivos);
	}

	for(int i = 0; i < CANTIDAD; i++)
	{
		printf("Lista numeros: %d\n",numeros[i]);
	}

	return 0;
}
