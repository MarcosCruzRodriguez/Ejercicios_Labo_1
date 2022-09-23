/*
 ============================================================================
 Realizar las siguientes funciones:
 **
 * \brief valida que la cadena son solo letras y espacio en el medio
 * \param cadena es un puntero al espacio de memoria donde se dejara el
 resultado de la funcion
 * return Retorna 1 si -all ok-, 0, SI ES ERROR.
 *
 int esLetraConEspacio(char *pResultado);

 **
 * \brief valida que la cadena son solo letras
 * \param cadena es un puntero al espacio de memoria donde se dejara el
 resultado de la funcion
 * return Retorna 1 si -all ok-, 0, SI ES ERROR.
 *
 int esSoloLetra(char *pResultado);
 ============================================================================
 */

#include "letras.h"

int main(void)
{
	setbuf(stdout, NULL);
	char espacioLetra[TAM];
	char soloLetra[TAM];
	int errorEspacio;
	int errorSolo;

	do
	{
		printf("Ingrese letras con espacio: \n");
		fflush(stdin);
		fgets(espacioLetra,TAM,stdin);

		errorEspacio = esLetraConEspacio(espacioLetra);

	}while(errorEspacio == 0);

	printf("Se ingresaron los datos correctamente\n");

	do
	{
		printf("Ingrese letras con espacio: \n");
		fflush(stdin);
		fgets(soloLetra,TAM,stdin);

		errorSolo = esSoloLetra(soloLetra);

	}while(errorSolo == 0);

	printf("Se ingresaron los datos correctamente\n");


	return 0;
}
