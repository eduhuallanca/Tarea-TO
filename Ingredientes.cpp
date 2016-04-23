/*
 * Ingredientes.cpp
 *
 *  Created on: 18 de abr. de 2016
 *      Author: Santiago
 */

#include "Ingredientes.h"

Ingredientes::Ingredientes() {
	// TODO Auto-generated constructor stub
	ingrediente1="Tomate";
	ingrediente2="Tocino";


}

void Ingredientes::mostrarIngredientes() {

	cout<<"INGREDIENTES DE LA PIZZA: "<<endl;
	cout<<"Ingrediente 1->";
	mostrarQueso();
	cout<<"Ingrediente 2->"<<getIngrediente1()<<endl;
	cout<<"Ingrediente 3->"<<getIngrediente2()<<endl;

}

Ingredientes::Ingredientes(string ingrediente1,
	string ingrediente2,string queso):TipoQueso(queso) {
	this->ingrediente1=ingrediente1;
	this->ingrediente2=ingrediente2;
}

string Ingredientes::getIngrediente1() {
	return ingrediente1;
}


string Ingredientes::getIngrediente2() {
	return ingrediente2;
}

void Ingredientes::setIngrediente1(string ingrediente1) {
	this->ingrediente1=ingrediente1;
}



void Ingredientes::setIngrediente2(string ingrediente2) {
	this->ingrediente2=ingrediente2;
}

Ingredientes::~Ingredientes() {
	// TODO Auto-generated destructor stub
}

