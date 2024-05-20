/******************************************************
*******************************************************
**     UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE       **
** Alumno: Diego Delgado                             **
** Fecha de Creación: Miércoles, 15 de mayo de 2024  **
** Fecha de Modificación: Miércoles, 15 de mayo de 2024 **
** Enunciado: Lambdas y templates                    **
** NRC: 14542                                        **
*******************************************************
*******************************************************
Problema: Crea un programa haciendo uso de funciones anónimas
que calcule el area, perimetro, volumen de un círculo.
*******************************************************/

#include <iostream>
#include <functional>
#include <cmath>
#include "Circulo.h"

using namespace std;

template <typename t>
t calcular(t a, function<t(t)> operacion){ 
	return operacion(a);
}

int main() {
	const float pi = 3.1416 ;

	Circulo circulo(5);

	cout<<"Area del circulo: " << calcular<float>(circulo.getRadio(), [pi](float a) {return (a * a) * pi; }) << endl;

	cout << "Perimetro del circulo: " << calcular<float>(circulo.getRadio(), [pi](float a) {return (2 * pi) * a; }) << endl;

	cout << "Volumen de un circuo: " << calcular<float>(circulo.getRadio(), [pi](float a) {return (4.0/3.0) * pi * pow(a, 3); } )<< endl;

	system("pause");
	return 0;
}