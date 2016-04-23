/*
 * Pizza.h
 *
 *  Created on: 18 de abr. de 2016
 *      Author: Santiago
 */

#ifndef PIZZA_H_
#define PIZZA_H_
#include "Ingredientes.h"

class Pizza {
	string nombre;
	string tamanio;
	Ingredientes ingredientes;
public:
	Pizza();
	Pizza(string,string,Ingredientes);
	string getNombre();
	string getTamanio();
	Ingredientes getIngredientes();
	void ingresarIngredientes(Ingredientes);
	void ingresarNombre(string);
	void ingresarTamanio(string);
	void mostrarPizza();
	virtual ~Pizza();
};

#endif /* PIZZA_H_ */
