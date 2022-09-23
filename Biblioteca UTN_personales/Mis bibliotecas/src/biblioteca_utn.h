/*
 * biblioteca_utn.h
 *
 *  Created on: 17 sep. 2022
 *      Author: rodri
 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define LARGO 30

#ifndef BIBLIOTECA_UTN_H_
#define BIBLIOTECA_UTN_H_

/**
 * @brief inicializar array con un valor predeterminado
 * (limpia espacio de memoria)
 * @param array
 * @param size
 * @param valor
 * @return
 */
int inicializacionArray(int array[], int size, int valor);

/**
 * @brief carga de valores, numeros en este caso
 *
 * @param array
 * @param size
 */
void cargaValores(int array[], int size);

/**
 * @brief ejemplo de un menu - formato -
 *
 * @param eleccion
 * @param hospedaje
 * @param comida
 * @param transporte
 * @param arqueros
 * @param defensores
 * @param mediocampistas
 * @param delanteros
 */
void menuPrincipal(int *eleccion, float hospedaje, float comida, float transporte, int arqueros, int defensores, int mediocampistas, int delanteros);

/**
 * @brief acumulo valores ingresados por el usuario y los devuelvo por un puntero
 *
 * @param array
 * @param size
 * @param resultado
 */
void acumularValores(int array[], int size, int *resultado);

/**
 * @brief los numeros ingresados los acomodo de forma creciente
 *
 * @param array
 * @param size
 */
void numerosCreciente(int array[], int size);

/**
 * @brief los numeros ingresados los acomodo de forma decreciente
 *
 * @param array
 * @param size
 */
void numerosDecreciente(int array[], int size);

/**
 * @brief ingreso de nombre y apellidos
 *
 * @param pNombre
 * @param pApellido
 * @param pCompleto
 */
void ingresoNombreApellido(char* pNombre,char* pApellido,char* pCompleto,int size);

/**
 * @brief juntos los nombres y apellidos ingresados y formo un nombre completo
 * con mayusculas en cada en cada uno de los nombres y apellidos
 *
 * @param pNombre
 * @param pApellido
 * @param pCompleto
 */
void formarApellidoNombre(char* pNombre,char* pApellido,char* pCompleto);

/**
 * @brief validacion de characteres numericos
 *
 * @param numeroChr
 * @return
 */
int caracteresNumero(char numeroChr[]);

/**
 * @brief validacion de characteres numericos
 *
 * @param array
 * @return
 */
int esNumerico(char array[]);

/**
 * @brief validacion de characteres alfabeticos
 *
 * @param numeroChr
 * @return
 */
int esAlfabetico(char array[]);

/**
 * @brief validacion caracteres alfanumericos
 *
 * @param numeroChr
 * @return
 */
int validarAlfanumerico(char array[]);

/**
 * @brief struct de ciertos datos especificos
 *
 */
typedef struct {
	char nombre[LARGO];
	int materiaUno;
	int materiaDos;
	int materiaTres;
	int sumaNotas;
	float promedio;
}datosAlumno;

datosAlumno ingresarDatos();

#endif /* BIBLIOTECA_UTN_H_ */
