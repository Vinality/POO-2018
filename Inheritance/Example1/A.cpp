#include "A.h"

using namespace std;

A::A(char o, int i) {
	atribA = o;
	igual = i;
	cout << "Construtor de A para o objeto " << atribA << endl;
}

A::~A() {
	cout << "Destrutor de A para o objeto " << atribA << endl;
}

void A::mostrarAtributos()
{
	cout << "Mostrando atributos do objeto da classe A" << endl;
	cout << "atribA: " << atribA << endl;
	cout << "igual: " << igual << endl;
}
