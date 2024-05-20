/******************************************************
*******************************************************
**     UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE       **
** Alumno: Diego Delgado                             **
** Fecha de Creaci�n: Jueves, 16 de mayo de 2024  **
** Fecha de Modificaci�n: Jueves, 16 de mayo de 2024 **
** Enunciado: Lambdas y templates                    **
** NRC: 14542                                        **
*******************************************************
*******************************************************
Problema: Crear una funci�n an�nima que reciba dos par�metros,
un string y un numero entero.La funci�n retorna un string el cual
ser� el resultado de multiplicar ambos par�metros.
*******************************************************/
#include <functional>
#include <iostream>

using namespace std;

string retornoDoble(string texto, int numero, function<string(string, int)> operacion) {
	return operacion(texto, numero);
}

int main() {

	int numero = 4;
	string texto = "Diego";

	cout << retornoDoble(texto, numero, [](string texto, int numero) {

		string repeticion = "";

		for (int i = 0; i < numero; i++) {			
			//repeticion = repeticion + texto;
			repeticion+= texto;
		}
		return repeticion ;

		}) << endl;

	system("pause");
	return 0;
}

