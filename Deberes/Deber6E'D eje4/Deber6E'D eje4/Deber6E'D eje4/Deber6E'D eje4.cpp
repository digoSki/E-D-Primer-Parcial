/******************************************************
*******************************************************
**     UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE       **
** Alumno: Diego Delgado                             **
** Fecha de Creaci�n: Miercoles, 15 de mayo de 2024  **
** Fecha de Modificaci�n: Mi�rcoles, 15 de mayo de 2024 **
** Enunciado: Lambdas y templates                    **
** NRC: 14542                                        **
*******************************************************
*******************************************************
Problema:Crear una funci�n an�nima que permita conocer 
si un n�mero es par.
*******************************************************/

#include <iostream>
#include <functional>

using namespace std;

template <typename t>
t reconocer(t a, function<void(t)> calculo) { 
	calculo(a);
	return a; }

int main() {

	int a;
	cout << "Ingrese un numero: "; cin >>a;

	reconocer<int>(a, [](int a) {

		if (a% 2 == 0) {
			cout << "\nEl numero es par" << endl;
		}
		else {
			cout << "\nEl numero es impar" << endl;
		}
		});

	system("pause");
	return 0;
}