#include <iostream>
using namespace std;

class Racionalizar {
private:
    int num, den;
public:
    Racionalizar(int, int);
    Racionalizar();
    int getNum();
    int getDen();
    void setNum(int newNum);
    void setDen(int newDen);
    void mostarLectura();
    void mostrarDatos();

    // Definiciones de las funciones de plantilla
    template<typename TIPO>
    Racionalizar suma(Racionalizar b) {
        int numeradorF = num * b.getDen() + b.getNum() * den;
        int denominadorF = den * b.getDen();
        return Racionalizar(numeradorF, denominadorF);
    }
    
    template<typename TIPO>
    void Suma(Racionalizar b) {
        int numeradorF = num * b.getDen() + b.getNum() * den;
        int denominadorF = den * b.getDen();
        cout << numeradorF<<"/"<< denominadorF << endl;
    }
    /*
    template<typename TIPO>
    int sum(Racionalizar b) {
        return (num * b.getDen() + b.getNum() * den) / (den * b.getDen());
    }

    template<typename TIPO>
    float Summa(Racionalizar b) {
        float resultado = static_cast<float>(num * b.getDen() + b.getNum() * den) / (den * b.getDen());
        return resultado;
    }
    */
};

// Implementación de los constructores y funciones miembro de Racionalizar...
