/*
 ============================================================================

 ============================================================================
 */

#include "empleados_struct.h"

int main(void) {
	setbuf(stdout, NULL);

	char ingresoNumeros[TAM];
	char ingresoLetras[TAM];
	int errorChrNumero;
	int errorLetras;

	do {
		printf("Ingrese un numero: \n");
		scanf("%s",ingresoNumeros);

		errorChrNumero = caracteresNumero(ingresoNumeros);

	}while(errorChrNumero == 0);

	printf("Los datos ingresados son numeros\n");

	do {
		printf("Ingrese letras: \n");
		fflush(stdin);
		gets(ingresoLetras);
		//fgets(ingresoLetras,20,stdin);

		errorLetras = caracteresLetras(ingresoLetras);

	}while(errorLetras == 0);

	printf("Los datos ingresados son letras\n");

	return 0;
}
