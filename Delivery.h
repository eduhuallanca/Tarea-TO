/*
 * Delivery.h
 *
 *  Created on: 19 de abr. de 2016
 *      Author: lenovo
 */

#ifndef DELIVERY_H_
#define DELIVERY_H_

#include "Empleado.h"

class Delivery: public Empleado {

public:
	Delivery();
	Delivery(std::string,double,std::string,std::string);
	void trabajar(double);
};

#endif /* DELIVERY_H_ */
