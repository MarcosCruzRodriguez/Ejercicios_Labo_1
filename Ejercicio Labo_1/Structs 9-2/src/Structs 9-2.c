/*
 ============================================================================
 Marcos Cruz Rodriguez, Div D
 Ejercicio 9-2 structs

 Una empresa requiere un sistema para administrar su nómina de empleados.
 Se sabe que dicha nómina bajo ninguna circunstancia superara los 300
 empleados.
 El sistema deberá tener el siguiente menú de
 opciones:
 ============================================================================
 */

#include "struct_empleados.h"

int main(void) {
	setbuf(stdout, NULL);
	int opciones;
	int inicializarOK;
	sEmpleados cargandoDatos[CANTIDAD];

	inicializarOK = inicializarEmpleado(cargandoDatos);

	if(inicializarOK == 1)
	{
		do
		{
			menuOpciones(&opciones);

			switch(opciones)
			{
				case 1:

					break;
				case 2:

					break;
				case 3:

					break;
				case 4:

					break;
				case 5:

					break;
				default:
					printf("¡ERROR! Ingrese una opcion valida\n");
					break;
			}

			}while(opciones != 5);
	}





	return 0;
}
