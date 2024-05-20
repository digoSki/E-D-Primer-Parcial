/******************************************************
*******************************************************
**     UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE       **
** Alumno: Diego Delgado                             **
** Fecha de Creación: Jueves, 16 de mayo de 2024	 **
** Fecha de Modificación: Jueves, 16 de mayo de 2024 **
** Enunciado: Lambdas y templates                    **
** NRC: 14542                                        **
*******************************************************
*******************************************************
Problema: Dado un arreglo de números enteros, crear una 
función anónima que retorne el número menor.
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
