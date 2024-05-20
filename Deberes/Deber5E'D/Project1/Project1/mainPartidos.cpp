/******************************************************
*******************************************************
**     UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE		 **
** Alumno: Diego Delgado                             **
** Fecha de Creacion: Jueves, 9 de mayo de 2023      **
** Fecha de Modificacion:Martes, 14 de mayo de 2023  **
** Enunciado: Tipos de datos Abstractos              **
** NRC: 14542                                        **
*******************************************************
*******************************************************/


#include "Partidos.h"
#include <iostream>

using namespace std;

int main() {

	Partidos fraccion1(5, 6);
	Partidos fraccion2(1, 5);

	//Resta con TDA
	cout << "Resta con TDA: "; fraccion1.Resta<Partidos>(fraccion2); cout << endl;

	//Resta con VOID
	cout << "Resta con TDA: "; fraccion1.Resta<void>(fraccion2); cout << endl;

	//Resta con INT
	cout << "Resta con TDA: "; fraccion1.Resta<int>(fraccion2); cout << endl;

	//Resta con Float
	cout << "Resta con TDA: "; fraccion1.Resta<float>(fraccion2); cout << endl;


	return 0;
	system("pause");
}