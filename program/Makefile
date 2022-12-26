OPC = -I../include -g -c -std=c++11

all: listaDoble.exe

listaDoble.exe:   main.o ListaDoble.o Controlador.o
	g++  -o $@ $^

main.o: main.cpp
	g++ $(OPC) $<

ListaDoble.o: ../src/ListaDoble.cpp
	g++ $(OPC) $<

Controlador.o: ../src/Controlador.cpp
	g++ $(OPC) $<

clean:
	rm -fr *.o *.exe