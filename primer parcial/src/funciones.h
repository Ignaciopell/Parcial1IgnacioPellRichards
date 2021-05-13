/*
 * funciones.h
 *
 *  Created on: 13 may. 2021
 *      Author: Usuario
 */

#ifndef FUNCIONES_H_
#define FUNCIONES_H_

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


#endif /* FUNCIONES_H_ */
