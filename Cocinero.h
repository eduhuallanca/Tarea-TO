/*
 * Cocinero.h
 *
 *  Created on: 19 de abr. de 2016
 *      Author: lenovo
 */

#ifndef COCINERO_H_
#define COCINERO_H_

#include "Empleado.h"

class Cocinero: public Empleado {
public:
	Cocinero();
	Cocinero(std::string,double,std::string,std::string);
	void trabajar(double);
};

#endif /* COCINERO_H_ */
