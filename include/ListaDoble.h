#ifndef LISTA_DOBLE_H
#define LISTA_DOBLE_H

#include "Nodo.h"

class ListaDoble {
	private:
		Nodo *inicio;
		Nodo *final;
		int tamano;

		void cambiarTamano(int);

	public:
		explicit ListaDoble();
		~ListaDoble();

		inline int verTamano() const { return this->tamano; }

		bool vacio() const;
		void agregarAlInicio(int);
		void agregarAlFinal(int);
		void imprimirAlInicio() const;
		void imprimirAlFinal() const;
		int verDatoAlInicio() const;
		int verDatoAlFinal() const;
		bool buscar(int) const;
	
};

#endif //LISTA_DOBLE_H