#ifndef CONTROLADOR_H
#define CONTROLADOR_H

#include "ListaDoble.h"

class Controlador {
	private:
		void vacia() const;

	public:
		Controlador() { }
		~Controlador() { }
		void menu() const;
		int pedirDato();
		void agregarDatoAlInicio(ListaDoble *, int);
		void agregarDatoAlFinal(ListaDoble *, int);
		void imprimirDatosAlInicio(ListaDoble *) const;
		void imprimirDatosAlFinal(ListaDoble *) const;
		void imprimirTamano(ListaDoble *) const;
		void imprimirDatoDelInicio(ListaDoble *) const;
		void imprimirDatoDelFinal(ListaDoble *) const;

};

#endif //CONTROLADOR_H