#include "Controlador.h"
#include "ListaDoble.h"
#include <iostream>

using namespace std;

#define VERDE "\x1B[32m"
#define AMARILLO "\x1B[33m"

void Controlador::vacia() const {
	cout << AMARILLO "\nLista vaciá." << endl;
}

void Controlador::menu() const {
	cout << VERDE "\n\t\tPractica de Listas Doblemente Enlazada\n" << endl;
	cout << "1)Agregar un elemento al inicio de la lista." << endl;
	cout << "2)Agregar un elemento al final de la lista." << endl;
	cout << "3)Imprimir valores de la lista por el inicio." << endl;
	cout << "4)Imprimir valores de la lista por el final." << endl;
	cout << "5)Ver tamaño de la lista." << endl;

	cout << "10)salir." << endl;
	cout << "*Elija una opción: ";
}

int Controlador::pedirDato() {
	int dato = 0;

	cout << "\nIngrese un numero a operar en la lista: ";
	cin >> dato;

	return dato;
}

void Controlador::agregarDatoAlInicio(ListaDoble *l, int dato) {
	l->agregarAlInicio(dato);
}

void Controlador::agregarDatoAlFinal(ListaDoble *l, int dato) {
	l->agregarAlFinal(dato);
}


void Controlador::imprimirDatosAlInicio(ListaDoble *l) const {
	if(l->vacio()) {
		this->vacia();
		return;
	}

	l->imprimirAlInicio();
}

void Controlador::imprimirDatosAlFinal(ListaDoble *l) const {
	if(l->vacio()) {
		this->vacia();
		return;
	}

	l->imprimirAlFinal();
}

void Controlador::imprimirTamano(ListaDoble *l) const {
	cout << "\nEl tamaño de la lista es: " << l->verTamano() << "." << endl;
}