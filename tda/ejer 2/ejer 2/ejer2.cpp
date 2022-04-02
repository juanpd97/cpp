#include <iostream>
#include "figuras.h"
using namespace std;

int main(){
	
	cuadrado c;
	float l1,l2;
	
	
	cout << "crear cuadrado" << endl;
	cout << "ingresar lados: ";
	cin >> l1 >> l2;
	
	c = crear_cuadrado(l1,l2);
	
	cout << endl;
	cout << "perimetro: " << perimetro(c) << endl;
	cout << "area: " << area(c);
	
	// circulo
	circulo cir;
	float radio;
	
	cout << "crear circulo" << endl;
	cout << "ingresar radio: ";
	cin >> radio;
	
	cir = crear_circulo(radio);
	
	cout << endl;
	cout << "perimetro: " << perimetro(cir) << endl;
	cout << "area: " << area(cir);
	return 0;
}
