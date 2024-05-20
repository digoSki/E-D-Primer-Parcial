	/******************************************************
	*******************************************************
	**     UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE		 **
	** Alumno: Diego Delgado                             **
	** Fecha de Creacion: Jueves, 9 de mayo de 2024     **
	** Fecha de Modificacion:Jueves, 9 de mayo de 2024   **
	** Enunciado: Tipos de datos Abstractos              **
	** NRC: 14542                                        **
	*******************************************************
	*******************************************************/

#include "Partidos.h
#include <iostream>"

using namespace std;

int main() {

	Partidos fraccion1(5, 9);
	Partidos fraccion2(2, 3);

	cout << "Fraccion 1: "; fraccion1.mostrarDatos();

	cout << "Fraccion 2: "; fraccion2.mostrarDatos();

	fraccion1.mostarLectura();

	Partidos resta = fraccion1.resta(fraccion2);




	//Resta con TDA
	cout << "Resultado de la Resta de TDA: "; resta.mostrarDatos();

	//Resta con VOID
	cout << "Resultado de la Resta con VOID: "; fraccion1.Resta(fraccion2);

	//Resta con INT
	cout << "Resultado de la Resta con INT: " << fraccion1.res(fraccion2) << endl;

	//Resta con float
	cout << "Resultado de la Resta con FLOAT: " << fraccion1.Ressta(fraccion2) << endl;

	system("pause");
	return 0;
}
