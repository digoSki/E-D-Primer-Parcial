#include <iostream>

using namespace std;

class Sobrecarga2 {

private:
	int a, b;

public:
	Sobrecarga2();
	Sobrecarga2(int, int);
	void pedir();
	void mostrar();
	Sobrecarga2 operator * (Sobrecarga2& p);

};
