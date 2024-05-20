/******************************************************
*******************************************************
**     UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE       **
** Alumno: Diego Delgado                             **
** Fecha de Creación: Viernes, 17 de mayo de 2024	 **
** Fecha de Modificación: Viernes, 17 de mayo de 2024 **
** Enunciado: Sobrecarga de operadores               **
** NRC: 14542                                        **
*******************************************************
*******************************************************
Problema: Realize la sobrecarga del operador "/".
*******************************************************/

#include <iostream>
#include "Sobrecarga3.h"

using namespace std;

int main() {

	Sobrecarga3 clase1, clase2;

	cout << "\tINGRESO DE DATOS";

	cout << "\nIngreso de datos clase 1";
	clase1.pedir();

	cout << "\nIngreso de datos clase 2" ;
	clase2.pedir();

	Sobrecarga3 clase3 = clase1 / clase2;
	clase3.mostrar();

	system("pause");
	return 0;
}