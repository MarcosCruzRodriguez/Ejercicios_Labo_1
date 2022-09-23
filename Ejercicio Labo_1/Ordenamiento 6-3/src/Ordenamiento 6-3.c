/*
 ============================================================================
 Marcos Cruz Rodriguez, Div D
 Ejercicio 6-3 ordenamiento

 Realizar un programa que permita el ingreso de datos de 15 empleados
 legajo (coincidente con el índice), edad, salario, sexo (1-Femenino, 2-Masculino, 3-No
 binario). Realizar carga secuencial. Calcular el sueldo promedio. Listar a los
 empleados no binarios.
 ============================================================================
 */

#include "empleados.h"
#define CANTIDAD 15

int main(void)
{
	setbuf(stdout, NULL);
	int legajo[CANTIDAD];
	int edad[CANTIDAD];
	float salario[CANTIDAD];
	int sexo[CANTIDAD];
	int error;
	float promedioSalario;

	error = inicializacionArray(legajo,edad,salario,sexo,CANTIDAD,0);

	if(error == 1)
	{
		ingresoDatos(legajo,edad,salario,sexo,CANTIDAD);

		promediosSalario(salario,CANTIDAD,&promedioSalario);
		listaNoBinarios(sexo,CANTIDAD);

		printf("El promedio de los salarios es %.2f\n",promedioSalario);
	}

	return 0;
}
