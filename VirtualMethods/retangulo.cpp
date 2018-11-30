/*
 * retangulo.cpp
 *
 *  Created on: 21/10/2008
 *      Author: katti
 */

#include "retangulo.h"

retangulo::retangulo(float b, float h) : FormaBiDimensional("Retangulo"), base(b), altura(h) {}

retangulo::~retangulo() {}

float retangulo::perimetro()
{
	return 2*(base + altura);
}
float retangulo::area()
{
	return base * altura;
}



