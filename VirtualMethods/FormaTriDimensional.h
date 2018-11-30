/*
 * FormaTriDimensional.h
 *
 *  Created on: 21/10/2008
 *      Author: katti
 */

#ifndef FORMATRIDIMENSIONAL_H_
#define FORMATRIDIMENSIONAL_H_

#include <iostream>
#include "Forma.h"

class FormaTriDimensional : public Forma {
public:
	FormaTriDimensional(std::string nome = "Forma tri-dimensional");
	virtual ~FormaTriDimensional();

	float perimetro();

	virtual float area() = 0;
	virtual float volume () = 0;

};

#endif /* FORMATRIDIMENSIONAL_H_ */
