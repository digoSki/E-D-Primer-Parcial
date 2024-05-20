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
Problema:Dado un arreglo de n�meros enteros, crear una 
funci�n an�nima que retorne el n�mero mayor.
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

    cout << "El valor mayor del arreglo es: " << numMayor(numeros, [](vector<int>& numeros) {
        auto valorMaximo = [](vector<int>& numeros) {
            return *max_element(numeros.begin(), numeros.end());
            };
        int numeroMayor = valorMaximo(numeros);
        return numeroMayor;
        });
    cout << endl;
    system("pause");
    return 0;
}
