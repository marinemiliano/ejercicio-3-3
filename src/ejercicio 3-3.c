/*
 ============================================================================
 Name        : ejercicio.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Ejercicio 3-3: Crear una función que permita determinar si un número es par o no.
 La función retorna 1 en caso afirmativo y 0 en caso contrario.
 Probar en el main.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int determinarParidad(int numero);

int main(void)
{
	setbuf(stdout,NULL);

	int numero;
	int resultado;

	printf("ingrese numero");
	scanf("%d",&numero);

	resultado=determinarParidad(numero);

	if(resultado==0)
	{
		printf("el resultado es impar");
	}
	else
	{
		printf("el resultado es par");
	}
	return 0;
}

int determinarParidad(int numero)
{
	int retorno;
	retorno=0;

	if(numero % 2 == 0)
	{
		retorno =1;
	}
	return retorno;
}
