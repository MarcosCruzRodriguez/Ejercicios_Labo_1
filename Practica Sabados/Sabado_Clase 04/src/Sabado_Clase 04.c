/*
 ============================================================================
 Agregar a la biblioteca utn.h funciones para obtener y validar diferentes tipos de valores:

 - Solo números, ej. 123436679
 - Solo letras, ej. abBD
 - Alfanumericos, ej. ab555gT6
 - Teléfonos, ej. 4XXX-XXXX

 Realizar un programa que pida al usuario el ingreso de un dato y determine con cuales de los tipos cumple.
 ============================================================================
 */

#include "validar_cadenas.h"

//int valIngresoNumero(int numero[], int size);

int main(void)
{
	setbuf(stdout, NULL);
	//int numerosIngresados[5];
	char ingresoNumeros[30];
	char letrasIngresadas[30];
	//int errorNumero;
	int errorChrNumero;
	int errorLetra;
	/*
	for(int i = 0; i < 5; i++)
	{
		numerosIngresados[i] = -1;
	}

	for(int i = 0; i < 5; i++)
	{
		printf("Ingrese un numero: \n");
		scanf("%d",&numerosIngresados[i]);
	}

	errorNumero = valIngresoNumero(numerosIngresados,5);

	if(errorNumero == 0)
	{
		printf("Son todos numeros los datos ingresados\n");
	}
	else
	{
		printf("Hay letras dentro de sus numeros ingresados\n");
	}
	*/

	do
	{
		printf("Ingrese un numero: \n");
		scanf("%s",ingresoNumeros);

		errorChrNumero = caracteresNumero(ingresoNumeros);

	}while(errorChrNumero == 0);

	printf("Los datos ingresados son numeros\n");

	do
	{
		printf("Ingrese letras: \n");
		fflush(stdin);
		fgets(letrasIngresadas,30,stdin);
		//scanf("%s",letrasIngresadas);

		errorLetra = caracteresAlfabeticos(letrasIngresadas);

	}while(errorLetra == 0);

	printf("Los datos ingresados son letras\n");

	return 0;
}

/*
int valIngresoNumero(int numero[], int size)
{
	int retorno = 0;
	int i = 0;

	while(i < size && retorno == 0)
	{
		if(isdigit(numero[i]) != 0)
		{
			i++;
		}
		else
		{
			retorno = 1;
		}
	}

	return retorno;
}
*/

