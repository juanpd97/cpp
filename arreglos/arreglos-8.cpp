#include <iostream>
using namespace std;

/*Problema 8: Escribir una funcion que permita mover todos los elementos del vector hacia abajo un posicion,
colocando el elemento que sale de la ultima posicion en la posicion cero del vector.
Ejemplo: mover_abajo([1,2,3,4]) ¨ [4,1,2,3]*/

int main() {
	
	int x[]={1,2,3,4};
	int aux;
	
	aux=x[3];
	
	for(int i=3; i>0 ; i--){
		x[i] = x[i-1];
	}
	
	x[0]= aux;
	
	for(int i=0; i<4 ; i++){
		cout << x[i] << " ";
	}
	
	return 0;
}

