#include "figuras.h"
#include <iostream>

using namespace std;


circulo crear_circulo(float radio){
	circulo aux;
	
	aux.radio = radio;
	
	return aux;
}
float perimetro(circulo c){
	
	c.perimetro = (2 * 3.14* c.radio);
	
	return c.perimetro;
}
float area(circulo c){
	c.area = 3.14 * (c.radio*c.radio);
	return c.area;
}


cuadrado crear_cuadrado(float l1, float l2){
	cuadrado aux;
	
	aux.l1 = l1;
	aux.l2 = l2;
	
	return aux;
}
float perimetro(cuadrado &c){
	
	c.perimetro = (c.l1*2) + (c.l2 * 2);
	
	return c.perimetro;
	
}
float area(cuadrado c){
	
	c.area = c.l1 * c.l2;
	return c.area;
	
}
