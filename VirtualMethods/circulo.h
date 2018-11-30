/*
 * circulo.h
 *
 *  Created on: 21/10/2008
 *      Author: katti
 */

#ifndef CIRCULO_H_
#define CIRCULO_H_

#include <iostream>
#include "FormaBiDimensional.h"

class circulo : public FormaBiDimensional{
public:
	circulo(float r = 0);
	virtual ~circulo();
	float area();
	float perimetro();

private:
	float raio;
	const float pi;
};

#endif /* CIRCULO_H_ */
