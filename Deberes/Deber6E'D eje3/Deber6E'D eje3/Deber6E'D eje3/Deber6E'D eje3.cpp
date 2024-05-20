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
Problema: Crear una funci�n an�nima que reciba como
par�metro 3 numeros enteros. La funci�n retorna el n�mero mayor.
*******************************************************/

#include <functional>
#include <iostream>

using namespace std;

int enteros(int a, int b, int c, function<int(int, int, int)> calculo) {
    return calculo(a, b, c);
}

int main() {

    int n1 = 4, n2 = 5, n3 = 8;

    cout << "El numero mayor es: " << enteros(n1, n2, n3, [](int a, int b, int c) {
        if ((a > b) and (a > c)) {
            return a;
        }
        else if ((b > a) and (b > c)) {
            return b;
        }
        else if ((c > a) and (c > b)) {
            return c;
        }
       
        }) << endl;


    system("pause");
    return 0;
}
