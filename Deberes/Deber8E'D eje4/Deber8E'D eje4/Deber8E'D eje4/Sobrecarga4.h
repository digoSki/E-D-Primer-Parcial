#include <iostream>

using namespace std;

class Sobrecarga4 {

private:
	int a, b;

public:
	Sobrecarga4();
	Sobrecarga4(int, int);
	void pedir();
	void mostrar();
	Sobrecarga4 operator - (Sobrecarga4& p);

};