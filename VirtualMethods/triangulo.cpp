/*
 * triangulo.cpp
 *
 *  Created on: 21/10/2008
 *      Author: katti
 */

#include<cmath>
#include "triangulo.h"

triangulo::triangulo(float l1, float l2, float l3) : FormaBiDimensional("Triangulo"), a(l1), b(l2), c(l3) {}

triangulo::~triangulo() {}

float triangulo::perimetro()
{
	return a + b + c;
}

float triangulo::area()
{
	float p = perimetro() / 2;
	return sqrt(p * (p-a) * (p-b) * (p-c));
}
