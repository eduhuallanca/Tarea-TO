/*
 * OperadorTelefono.h
 *
 *  Created on: 19 de abr. de 2016
 *      Author: lenovo
 */

#ifndef OPERADORTELEFONO_H_
#define OPERADORTELEFONO_H_

#include "Empleado.h"
#include <string>

class OperadorTelefono: public Empleado {
public:
	OperadorTelefono();
	OperadorTelefono(std::string,double,std::string,std::string);
	void trabajar(double);
};

#endif /* OPERADORTELEFONO_H_ */
