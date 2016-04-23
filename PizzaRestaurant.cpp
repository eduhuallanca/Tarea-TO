/*
 * PizzaRestaurant.cpp
 *
 *  Created on: 19 de abr. de 2016
 *      Author: Santiago
 */

#include "PizzaRestaurant.h"

PizzaRestaurant::PizzaRestaurant() {
	// TODO Auto-generated constructor stub
	nombre="No hay";
	direccion="No hay";
}

PizzaRestaurant::PizzaRestaurant(string nombre, string direccion) {
	this->nombre=nombre;
	this->direccion=direccion;

	empleado= new Empleado[10];
	delivery= new Delivery[10];
	cocinero= new Cocinero[10];
	operadorTelefono= new OperadorTelefono[10];
	e=0;d=0;o=0;c=0;

}

PizzaRestaurant::PizzaRestaurant(string nombre, string direccion,Menu menu ) {
	this->nombre=nombre;
	this->direccion=direccion;
	this->menu=menu;
}

Menu PizzaRestaurant::getMenu() {
	return menu;
}

void PizzaRestaurant::ingresarMenu(Menu menu){

	this->menu=menu;
}

void PizzaRestaurant::mostrarResturante() {
	cout<<"RESTAURANT PIZZERRIA: "<<nombre<<endl;
	cout<<"Dirrecion:"<<direccion<<endl;
}

void PizzaRestaurant::agregarEmpleado(Empleado _empleado) {
	if(e<10){
			empleado[e++]=_empleado;
		}
	else{
		cout<<"No se puede agregar mas empleados"<<endl;
	}
}


void PizzaRestaurant::agregarCocinero(Cocinero _cocinero) {
	if(c<10){
			cocinero[c++]=_cocinero;
		}
	else{
		cout<<"No se puede agregar mas cocineros"<<endl;
	}
}

void PizzaRestaurant::agregarDelivery(Delivery _delivery) {
	if(d<10){
			delivery[d++]=_delivery;
		}
	else{
		cout<<"No se puede agregar mas deliverys"<<endl;
	}
}

void PizzaRestaurant::agregarOperadorTelefono(OperadorTelefono _operadorTelefono) {
	if(o<10){
		operadorTelefono[o++]=_operadorTelefono;
		}
	else{
		cout<<"No se puede agregar mas operadores de Telefono"<<endl;
	}
}

PizzaRestaurant::~PizzaRestaurant() {
	// TODO Auto-generated destructor stub
}

