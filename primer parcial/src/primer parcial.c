/*
 ============================================================================
 Name        : primer.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 4

typedef struct
{
	int idServicio;
	char descripcion[25];
	float precio;

}eServicio;

typedef struct
{
	int idTrabajo;
	char marca[25];
	int rodado;
	int idServicio;
	int fecha[25];

}eTrabajo;

eTrabajo cargarUnTrabajo();


void mostrarUnTrabajo(eTrabajo);

int main(void)
{
	setbuf(stdout,NULL);

	 eTrabajo miTrabajo;






	int opcion;

	do
	{
		printf("1.ALTA trabajo\n");
		printf("2.BAJA trabajo\n");
		printf("3.MODIFICAR trabajo\n");
		printf("4.MOSTRAR  lista de trabajos\n");
		printf("5.MOSTRAR  lista de servicios\n");
		printf("5.MOSTRAR total en pesos por los servicios prestados\n");
		printf("6.SALIR");

		printf("\nelija una opcion: ");
		scanf("%d",&opcion);

		switch(opcion)
		{
		case 1:
		   miTrabajo=cargarUnTrabajo();

		break;

		case 2:

		break;
		case 3:

		break;
		case 4:
		   mostrarUnTrabajo(miTrabajo);
		break;
		case 5:

		break;
		case 6:

		break;


		}



	}while(opcion!=6);




	return EXIT_SUCCESS;
}






