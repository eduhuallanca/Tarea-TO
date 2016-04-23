/*
 * Menu.cpp
 *
 *  Created on: 19 de abr. de 2016
 *      Author: Santiago
 */

#include "Menu.h"

Menu::Menu() {
	// TODO Auto-generated constructor stub
	bebida="Cortesia";
}

Menu::Menu(Pizza nombre, string bebida) {

	this->pizza=nombre;
	this->bebida=bebida;
}

string Menu::getBebida() {
	return bebida;
}

void Menu::ingresarBebida(string bebida){
	this->bebida=bebida;
}

Pizza Menu::getPizza(){
	return pizza;
}

void Menu::ingresarPizza(Pizza  nombre){
	this->pizza=nombre;
}

void Menu::mostrarMenu() {
	cout<<endl<<endl;
	if(pizza.getNombre()==""){
			cout<<"* Escoja Pizza: "<<endl;
			cout<<"1) Americana"<<endl;
			cout<<"2) Hahuiana"<<endl;
			cout<<"3) Italiana"<<endl;
			cout<<"Ingrese opcion: ";
			int opcion;
			cin>>opcion;
			switch(opcion){
			case 1:
				cout<<"Pizza: Americana"<<endl;
				break;
			case 2:
				cout<< "Pizza: Hahuiana"<<endl;
				break;
			case 3:
				cout<< "Pizza: Italiana"<<endl;
				break;
			};
		}
		else{
			cout<<"Pizza: "<<pizza.getNombre()<<endl;
		}

	if(bebida==""){
			cout<<"* Escoja Bebida: "<<endl;
			cout<<"1) Chicha"<<endl;
			cout<<"2) Pepsi"<<endl;
			cout<<"3) Fanta"<<endl;
			cout<<"Ingrese opcion: ";
			int opcion;
			cin>>opcion;
			switch(opcion){
			case 1:
				cout<<"Bebida: Chicha"<<endl;
				break;
			case 2:
				cout<< "Bebida: Pepsi"<<endl;
				break;
			case 3:
				cout<< "Bebida: Fanta"<<endl;
				break;
			};
		}
		else{
			cout<<"Bebida: "<< getBebida()<<endl;
		}
}

Menu::~Menu() {
	// TODO Auto-generated destructor stub
}

