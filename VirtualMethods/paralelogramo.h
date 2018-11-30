//Vinicius Brandao Crepschi RA 743601

#ifndef PARALELOGRAMO_H_
#define PARALELOGRAMO_H_

#include <iostream>
#include "FormaBiDimensional.h"

class paralelogramo : public FormaBiDimensional{

 	public:
		paralelogramo(float l1 = 0, float l2 = 0, float l3 = 0);
		virtual ~paralelogramo();
		float perimetro();
		float area();

	public:
		float a, b, h;
};

#endif
