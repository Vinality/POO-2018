#ifndef A_H_
#define A_H_

#include<iostream>

// classe base
class A {
protected:
	char atribA;
	int igual; // atributo de mesmo nomo nas 3 classes da hierarquia
public:
	A(char o, int i = 0);
	~A();
	void mostrarAtributos();
};

#endif /* A_H_ */
