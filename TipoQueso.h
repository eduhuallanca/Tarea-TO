/*
 * TipoQueso.h
 *
 *  Created on: 18 de abr. de 2016
 *      Author: Santiago
 */

#ifndef TIPOQUESO_H_
#define TIPOQUESO_H_
#include<iostream>
using namespace std;

class TipoQueso {
	string queso;

public:
	TipoQueso();
	TipoQueso(string);
	string getQueso();
	void ingresarQueso(string);
	void mostrarQueso();
	virtual ~TipoQueso();
};

#endif /* TIPOQUESO_H_ */
