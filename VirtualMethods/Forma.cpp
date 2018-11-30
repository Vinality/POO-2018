/*
 * Forma.cpp
 *
 *  Created on: 20/10/2008
 *      Author: katti
 */

#include "Forma.h"
using namespace std;


Forma::Forma(int nD, std::string n) : dimensoes(nD), nome(n) {}

Forma::~Forma() {}

int Forma::nDimensoes()
{
	return dimensoes;
}
std::string Forma::nomeForma()
{
	return nome;
}
