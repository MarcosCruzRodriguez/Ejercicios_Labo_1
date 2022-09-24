/*
 ============================================================================
 Name        : Structs_practica.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define LARGO 20

typedef struct {
	char nombre[LARGO];
	char apellido[LARGO];
	char nombreCompleto[LARGO];
}sAlumnos;

int main(void) {
	setbuf(stdout, NULL);



	return 0;
}
