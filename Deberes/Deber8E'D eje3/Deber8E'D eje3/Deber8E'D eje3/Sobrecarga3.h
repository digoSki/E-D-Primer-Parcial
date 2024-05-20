#include <iostream>
using namespace std;

class Sobrecarga3 {

private:
	float a, b;

public:
	Sobrecarga3();
	Sobrecarga3(float, float);
	Sobrecarga3 operator / (Sobrecarga3& p);
	void mostrar();
	void pedir();

};