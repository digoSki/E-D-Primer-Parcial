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
Problema: Crear una funci�n an�nima que reciba como
par�metro 3 numeros enteros. La funci�n retorna el n�mero mayor.
*******************************************************/

#include <iostream>
#include <functional>
#include <vector>

using namespace std;


double promedio(vector<double>& notas, int talla, function<double(vector<double>, int)> calculo) {
return calculo(notas, talla);
}



int main() {

	int tamanio;
	cout << "Ingrese la cantidad de notas para ingresar: "; cin >> tamanio;

	vector<double>notas(tamanio);

	cout << "Promedio de notas:" << promedio(notas, tamanio, [](vector<double>notas, int talla) {
		double prom = 0.0;
		double nota;

		for (int i = 1; i <= talla; i++) {

			
			cout <<endl<< "Nota " << i << ": "; cin >> nota;
			
			prom += nota;

		}

		return prom / notas.size();

		});

	cout << endl;


	system("pause");
	return 0;
}