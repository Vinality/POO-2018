/*
 * esfera.cpp
 *
 *  Created on: 21/10/2008
 *      Author: katti
 */

#include "esfera.h"
using namespace std;

esfera::esfera(float r) : FormaTriDimensional("Esfera"), raio(r), pi(3.1415926536) {}

esfera::~esfera() {}

float esfera::area()
{
	return 4 * pi * raio * raio;
}

float esfera::volume()
{
	return 4 * pi * raio * raio * raio / 3;
}
