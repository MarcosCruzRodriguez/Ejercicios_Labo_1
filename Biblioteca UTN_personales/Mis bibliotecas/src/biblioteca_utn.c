/*
 * biblioteca_utn.c
 *
 *  Created on: 17 sep. 2022
 *      Author: rodri
 */

#include "biblioteca_utn.h"

//inicializar array con un valor predeterminado
int inicializacionArray(int array[], int size, int valor)
{
	int retorno = 0;

	if(array != NULL && size > 0)
	{
		for(int i = 0; i < size; i++)
		{
			array[i] = valor;
		}
		retorno = 1;
	}
	return retorno;
}

//carga de valores, numeros en este caso
void cargaValores(int array[], int size)
{
	for(int i = 0; i < size; i++)
	{
		printf("Ingrese un numero: \n");
		scanf("%d",&array[i]);
	}
}

/* Ejemplo de menu
===============================================================================
void menuPrincipal(int *eleccion, float hospedaje, float comida, float transporte, int arqueros, int defensores, int mediocampistas, int delanteros)
{
	printf("\n		Menu Principal\n"
		   "\n"
		   "1. Ingreso de los costos de Mantenimiento\n"
		   "  Costo de Hospedaje -> $%.2f\n"
		   "  Costo de Comida -> $%.2f\n"
		   "  Costo de Transporte -> $%.2f\n",hospedaje,comida,transporte);
	printf("2. Carga de jugadores\n"
		   "  Arqueros -> %d\n"
		   "  Defensores -> %d\n"
		   "  Mediocampistas -> %d\n"
		   "  Delanteros -> %d\n",arqueros,defensores,mediocampistas,delanteros);
	printf("3. Realizar todos los calculos\n"
		   "4. Informar todos los resultados\n"
		   "5. Salir \n");
	printf("\nIngrese su opcion aqui: ");
	scanf("%d", eleccion);
}
================================================================================
 */

//acumulo valores ingresados por el usuario y los devuelvo por un puntero
void acumularValores(int array[], int size, int *resultado)
{
	int acumuladorIngresos = 0;

	for(int i = 0; i < size; i++)
	{
		printf("\nIngrese cinco numeros enteros: \n");
		scanf("%d",&array[i]);

		acumuladorIngresos += array[i];
	}

	*resultado = acumuladorIngresos;
}

//acomodo los numeros de forma creciente
void numerosCreciente(int array[], int size)
{
	int auxiliar;

	for(int i = 0; i < size-1; i++)
	{
		for(int j = i+1; j < size; j++)
		{
			if(array[i] > array[j])
			{
				auxiliar = array[i];
				array[i] = array[j];
				array[j] = auxiliar;
			}
		}
	}
}

//acomodo los numeros de forma decreciente
void numerosDecreciente(int array[], int size)
{
	int auxiliar;

	for(int i = 0; i < size-1; i++)
	{
		for(int j = i+1; j < size; j++)
		{
			if(array[i] < array[j])
			{
				auxiliar = array[i];
				array[i] = array[j];
				array[j] = auxiliar;
			}
		}
	}
}

//ingreso de nombres y apellidos
void ingresoNombreApellido(char* pNombre,char* pApellido,char* pCompleto,int size)
{
	int largoNombre;
	int largoApellido;

	printf("Ingrese su nombre: \n");
	fflush(stdin);
	fgets(pNombre,size,stdin);

	largoNombre = strlen(pNombre);
	pNombre[largoNombre-1] = '\0';

	printf("Ingrese su apellido: \n");
	fflush(stdin);
	fgets(pApellido,size,stdin);

	largoApellido = strlen(pApellido);
	pApellido[largoApellido-1] = '\0';
}

