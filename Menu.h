/*
 * Menu.h
 *
 *  Created on: 19 de abr. de 2016
 *      Author: Santiago
 */

#ifndef MENU_H_
#define MENU_H_

#include "Pizza.h"

class Menu {
	Pizza pizza;
	string bebida;
public:
	Menu();
	Menu(Pizza,string);
	string getBebida();
	void ingresarBebida(string);
	Pizza getPizza();
	void ingresarPizza(Pizza);
	void mostrarMenu();
	virtual ~Menu();
};

#endif /* MENU_H_ */
