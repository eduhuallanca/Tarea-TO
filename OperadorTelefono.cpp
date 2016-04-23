/*
 * OperadorTelefono.cpp
 *
 *  Created on: 19 de abr. de 2016
 *      Author: lenovo
 */

#include "OperadorTelefono.h"

OperadorTelefono::OperadorTelefono() {
	// TODO Auto-generated constructor stub
	nombre="";
	salario=0;
	seguro_social="";
	telefono_departamento="";
}

OperadorTelefono::OperadorTelefono(string nombre, double salario, string seguro_social,
		string telefono_departamento): Empleado(nombre,salario,seguro_social,telefono_departamento){
}

void OperadorTelefono::trabajar(double horas) {
	cout<<"El operador:"<<nombre<<"Trabajo "<<horas<<" horas y su sueldo es "<<salario*horas*15<<endl;
}
