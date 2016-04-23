/*
 * TipoQueso.cpp
 *
 *  Created on: 18 de abr. de 2016
 *      Author: Santiago
 */

#include "TipoQueso.h"

TipoQueso::TipoQueso() {
	// TODO Auto-generated constructor stub
	queso="Queso Normal";
}

TipoQueso::TipoQueso(string queso) {

	this->queso=queso;
}


string TipoQueso::getQueso() {
	return queso;
}

void TipoQueso::ingresarQueso(string queso){
	this->queso=queso;
}

void TipoQueso::mostrarQueso(){
	if(queso==""){
		cout<<"* Escoja tipo de queso: "<<endl;
		cout<<"1) Cheddar"<<endl;
		cout<<"2) Mozzarella"<<endl;
		cout<<"3) Parmesano"<<endl;
		cout<<"4) Ricotta"<<endl;
		cout<<"5) Asiago"<<endl;
		cout<<"Ingresar opcion: ";
		int opcion;
		cin>>opcion;
		switch(opcion){
			case 1:
				cout<< "Queso Cheddar"<<endl;;
				break;
			case 2:
				cout<< "Queso Mozzarella"<<endl;
				break;
			case 3:
				cout <<"Queso Parmesano"<<endl;
				break;
			case 4:
				cout<< "Queso Ricotta"<<endl;
				break;
			case 5:
				cout<< "Queso Asiago"<<endl;
				break;
		}
		}
		else{
			cout<< getQueso()<<endl;
		}
}


TipoQueso::~TipoQueso() {
	// TODO Auto-generated destructor stub
}

