//Vinicius Brandao Crepschi RA 743601

#ifndef CUBO_H_
#define CUBO_H_

#include <iostream>
#include "FormaTriDimensional.h"

class cubo : public FormaTriDimensional{

	public:
		cubo(float l1 = 0);
		virtual ~cubo();
		float volume();
		float areaTotal();

	public:
		float a;
};

#endif
