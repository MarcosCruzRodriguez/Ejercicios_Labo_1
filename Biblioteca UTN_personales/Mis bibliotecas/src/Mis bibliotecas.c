/*
 ============================================================================
 	 	 	 MI							 ..					 ..
 ------- BIBLIOTECA ---------------------[]------------------[]--------------
 	 	 	UTN							 ..					 ..
 	   	  personal						....			    ....
 ============================================================================
 */

//Bibliotecas propias
#include "biblioteca_utn.h"
#define CANTIDAD 100

int main(void)
{
	setbuf(stdout, NULL);

	//inicializar array con un valor predeterminado
	int array[CANTIDAD];
	int error;
	inicializacionArray(array,CANTIDAD,-1);
	if(error == 1)
	{
		printf("Anda joya\n");
	}

	//carga de valores, numeros en este caso
	cargaValores(array,CANTIDAD);

	//ejemplo de menu - formato -
	//menuPrincipal();

	//acumulo valores ingresados por el usuario y los traigo por un puntero
	int resultado;
	acumularValores(array,CANTIDAD,&resultado);

	//los numeros ingresados los acomodo de forma creciente
	numerosCreciente(array,CANTIDAD);

	//los numeros ingresados los acomodo de forma decreciente
	numerosDecreciente(array,CANTIDAD);

	//ingreso de nombres y apellidos
	char nombre[CANTIDAD];
	char apellido[CANTIDAD];
	char nombreCompleto[CANTIDAD];
	ingresoNombreApellido(nombre,apellido,nombreCompleto,CANTIDAD);

	//juntos los nombres y apellidos ingresados y formo un nombre completo
	//con mayusculas en cada en cada uno de los nombres y apellidos
	formarApellidoNombre(nombre,apellido,nombreCompleto);

	//pido el ingreso del numero llamo a la funcion para verificarlo
	char ingresoNumeros[20];
	int errorChrNumero;

	do
	{
		printf("Ingrese un numero: \n");
		scanf("%s",ingresoNumeros);

		errorChrNumero = caracteresNumero(ingresoNumeros);

	}while(errorChrNumero == 0);

	printf("Los datos ingresados son numeros\n");

	int errorNumerico;
	errorNumerico = esNumerico(array);

	if(error == 0)
	{
		printf("¡ERROR! Ingrese solo letras\n");
	}
	else
	{
		printf("Los caracteres ingresados son letras\n");
	}

	//pido el ingreso de letras llamo a la funcion para verificarlo
	int errorAlfabetico;
	errorAlfabetico = esAlfabetico(array);

	if(error == 0)
	{
		printf("¡ERROR! Ingrese solo letras\n");
	}
	else
	{
		printf("Los caracteres ingresados son letras\n");
	}

	//
	int errorAlfanumerico;
	errorAlfanumerico = validarAlfanumerico(array);

	//retorno con datos a ingresar del alumno del struct
	datosAlumno datosIngresados = ingresarDatos();

	return 0;
}
