/*
 * triangulo.h
 *
 *  Created on: 21/10/2008
 *      Author: katti
 */

#ifndef TRIANGULO_H_
#define TRIANGULO_H_

#include <iostream>
#include "FormaBiDimensional.h"

class triangulo:public FormaBiDimensional
{
public:
	triangulo(float l1 = 0, float l2 = 0, float l3 = 0);
	virtual ~triangulo();
	float perimetro();
	float area();

public:
	float a, b, c;
};

#endif /* TRIANGULO_H_ */
