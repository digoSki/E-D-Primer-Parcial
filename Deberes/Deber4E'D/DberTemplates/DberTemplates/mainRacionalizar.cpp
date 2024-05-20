/******************************************************
*******************************************************
**     UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE		 **
** Alumno: Diego Delgado                             **
** Fecha de Creacion: Miercoles, 8 de mayo de 2023   **
** Fecha de Modificacion:Lunes, 13 de mayo de 2023   **
** Enunciado: Templates                              **
** NRC: 14542                                        **
*******************************************************
*******************************************************/


#include <iostream>
#include "Racionalizar.h"

using namespace std;

int main() {
    Racionalizar fraccion1(4, 8);
    Racionalizar fraccion2(5, 6);

    /* Suma con TDA
    Racionalizar resultadoTDA = fraccion1.suma<Racionalizar>(fraccion2);
    cout << "Resultado de la Suma de TDA: ";
    resultadoTDA.mostrarDatos(); */

	//Suma con VOID
cout << "Resultado de la Suma con VOID: ";
fraccion1.Suma<Racionalizar>(fraccion2);
    // Suma con VOID
    //cout << "Resultado de la Suma con VOID: ";

    //fraccion1.Suma<void>(fraccion2);

    //SUMA con INT
    cout << "Resultado de la Suma con INT: ";
    fraccion1.Suma<int>(fraccion2);

    //SUMA con FLOAT
    cout << "Resultado de la Suma con FLOAT: ";
    fraccion1.Suma<float>(fraccion2);

    /*
    // Suma con INT
    cout << "Resultado de la Suma con INT: " << fraccion1.sum<int>(fraccion2) << endl;

    // Suma con float
    cout << "Resultado de la Suma con FLOAT: " << fraccion1.Summa<float>(fraccion2) << endl;
    */
    return 0;
}
