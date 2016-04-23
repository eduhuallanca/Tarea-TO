/*
 * main.cpp
 *
 *  Created on: 18 de abr. de 2016
 *      Author: Santiago
 */

#include "TipoQueso.h"
#include "Ingredientes.h"
#include "Pizza.h"
#include "Menu.h"
#include "PizzaRestaurant.h"
#include "Empleado.h"
#include "Cocinero.h"
#include "Delivery.h"
#include "OperadorTelefono.h"

int main(){
	//TipoQueso mesa1;
	//mesa1.escogerQueso();
	//cout<<mesa1.obtenerQueso()<<endl;
	Ingredientes ing("Tomate","Tocino","Mozarrella");
	Ingredientes ingEscojer("Tomate","Tocino","");
	Pizza escojerP("","",ingEscojer);
	Pizza americana("Americana","Familiar",ing);
	//americana.mostrarPizza();
	Pizza italiana;
	//italiana.mostrarPizza();
	Menu menu1(americana,"Pepsi");
	//mesa1.mostrarMenu();
	Menu escojerM(escojerP,"");
	//mesa2.mostrarMenu();
	PizzaRestaurant presto("Presto","Av ejercito 201");
	presto.mostrarResturante();
	presto.ingresarMenu(menu1);
	menu1.mostrarMenu();
	americana.mostrarPizza();
	cout<<endl<<endl;
	presto.ingresarMenu(escojerM);
	escojerP.mostrarPizza();
	escojerM.mostrarMenu();
	Empleado chichico("Edu",380,"72463746","448822");
	chichico.trabajar(8);
	Delivery jose("jose",380,"72463746","448822");
	jose.trabajar(8);
	Cocinero profe("christian",380,"72463746","448822");
	profe.trabajar(8);
	OperadorTelefono bou("bou",380,"72463746","448822");
	bou.trabajar(8);
	presto.agregarCocinero(profe);
	presto.agregarDelivery(jose);


}



