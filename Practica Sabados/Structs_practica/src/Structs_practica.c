/*
 ============================================================================
 Marcos Cruz Rodriguez, Div D
 Variacion del 6-3 structs

 Realizar un programa que permita el ingreso de datos de 10 empleados legajo
 (coincidente con el índice), edad, salario, nombre completo. Realizar carga
 secuencial. Calcular el sueldo promedio. Ordenar por orden alfabetico.
 ============================================================================
 */

#include "empleados_struct.h"

int main(void) {
	setbuf(stdout, NULL);

	datosEmpleados cargaDatos[TAM];

	cargarDatos(cargaDatos,TAM);


	for(int i = 0; i < TAM; i++)
	{
		printf("El nombre ingresado es: %s\n",cargaDatos[i].nombreCompleto);
		printf("El legajo: %d\n",cargaDatos[i].legajo);
		printf("La edad: %d\n",cargaDatos[i].edad);
		printf("El salario: %d\n",cargaDatos[i].salario);
	}


	return 0;
}
