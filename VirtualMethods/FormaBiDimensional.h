/*
 * FormaBiDimensional.h
 *
 *  Created on: 21/10/2008
 *      Author: katti
 */

#ifndef FORMABIDIMENSIONAL_H_
#define FORMABIDIMENSIONAL_H_

#include <iostream>
#include "Forma.h"

class FormaBiDimensional: public Forma {
public:
	FormaBiDimensional(std::string nome = "Forma bi-dimensional");
	virtual ~FormaBiDimensional();

	virtual float perimetro() = 0;
	virtual float area() = 0;

	float volume ();
};

#endif /* FORMABIDIMENSIONAL_H_ */
