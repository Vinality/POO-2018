/*
 * circulo.cpp
 *
 *  Created on: 21/10/2008
 *      Author: katti
 */

#include "circulo.h"
using namespace std;

circulo::circulo(float r) : FormaBiDimensional("Circulo"), raio(r), pi(3.1415926536) {}

circulo::~circulo() {}

float circulo::perimetro()
{
	return 2 * pi * raio;
}

float circulo::area()
{
	return pi * raio * raio;
}
