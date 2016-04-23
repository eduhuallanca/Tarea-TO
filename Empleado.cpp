/*
 * Empleado.cpp
 *
 *  Created on: 19 de abr. de 2016
 *      Author: lenovo
 */

#include "Empleado.h"

Empleado::Empleado() {
	// TODO Auto-generated constructor stub
	nombre="";
	salario=0;
	seguro_social="";
	telefono_departamento="";
}

Empleado::Empleado(string nombre, double salario, string seguro_social,
		string telefono_departamento) {
	this->nombre=nombre;
	this->salario=salario;
	this->seguro_social=seguro_social;
	this->telefono_departamento=telefono_departamento;
}

void Empleado::trabajar(double horas) {
	cout<<"El empleado: "<<nombre<<" trabajo "<<horas<<" horas y su sueldo es S/. "<<salario*horas*10<<endl;
}

//void Empleado::agregarEmpleado(Empleado empleado) {
//	if(numEmpleados<10){
//			listaEmpleados[numEmpleados++]=empleado;
//		}
//		else{
//			cout<<"No se puede agregar mas empleados"<<endl;
//		}
//}
