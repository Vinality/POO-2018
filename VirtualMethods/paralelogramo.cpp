//Vinicius Brandao Crepschi RA 743601

#include "paralelogramo.h"

paralelogramo::paralelogramo(float l1, float l2, float l3) : FormaBiDimensional("Paralelogramo"), a(l1), b(l2){}

paralelogramo::~paralelogramo() {}

float paralelogramo::perimetro()
{
	return (2*a + 2*h);
}

float paralelogramo::area()
{
	return b*h;
}
