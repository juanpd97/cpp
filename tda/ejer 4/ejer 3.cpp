#include <iostream>
#include "Hora.h"

using namespace std;

int main(){
	
	Hora x;
	int hs,min,seg;
	cin >> hs >> min >> seg;
	
	x = ponerAHora(hs,min,seg);
	
	cout << "hora en 24:" << endl;
	mostrar24(x);
	cout << endl;
	cout << "hora en 12:" << endl;
	mostrar12(x);
	
	
	return 0;
}
