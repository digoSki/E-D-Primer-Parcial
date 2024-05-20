#include <iostream> 
#include "Sobrecarga2.h"
using namespace std;

Sobrecarga2::Sobrecarga2() : a(0), b(0){}

Sobrecarga2 :: Sobrecarga2(int a, int b): a(a), b(b){}

void Sobrecarga2::pedir() {
	cout << "\nIngrese el dato a: "; cin >>a;
	cout << "\nIngrese el dato b: "; cin >> b;

}

Sobrecarga2 Sobrecarga2 :: operator * (Sobrecarga2& p) {

	Sobrecarga2 nuevaClase;
	nuevaClase.a = a * p.a;
	nuevaClase.b = b * p.b;

	return nuevaClase;
}

void Sobrecarga2::mostrar() {
	cout << "\nResultado entre datos a: " << a << "\nResultado entre datos b: " << b << endl;

}