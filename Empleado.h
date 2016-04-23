/*
 * Empleado.h
 *
 *  Created on: 19 de abr. de 2016
 *      Author: lenovo
 */

#ifndef EMPLEADO_H_
#define EMPLEADO_H_

#include <string>

#include <iostream>

using namespace std;

class Empleado {
protected:
	string nombre;
	double salario;
	string seguro_social;
	string telefono_departamento;
//	Empleado * listaEmpleados;
//	Delivery * listaDelivery;
//	OperadorTelefono * listaOperadorTelefono;
//	Cocinero * listaCocinero;
//	int numEmpleados;
//	int numCocineros;
//	int	numOperadores;
//	int numDeliverys;
public:
	Empleado();
	Empleado(string,double,string,string);
	void trabajar(double);
//	void agregarEmpleado(Empleado);
};

#endif /* EMPLEADO_H_ */
