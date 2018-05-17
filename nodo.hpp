#include "common.hpp"

#pragma once

template<class tipo_dato>
class nodo{
private:
	tipo_dato dato_;
	nodo* izquierda_;
	nodo* derecha_;
	int balance_;
public:
	nodo(void);
	nodo(tipo_dato dato);
	~nodo(void);
	nodo*& izquierda(void);
	nodo*& derecha(void);
	tipo_dato& dato(void);
	int& balance(void);
};

//Constructor de la clase Nodo
template<class tipo_dato>
nodo<tipo_dato>::nodo(void):
dato_(),
balance_(0),
izquierda_(nullptr),
derecha_(nullptr)
{}

//Constructor de la clase nodo que recibe un dato.
template<class tipo_dato>
nodo<tipo_dato>::nodo(tipo_dato dato):
dato_(dato),
balance_(0),
izquierda_(nullptr),
derecha_(nullptr)
{}

//Destructor de la clase Nodo
template<class tipo_dato>
nodo<tipo_dato>::~nodo(void){}

//Metodo Get Derecha
template<class tipo_dato>
nodo<tipo_dato>*& nodo<tipo_dato>::derecha(void){
	return derecha_;
}

//Metodo Get Izquierda
template<class tipo_dato>
nodo<tipo_dato>*& nodo<tipo_dato>::izquierda(void){
	return izquierda_;
}

//Metodo Get Dato
template<class tipo_dato>
tipo_dato& nodo<tipo_dato>::dato(void){
	return dato_;
}

//Metodo Get Balance
template<class tipo_dato>
int& nodo<tipo_dato>::balance(void){
	return balance_;
}