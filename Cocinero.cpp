/*
 * Cocinero.cpp
 *
 *  Created on: 19 de abr. de 2016
 *      Author: lenovo
 */

#include "Cocinero.h"

Cocinero::Cocinero() {
	// TODO Auto-generated constructor stub
	nombre="";
	salario=0;
	seguro_social="";
	telefono_departamento="";
}

Cocinero::Cocinero(string nombre, double salario, string seguro_social,
		string telefono_departamento) : Empleado(nombre,salario,seguro_social,telefono_departamento){
}

void Cocinero::trabajar(double horas) {
	cout<<"El cocinero:"<<nombre<<"Trabajo "<<horas<<" horas y su sueldo es "<<salario*horas*20<<endl;
}
