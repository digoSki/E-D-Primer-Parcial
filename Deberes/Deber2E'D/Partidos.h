#include <iostream>

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

	Partidos resta(Partidos);
	void Resta(Partidos);
	int res(Partidos);
	float Ressta(Partidos);


	void mostrarDatos(void);
	void mostarLectura(void);

};