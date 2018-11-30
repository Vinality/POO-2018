/*
 * esfera.h
 *
 *  Created on: 21/10/2008
 *      Author: katti
 */

#ifndef ESFERA_H_
#define ESFERA_H_

#include <iostream>
#include "FormaTriDimensional.h"

class esfera : public FormaTriDimensional{
public:
	esfera(float r = 0);
	virtual ~esfera();
	float area();
	float volume();

private:
	float raio;
	const float pi;
};

#endif /* ESFERA_H_ */
