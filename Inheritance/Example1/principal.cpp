#include<iostream>
#include"C.h"

using namespace std;

int main()
{
	A a1('a');
	B b1('b');
	C c1('c');
	a1.mostrarAtributos();
	b1.mostrarAtributos();
	c1.mostrarAtributos();
	cout << "Chamando o metodo mostrarAtributos da classe A para um objeto do tipo C" << endl;
	c1.A::mostrarAtributos();

}
