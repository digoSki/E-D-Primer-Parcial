/******************************************************
*******************************************************
**     UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE       **
** Alumno: Diego Delgado                             **
** Fecha de Creaci�n: Jueves, 16 de mayo de 2024	 **
** Fecha de Modificaci�n: Jueves, 16 de mayo de 2024 **
** Enunciado: Lambdas y templates                    **
** NRC: 14542                                        **
*******************************************************
*******************************************************
Problema: Dado un arreglo de n�meros enteros, crear una 
funci�n an�nima que retorne el n�mero menor.
*******************************************************/

#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>

using namespace std;

int numMayor(vector<int>& numeros, function<int(vector<int>&)> calculo) {
    return calculo(numeros);
}

int main() {
    vector<int> numeros = { 5, 4, 8, 6, 2, 7, 9 };

    cout << "El valor menor del arreglo es: " << numMayor(numeros, [](vector<int>& numeros) {
        auto valorMinimo = [](vector<int>& numeros) {
            return *min_element(numeros.begin(), numeros.end());
            };
        int numeroMenor = valorMinimo(numeros);
        return numeroMenor;
        });
    cout << endl;
    system("pause");
    return 0;
}
