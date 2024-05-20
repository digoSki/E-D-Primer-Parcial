/******************************************************
*******************************************************
**     UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE       **
** Alumno: Diego Delgado                             **
** Fecha de Creaci�n: Jueves, 16 de mayo de 2024     **
** Fecha de Modificaci�n: Jueves, 16 de mayo de 2024 **
** Enunciado: Lambdas y templates                    **
** NRC: 14542                                        **
*******************************************************
*******************************************************
Problema: Crear una funci�n an�nima que calcule el 
factorial dado un n�mero entero.
*******************************************************/

#include <iostream>
#include <functional>

using namespace std;

int factorial(int a, function<int(int)> operacion){	return operacion(a);}

int  main() {

	int d;

	cout << "Ingrese el numero del factorial al saber: "; cin >> d;

	cout << "Resultado: " << factorial(d, [](int a) {
		int resultado = 1;

		for (int i = 1; i <= a; i++) {
			resultado *= i;

		}
		return resultado;

		}) << endl;

	system("pause");
	return 0;
}