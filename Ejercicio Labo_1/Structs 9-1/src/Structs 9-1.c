/*
 ============================================================================
 Marcos Cruz Rodriguez, Div D
 Ejercicio 9-1 structs

 Crear la estructura Alumno (nombre, materias aprobadas, suma de
 notas, promedio). Crear una función que permita cargar los datos de un alumno y
 otra que los muestre. Una tercera función calculará el promedio de notas.
 ============================================================================
 */

#include "datos_alumno.h"

int main(void)
{
	setbuf(stdout, NULL);

	datosAlumno datosIngresados = ingresarDatos();

	mostrarDatos(datosIngresados);
	datosIngresados.promedio = calcularPromedio(datosIngresados);

	printf("El promedio de %s, es de: %.2f\n",datosIngresados.nombre,datosIngresados.promedio);


	return 0;
}