//juntos los nombres y apellidos ingresados y formo un nombre completo
//con mayusculas en cada en cada uno de los nombres y apellidos
void formarApellidoNombre(char* pNombre,char* pApellido,char* pCompleto)
{
	int largo;

	strcpy(pCompleto,pApellido);
	strcat(pCompleto,", ");
	strcat(pCompleto,pNombre);

	strlwr(pCompleto);
	largo = strlen(pCompleto);

	pCompleto[0] = toupper(pCompleto[0]);

	for(int i = 0; i < largo; i++)
	{
		if(isspace(pCompleto[i]))
		{
			i++;
			pCompleto[i] = toupper(pCompleto[i]);
		}
	}
}

//validacion de numeros y letras
int caracteresNumero(char numeroChr[]) {
	int i;
	int large;
	int retorno = 1;

	large = strlen(numeroChr);

	for(i = 0; i < large; i++) {
		if(!(isdigit(numeroChr[i]))) {
			printf("¡ERROR! ingrese solo numeros\n");
			retorno = 0;
			break;
		}
	}

	return retorno;
}

int caracteresLetras(char letrasChr[]) {
	int i;
	int large;
	int retorno = 1;

	large = strlen(letrasChr);

	for(i = 0; i < large; i++) {
		if(!(isalpha(letrasChr[i]))) {
			printf("¡ERROR! ingrese solo letras\n");
			retorno = 0;
			break;
		}
	}

	return retorno;
}

/*
//otra variante para saber solo tengo numeros ingresados
int esNumerico(char array[])
{
	int i = 0;

	while(array[i] != '\0')
	{
		if(array[i] < '0' || array[i] > '9')
		{
			return 0;
		}
		else
		{
			i++;
		}
	}
	return 1;
}

//validacion de characteres alfabeticos
int esAlfabetico(char array[])
{
	int i = 0;

	while(array[i] != '\0')
	{
		if((array[i] != '\0') && (array[i] < 'a' || array[i] > 'z') && (array[i] < 'A' || array[i] > 'Z'))
		{
			return 0;
		}
		else
		{
			i++;
		}
	}
	return 1;
}
*/
//validacion caracteres alfanumericos
int validarAlfanumerico(char array[])
{
	int i = 0;
	int retorno = 0;
	int largo;

	largo = strlen(array);
	array[largo-1] = '\0';

	for(i = 0; i < largo; i++)
	{
		if((array[i] != '\0') && (array[i] < 'a' || array[i] > 'z') && (array[i] < 'A' || array[i] > 'Z') && (array[i] < '0' || array[i] > '9'))
		{
			printf("¡ERROR!");
			return retorno;
		}
	}
	retorno = 1;
	return retorno;
}


//struct con datos a ingresar del alumno
datosAlumno ingresarDatos()
{
	int largoNombre;

	datosAlumno cargaDatos;

	printf("Ingrese su nombre: \n");
	fflush(stdin);
	fgets(cargaDatos.nombre,LARGO,stdin);

	largoNombre = strlen(cargaDatos.nombre);
	cargaDatos.nombre[largoNombre-1] = '\0';

	cargaDatos.nombre[0] = toupper(cargaDatos.nombre[0]);

	printf("Ingrese la primera nota: \n");
	scanf("%d",&cargaDatos.materiaUno);
	while(cargaDatos.materiaUno < 1 || cargaDatos.materiaUno > 10)
	{
		printf("Reingrese la primera nota: \n");
		scanf("%d",&cargaDatos.materiaUno);
	}
	printf("Ingrese la segunda nota: \n");
	scanf("%d",&cargaDatos.materiaDos);
	while(cargaDatos.materiaDos < 1 || cargaDatos.materiaDos > 10)
	{
		printf("Reingrese la segunda nota: \n");
		scanf("%d",&cargaDatos.materiaDos);
	}
	printf("Ingrese la tercera nota: \n");
	scanf("%d",&cargaDatos.materiaTres);
	while(cargaDatos.materiaTres < 1 || cargaDatos.materiaTres > 10)
	{
		printf("Reingrese la tercera nota: \n");
		scanf("%d",&cargaDatos.materiaTres);
	}

	return cargaDatos;
}
