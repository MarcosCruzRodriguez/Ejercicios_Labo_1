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

int main(void) {
	setbuf(stdout, NULL);
	int inicializarOK;
	int contadorAprobadas = 0;
	float valorRetorno;

	sAlumno datosAlumno;

	inicializarOK = inicializacionArray(datosAlumno,LARGO,-1);

	if(inicializarOK == 1) {
		cargarDatos(&datosAlumno,LARGO,CANT_MATERIAS);
		notasAprobadas(&datosAlumno,CANT_MATERIAS,&contadorAprobadas);
		valorRetorno = promedioNotas(&datosAlumno,contadorAprobadas);

		printf("El promedio de las notas aprobadas es: %.2f\n",valorRetorno);
	}

	return 0;
}

