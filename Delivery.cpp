/*
 * Delivery.cpp
 *
 *  Created on: 19 de abr. de 2016
 *      Author: lenovo
 */

#include "Delivery.h"

Delivery::Delivery() {
	// TODO Auto-generated constructor stub
	nombre="";
	salario=0;
	seguro_social="";
	telefono_departamento="";
}

Delivery::Delivery(string nombre, double salario, string seguro_social,
		string telefono_departamento)  : Empleado(nombre,salario,seguro_social,telefono_departamento){
}

void Delivery::trabajar(double horas) {
	cout<<"El delivery:"<<nombre<<"Trabajo "<<horas<<" horas y su sueldo es "<<salario*horas*5<<endl;
}
