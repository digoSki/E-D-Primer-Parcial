#include <iostream>
using namespace std;

class Partidos {

private:
	int num, den;

public:

	Partidos(int, int);
	Partidos();

	int getNum(void);
	int getDen(void);
	void setNum(int newNum);
	void setDen(int newDen);

	/*/template<typename t>
	Partidos resta(Partidos a) {
		int numeradorF = num * a.getDen() - a.getNum() * den;
		int denominadorF = den * a.getDen();
		return Partidos(numeradorF, denominadorF);
	}
	*/
	template<typename t>
	void Resta(Partidos a) {
		int numeradorF = num * a.getDen() - a.getNum() * den;
		int denominadorF = den * a.getDen();
		cout << numeradorF << "/" << denominadorF<<endl;
	}


	void mostrarDatos(void);
	void mostarLectura(void);

};