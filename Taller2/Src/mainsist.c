/*
 * mainsist.c
 *
 *  Created on: Aug 26, 2022
 *      Author: zfeo
 */

#include <stdint.h>
//Libreria con definiciones de otros tipos de variables que no son propios de C

//Definición de variables globales

//Variables de 8 bits

unsigned char siempreUsarCamelCase = 0;
uint8_t diasDeLaSemana = 7;                   //Unsigned, Int de entero, cantidad de bits

char miPrimerCaracter = 'j';                  //Definición de variable. OJO comilla simple
int8_t miPrimerNumeroNegativo = -12;          //Definición número negativo

//Variables de 16 bits

unsigned short diasAnuales = 365;             //Definición de 16 bits
uint16_t diasAnuales2      = 370;

//Variables de 32 bits

unsigned int x, y, z;                         //Acá no están inicializadas
int     a = 1, b = 2, c = 3;                  //Inicializadas en la misma línea
unsigned int i; int j; long k;                //3 ejecuciones en 1 línea

// Otros tipos de variables

char miPrimerArreglo[5] = "LINUX";            /*Creo un string, con 5 elementos cada uno tipo char,
                                               * en tanto en el código ASCII, cada caracter cabe
                                               * en 8 bits*/

uint64_t miSegundoArreglo[3] = {299792458,7970190183,0};  //Entre corchetes

int main(void){                               // Lo ejecutable se encuentra dentro del main

	// Tamaño de variables en diferentes compiladores
	char edad = 22;

	char sizeChar        = sizeof(edad);             // Función que lanza el número de bytes
	char sizeShort       = sizeof(short);
	char sizeInt         = sizeof(int);
	char sizeIntLong     = sizeof(long int);
	char sizeLongLongInt = sizeof(long long int);

}



