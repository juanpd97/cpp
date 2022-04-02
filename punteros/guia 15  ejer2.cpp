#include <iostream>
using namespace std;

/*
Ejercicio 2 : Para cada uno de los siguientes enunciados, escriba el código correspondiente. Suponer que
se han declarado las siguientes variables:
float num1 = 3.1415926, num2 = 0.12345;
(a) Declarar un puntero a float pnum.
(b) Asignar la dirección de la variable num1 a pnum.
(c) Imprimir el valor de la variable apuntada por pnum.
(d) Asignar el valor de la variable apuntada por pnum a la variable num2.
(e) Imprimir el valor de num2.
(f) Imprimir la dirección de num2 y la dirección almacenada en pnum. ¿Es la misma dirección?
*/

int main(int argc, char *argv[]) {
	
	float num1 = 3.1415926, num2 = 0.12345,*pnum;
	
	pnum = &num1;
	
	cout << "valor de la variable apuntada por pnum: " << *pnum << endl;
	
	cout << "valor de num2 ande de igualarla al valor de pnum: " << num2 << endl;
	num2 = *pnum;
	cout << "valor de num2: " << num2 << endl;
	
	cout << "direccion num2: " << &num2 << " direccion pnum: " << &pnum << endl;
	
	return 0;
}

