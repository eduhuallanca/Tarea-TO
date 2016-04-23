/*
 * Ingredientes.h
 *
 *  Created on: 18 de abr. de 2016
 *      Author: Santiago
 */

#ifndef INGREDIENTES_H_
#define INGREDIENTES_H_

#include "TipoQueso.h"

class Ingredientes: public TipoQueso {
	string ingrediente1;
	string ingrediente2;
public:
	void mostrarIngredientes();
	Ingredientes();
	Ingredientes(string,string,string);
	string getIngrediente1();
	string getIngrediente2();
	void setIngrediente1(string);

	void setIngrediente2(string);
	virtual ~Ingredientes();
};

#endif /* INGREDIENTES_H_ */
