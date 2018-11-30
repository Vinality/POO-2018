#include "C.h"

using namespace std;

C::C(char o, int i) : B(o) {
	atribC = o;
	igual = i;
	cout << "Construtor de C para o objeto " << atribC << endl;
}

C::~C() {
	cout << "Destrutor de C para o objeto " << atribC << endl;
}

void C::mostrarAtributos()
{
	cout << "Mostrando atributos do objeto da classe C" << endl;
	cout << "atribA: " << atribA << endl;
	cout << "atribB: " << atribB << endl;
	cout << "atribC: " << atribC << endl;
	cout << "igual de A: " << A::igual << endl;
	cout << "igual de B: " << B::igual << endl;
	cout << "igual de C: " << C::igual << endl;
}
