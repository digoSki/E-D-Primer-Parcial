/******************************************************
*******************************************************
**     UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE       **
** Alumno: Diego Delgado                             **
** Fecha de Creación: Jueves, 16 de mayo de 2024  **
** Fecha de Modificación: Jueves, 16 de mayo de 2024 **
** Enunciado: Lambdas y templates                    **
** NRC: 14542                                        **
*******************************************************
*******************************************************
Problema: Crear una función anónima que reciba dos parámetros,
un string y un numero entero.La función retorna un string el cual
será el resultado de multiplicar ambos parámetros.
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

