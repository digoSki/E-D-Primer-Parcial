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
Problema: Realize la sobrecarga del operador "+".
*******************************************************/


#include <iostream>
#include "Sobrecarga1.h"

using namespace std;

int main() {

	Sobrecarga1 clase1, clase2;

	cout << "Ingrese los primeros datos: " << endl;
	clase1.pedir();

	cout << "Ingrese los segundos datos: " << endl;
	clase2.pedir();

	cout << "\tTOTAL DE VALORES" << endl;

	Sobrecarga1 clase3 = clase1 + clase2;

	clase3.mostrar();

	system("Pause");
	return 0;
}
