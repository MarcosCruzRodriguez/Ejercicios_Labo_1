/*
 ============================================================================
 Marcos Cruz Rodriguez, Div D
 Ejercicio 7-1 cadena de caracteres

 Realizar funciones para validar y obtener:
 -Alfanumericos, ej. ab555gT6
 -Teléfonos, ej. 4XXX-XXXX
 ============================================================================
 */

#include "validar_caracteres.h"

int main(void)
{
	setbuf(stdout, NULL);
	char alfanumericos[20];
	char telefono[9];
	int errorAlfanumerico;
	int errorTelefono;

    do
    {
    	printf("Ingrese caracteres alfanumericos: \n");
    	fflush(stdin);
    	fgets(alfanumericos,20,stdin);

    	errorAlfanumerico = validarAlfanumerico(alfanumericos);

    }while(errorAlfanumerico == 0);

    printf("Su numero alfanumerico ingresado: %s\n",alfanumericos);
    printf("Se han ingresado caracteres alfanumericos correctamente\n");

    do
	{
		printf("Ingrese su numero de telefono: \n");
		fflush(stdin);
		fgets(telefono,10,stdin);

		errorTelefono = validarTelefono(telefono);

	}while(errorTelefono == 0);

    printf("Se ha ingresado el telefono correctamente\n");

	return 0;
}
