#ifndef NODO_H
#define NODO_H

class Nodo {
	private:
		int dato;
		Nodo *anterior;
		Nodo *siguiente;

	friend class ListaDoble;
};

#endif //NODO_H