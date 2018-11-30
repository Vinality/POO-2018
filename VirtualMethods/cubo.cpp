//Vinicius Brandao Crepschi RA 743601
#include "cubo.h"

cubo::cubo(float l1) : FormaTriDimensional("Cubo"), a(l1) {}

cubo::~cubo() {}

float cubo::volume(){
	return (a*a*a);
}

float cubo::areaTotal(){
	return (6*(a*a));
}
