/*
 * PizzaRestaurant.h
 *
 *  Created on: 19 de abr. de 2016
 *      Author: Santiago
 */

#ifndef PIZZARESTAURANT_H_
#define PIZZARESTAURANT_H_
#include "Menu.h"
#include "Cocinero.h"
#include "Delivery.h"
#include "OperadorTelefono.h"
#include "Empleado.h"

class PizzaRestaurant {
	string nombre;
	string direccion;
	Menu menu;
	Empleado* empleado;
	Cocinero* cocinero;
	Delivery* delivery;
	OperadorTelefono* operadorTelefono;
	int e,c,d,o;

public:
	PizzaRestaurant();
	PizzaRestaurant(string,string);
	PizzaRestaurant(string,string,Menu);
	Menu getMenu();
	void ingresarMenu(Menu);
	void agregarEmpleado(Empleado);
	void agregarCocinero(Cocinero);
	void agregarDelivery(Delivery);
	void agregarOperadorTelefono(OperadorTelefono);
	void mostrarResturante();
	virtual ~PizzaRestaurant();
};

#endif /* PIZZARESTAURANT_H_ */
