#include <iostream>
#include "Hora.h"
#include <cstring>

using namespace std;

Hora ponerAHora (int hora, int min, int seg){
	
	Hora aux;
	int auxh,auxm,auxs;
	
	if(seg > 60 or min > 60 or hora > 24){
		while (auxs > 60 or auxm > 60 or auxh > 24){
		cout << "error" << endl; 
		cin >> auxh >> auxm >> auxs;}
	}else {
		auxh = hora;
		auxm = min;
		auxs = seg;
	}
	
	aux.hs = auxh;
	aux.min = auxm;
	aux.seg = auxs;
	return aux;
}

void mostrar24(Hora h){
	
	cout << h.hs << ":" << h.min << ":" << h.seg;
}
void mostrar12(Hora h){
	string am = {"am"};
	string pm = {"pm"};
	
	if(h.hs > 12){
		h.hs -= 12;
		cout << h.hs << ":" << h.min << ":" << h.seg << " " << pm;
	} else
	   cout << h.hs << ":" << h.min << ":" << h.seg << " " << am;
}
