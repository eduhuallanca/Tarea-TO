/*
 * Pizza.cpp
 *
 *  Created on: 18 de abr. de 2016
 *      Author: Santiago
 */

#include "Pizza.h"
#include "Ingredientes.h"
Pizza::Pizza() {
	// TODO Auto-generated constructor stub
	nombre="Normal";
	tamanio="Mediano";

}

Pizza::Pizza(string nombre, string tamanio, Ingredientes ingredientes) {
	this->nombre=nombre;
	this->tamanio=tamanio;
	this->ingredientes=ingredientes;


}

string Pizza::getNombre(){
	return nombre;
}

void Pizza::ingresarNombre(string nombre){
	this->nombre=nombre;
}

Ingredientes Pizza::getIngredientes(){
	return ingredientes;
}

void Pizza::ingresarIngredientes(Ingredientes ingredientes){
	this->ingredientes=ingredientes;
}




string Pizza::getTamanio() {
	return tamanio;
}

void Pizza::ingresarTamanio(string){
	this->tamanio=tamanio;
}

void Pizza::mostrarPizza() {
	cout<<"Pizza: "<<getNombre()<<endl;
	ingredientes.mostrarIngredientes();
	if(tamanio==""){
		cout<<"* Escoja Tamanio: "<<endl;
		cout<<"1) Grande"<<endl;
		cout<<"2) Mediano"<<endl;
		cout<<"3) Chico"<<endl;
		cout<<"Ingrese tamanio: ";
		int opcion;
		cin>>opcion;
		switch(opcion){
		case 1:
			cout<<"Tamanio: Grande"<<endl;
			break;
		case 2:
			cout<< "Tamanio: Mediano"<<endl;
			break;
		case 3:
			cout<< "Tamanio: Chico"<<endl;
			break;
		};
	}
	else{
		cout<<"Tamanio: "<< getTamanio()<<endl;
	}


}

Pizza::~Pizza() {
	// TODO Auto-generated destructor stub
}

