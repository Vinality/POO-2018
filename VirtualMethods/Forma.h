/*
 * Forma.h
 *
 *  Created on: 20/10/2008
 *      Author: katti
 */

#ifndef FORMA_H_
#define FORMA_H_

#include <iostream>

class Forma {
public:
	Forma(int nD = 0, std::string n = "Forma");
	virtual ~Forma();
	int nDimensoes();
	std::string nomeForma();

	virtual float perimetro() = 0;
	virtual float area() = 0;
	virtual float volume () = 0;

private:
	int dimensoes;
	std::string nome;
};

#endif /* FORMA_H_ */

