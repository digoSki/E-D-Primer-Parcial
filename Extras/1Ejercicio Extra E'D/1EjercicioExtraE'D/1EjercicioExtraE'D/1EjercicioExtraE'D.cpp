/******************************************************
*******************************************************
**     UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE       **
** Alumno: Diego Delgado                             **
** Fecha de Creación: Viernes, 10 de mayo de 2024	 **
** Fecha de Modificación: Jueves, 10 de mayo de 2024 **
** Enunciado:Calculp de edad		                 **
** NRC: 14542                                        **
*******************************************************
*******************************************************
Problema: Dada la fecha de naciemiento de una persona
calcule la edad de la misma referenciada a la fecha
actual.
*******************************************************/
#include <iostream>
#include <ctime>

using namespace std;

int calcularEdad(int anioNacimiento, int mesNacimiento, int diaNacimiento) {
    // Obtener la fecha actual
    time_t t = time(0);
    tm now;
    localtime_s(&now, &t);

    int anioActual = now.tm_year + 1900;
    int mesActual = now.tm_mon + 1;
    int diaActual = now.tm_mday;

    // Calcular la edad
    int edad = anioActual - anioNacimiento;

    // Ajustar si el cumpleaños no ha ocurrido aún este año
    if (mesActual < mesNacimiento || (mesActual == mesNacimiento && diaActual < diaNacimiento)) {
        edad--;
    }

    return edad;
}

int main() {
    int anioNacimiento, mesNacimiento, diaNacimiento;

    cout << "Ingrese su anio de nacimiento: ";
    cin >> anioNacimiento;
    cout << "Ingrese su mes de nacimiento (1-12): ";
    cin >> mesNacimiento;
    cout << "Ingrese su día de nacimiento (1-31): ";
    cin >> diaNacimiento;

    int edad = calcularEdad(anioNacimiento, mesNacimiento, diaNacimiento);

    cout << "Su edad es: " << edad << " anios." << endl;

    return 0;
}
