/*
 * FormaTriDimensional.cpp
 *
 *  Created on: 21/10/2008
 *      Author: katti
 */

#include <iostream>
#include "FormaTriDimensional.h"
using namespace std;


FormaTriDimensional::FormaTriDimensional(string nome) : Forma(3, nome){}

FormaTriDimensional::~FormaTriDimensional() {}

float FormaTriDimensional::perimetro()
{
	cout << "Perimetro nao definido para FormaTriDimensional" << endl;
	return 0;
}
