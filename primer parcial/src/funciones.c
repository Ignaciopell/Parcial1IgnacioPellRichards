/*
 * funciones.c
 *
 *  Created on: 13 may. 2021
 *      Author: Usuario
 */
#include <stdio.h>

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

eTrabajo cargarUnTrabajo()
{
    eTrabajo miTrabajo;

    printf("Ingrese id: ");
    scanf("%d",miTrabajo.idTrabajo);

    printf("ingrese marca: ");
    fflush(stdin);
    scanf("%[^\n]",&miTrabajo.marca);

    printf("ingrese rodado: ");
    scanf("%d",&miTrabajo.rodado);

    printf("ingrese id servicio: ");
    scanf("%d",&miTrabajo.idServicio);

    printf("ingrese fecha: ");
    scanf("%s",&miTrabajo.fecha);





    return miTrabajo;
}





void mostrarUnTrabajo(eTrabajo miTrabajo)
{
   printf("%d %s %d %d %s", miTrabajo.idTrabajo,
		                   miTrabajo.marca,
						   miTrabajo.rodado,
						   &miTrabajo.idServicio,
						   miTrabajo.fecha);

}

