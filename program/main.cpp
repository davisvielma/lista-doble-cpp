#include <iostream>
#include "ListaDoble.h"
#include "Controlador.h"

using namespace std;

#define ROJO "\x1B[31m"

int main(int argc, char const *argv[]) {
	ListaDoble *lista = new ListaDoble();
	Controlador controlador;
	int opcion = 0;

	do {
		try {
			controlador.menu();
			cin >> opcion;

			if(opcion < 1 || opcion > 12) throw -1;

			switch(opcion) {
				case 1:
					controlador.agregarDatoAlInicio(lista, controlador.pedirDato());
					break;
				case 2:
					controlador.agregarDatoAlFinal(lista, controlador.pedirDato());
					break;
				case 3:
					controlador.imprimirDatosAlInicio(lista);
					break;

				case 4:
					controlador.imprimirDatosAlFinal(lista);
					break;

				case 5:
					controlador.imprimirTamano(lista);
					break;

				case 6:
					controlador.imprimirDatoDelInicio(lista);
					break;

				case 7:
					controlador.imprimirDatoDelFinal(lista);
					break;
			}

		} catch (int e) {
			cout << ROJO "\nERROR!! Opción invalida." << endl;
		}		
	} while (opcion != 12);

	
	return 0;
}