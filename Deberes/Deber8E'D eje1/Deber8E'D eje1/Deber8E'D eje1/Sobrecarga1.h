#include <iostream>
using namespace std;

class Sobrecarga1 {

private:
	int a, b;

public:

	Sobrecarga1(int, int);
	void pedir();
	void mostrar();
	Sobrecarga1 operator + (Sobrecarga1 &p);
	Sobrecarga1();

	/*Sobrecarga1 operator + (Sobrecarga1 p) {
		Sobrecarga1 nueva_clase;

		nueva_clase.a = a + p.a;
		nueva_clase.b = a + p.b;

		return nueva_clase;
	}*/


};