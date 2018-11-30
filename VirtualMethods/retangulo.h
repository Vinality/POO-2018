/*
 * retangulo.h
 *
 *  Created on: 21/10/2008
 *      Author: katti
 */

#ifndef RETANGULO_H_
#define RETANGULO_H_

#include <iostream>
#include "FormaBiDimensional.h"

class retangulo: public FormaBiDimensional {
public:
	retangulo(float b = 0, float h = 0);
	virtual ~retangulo();
	float perimetro();
	float area();

public:
	float base, altura;
};

#endif /* RETANGULO_H_ */
