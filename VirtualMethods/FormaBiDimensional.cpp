/*
 * FormaBiDimensional.cpp
 *
 *  Created on: 21/10/2008
 *      Author: katti
 */

#include <iostream>
#include "FormaBiDimensional.h"

using namespace std;

FormaBiDimensional::FormaBiDimensional(string nome) : Forma (2, nome){}

FormaBiDimensional::~FormaBiDimensional() {}

float FormaBiDimensional::volume ()
{
	cout << "Volume não definido para formas bi-dimensionais." << endl;
	return 0; // uma forma bi-dimensional não tem volume
}
