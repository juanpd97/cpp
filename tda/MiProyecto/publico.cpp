#include "publico.h"
#include <iostream>

using namespace std;

contador crear (int valor){
	contador aux;
	aux.x = valor;
	return aux;
}
void incrementar (contador & c, int pasos){
	//incrementa c en ‘´pasos’
	for(int i=0 ; i<pasos ; i++){
		c.x++;
	}
	
}
void decrementar (contador & c, int pasos){
	//decrementa c en ‘´pasos’
	for(int i=0 ; i<pasos ; i++){
		c.x--;
	}
}
int toInteger (contador c){
	return c.x;
}
