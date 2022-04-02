#include <iostream>
#include <string>
using namespace std;

/*
Declarar un puntero a la cadena de texto "Hola" llamado mensaje . Luego, asignar el valor
“A” a la tercera letra de una cadena de caracteres apuntada por mensaje.	*/

int main(int argc, char *argv[]) {
	
	string mensaje = "Hola";
	char *ptro;
	
	ptro = &mensaje[0];
	
	*(ptro+3) = 'A';
	
	cout << mensaje;
	
	return 0;
}

