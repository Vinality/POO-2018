#include "B.h"

using namespace std;

B::B(char o, int i) : A(o) {
	atribB = o;
	igual = i;
	cout << "Construtor de B para o objeto " << atribB << endl;

}

B::~B() {
	cout << "Destrutor de B para o objeto " << atribB << endl;
}

void B::mostrarAtributos()
{
	cout << "Mostrando atributos do objeto da classe B" << endl;
	cout << "atribA: " << atribA << endl;
	cout << "atribB: " << atribB << endl;
	cout << "igual de A: " << A::igual << endl;
	cout << "igual de B: " << B::igual << endl;
}
