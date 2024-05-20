#include <iostream>
using namespace std;

class Sobrecarga3 {

private:
	float a, b;

public:
	Sobrecarga3();
	Sobrecarga3(float, float);
	Sobrecarga3 operator / (Sobrecarga3& p);
	void pedir();

	void mostrar();
	float getA();
	float getB();

	void setA(int a);
	void setB(int b);
};