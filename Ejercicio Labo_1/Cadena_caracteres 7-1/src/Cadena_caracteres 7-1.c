/*
 ============================================================================
 Marcos Cruz Rodriguez, Div D
 Ejercicio 7-1 cadena de caracteres

 Pedirle al usuario su nombre y apellido (en variables separadas, una
 para el nombre y otra para el apellido). Ninguna de las dos variables se puede
 modificar. Debemos lograr guardar en una tercer variable el apellido y el nombre
 con el siguiente formato: Perez, Juan Ignacio usando la siguiente función

 void FormarApellidoNombre(char* pNombre,char* pApellido,char* pCompleto);
 ============================================================================
 */

#include "nombre_completo.h"
#define LARGO 100

int main(void)
{
	setbuf(stdout, NULL);
	char nombre[LARGO];
	char apellido[LARGO];
	char nombreCompleto[LARGO];
	int largoNombre;
	int largoApellido;

	printf("Ingrese su nombre: \n");
	fflush(stdin);
	fgets(nombre,LARGO,stdin);

	largoNombre = strlen(nombre);
	nombre[largoNombre-1] = '\0';

	printf("Ingrese su apellido: \n");
	fflush(stdin);
	fgets(apellido,LARGO,stdin);

	largoApellido = strlen(apellido);
	apellido[largoApellido-1] = '\0';

	formarApellidoNombre(nombre,apellido,nombreCompleto);

	printf("Su nombre completo es %s\n",nombreCompleto);

	return 0;
}
