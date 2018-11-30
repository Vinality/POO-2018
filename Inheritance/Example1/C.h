#ifndef C_H_
#define C_H_

#include<iostream>
#include "B.h"

// C é derivade de B que é derivada de A
class C: public B {
protected:
	char atribC; 
	int igual; // atributo de mesmo nomo nas 3 classes da hierarquia
public:
	C(char o, int i = 5);
	~C();
	void mostrarAtributos();
};

#endif /* C_H_ */
