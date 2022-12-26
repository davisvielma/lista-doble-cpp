#include "ListaDoble.h"
#include <iostream>

using namespace std;

ListaDoble::ListaDoble() {
	this->inicio = new Nodo;
	this->final = new Nodo;
	this->tamano = 0;

	this->inicio->siguiente = this->final;
	this->final->anterior = this->inicio;
}

void ListaDoble::cambiarTamano(int n) {
	this->tamano +=n;
}

bool ListaDoble::vacio() const {
	return ((this->inicio->siguiente == this->final) ? true : false);
}

void ListaDoble::agregarAlInicio(int dato) {
	Nodo *aux = new Nodo();
	aux->dato = dato;
	aux->anterior = this->inicio;
	aux->siguiente = this->inicio->siguiente;

	this->inicio->siguiente->anterior = aux;
	this->inicio->siguiente = aux;

	this->cambiarTamano(1);
}

void ListaDoble::agregarAlFinal(int dato) {
	Nodo *aux = new Nodo();
	aux->dato = dato;
	aux->anterior = this->final->anterior;
	aux->siguiente = this->final;

	this->final->anterior->siguiente = aux;
	this->final->anterior = aux;

	this->cambiarTamano(1);
}

void ListaDoble::imprimirAlInicio() const {
	if(!this->vacio()) {
		Nodo *aux = this->inicio->siguiente;

		cout << "\n | ";
		while(aux != this->final) {
			cout << aux->dato << " | ";
			aux = aux->siguiente;
		}
		cout << endl;
	}
}

void ListaDoble::imprimirAlFinal() const {
	if(!this->vacio()) {
		Nodo *aux = this->final->anterior;

		cout << "\n | ";
		while(aux != this->inicio) {
			cout << aux->dato << " | ";
			aux = aux->anterior;
		}
		cout << endl;
	}
}

int ListaDoble::verDatoAlInicio() const {
	return ((!this->vacio()) ? this->inicio->siguiente->dato : 0); 
}

int ListaDoble::verDatoAlFinal() const {
	return ((!this->vacio()) ? this->final->anterior->dato : 0); 
}

bool ListaDoble::buscar(int dato) const {
	if(this->vacio()) return false;

	Nodo *aux = this->inicio->siguiente;
	bool encontrado = false;

	while(aux != this->final) {
		if(aux->dato == dato) {
			encontrado = true;
			break;
		}

		aux = aux->siguiente;
	}

	return encontrado;
}

bool ListaDoble::eliminarAlInicio() {
	if(this->vacio()) return false;

	Nodo *aux = this->inicio->siguiente->siguiente;
	delete this->inicio->siguiente;

	this->inicio->siguiente = aux;
	aux->anterior = this->inicio;

	this->cambiarTamano(-1);

}

bool ListaDoble::eliminarAlFinal() {
	Nodo *aux = this->final->anterior->anterior;

	delete this->final->anterior;

	this->final->anterior = aux;
	aux->siguiente = this->final;

	this->cambiarTamano(-1);
}

bool ListaDoble::eliminarDato(int dato) {
	if(this->vacio() || !this->buscar(dato)) return false;

	Nodo *aux = this->inicio;

	while(aux->siguiente != this->final) {
		if(aux->siguiente->dato != dato) {
			aux = aux->siguiente;
		} else {
			Nodo *aux2 = aux->siguiente->siguiente;
			delete aux->siguiente;
			aux->siguiente = aux2;
			aux->siguiente->anterior = aux;
			this->cambiarTamano(-1);
		}
	}

	return true;
}