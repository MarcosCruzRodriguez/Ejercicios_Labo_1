/*
 * nombre_completo.c
 *
 *  Created on: 21 sep. 2022
 *      Author: rodri
 */

#include "nombre_completo.h"

void formarApellidoNombre(char* pNombre,char* pApellido,char* pCompleto)
{
	int largo;

	strcpy(pCompleto,pApellido); // strcpy(pCompleto,pApellido,sizeof(pCompleto);
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
