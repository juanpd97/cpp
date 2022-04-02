#include <iostream>
#include <stdio.h>
#include "publico.h"
using namespace std;
int main (void) {
	contador c1;
	c1=crear( 10);
	cout << "El programa comienza en: " <<endl;
	for (c1; toInteger(c1) > 0; decrementar(c1,1)){
		cout << toInteger(c1) << " segundos"<<endl;
	}
	return 0;
}
