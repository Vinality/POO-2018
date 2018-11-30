#ifndef B_H_
#define B_H_

#include<iostream>
#include "A.h"

// B é derivada de A e base para C
class B: public A {
protected:
	char atribB;
	int igual; // atributo de mesmo nomo nas 3 classes da hierarquia
public:
	B(char o, int i = 3);
	~B();
	void mostrarAtributos();
};

#endif /* B_H_ */
