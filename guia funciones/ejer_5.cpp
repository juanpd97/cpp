/*Diseñar una función que reciba como parámetros tres números reales: a, b y c. La función debe indicar
el menor y el mayor, retornando además un código que indique 1, 0 o -1 según si todos los números son
distintos, si hay un par de números iguales ó si los tres números son iguales, respectivamente. Si todos
los números son iguales, no existe menor ni mayor.*/

#include <iostream>
using namespace std;

int accion(int a, int b, int c,int &mayor , int& menor);

int main() {
	
	int n1,n2,n3,mayor=0,menor=0;
	
	cin >> n1 >> n2 >> n3;
	
	cout << endl;
	
	accion(n1,n2,n3,mayor,menor);
	
	cout << " mayor: " << mayor << " menor: " << menor;
	
	return 0;
}

int accion(int a, int b, int c,int &mayor , int& menor){
	
	int rta;
	
	if (a == b and b == c){
		rta = -1;
	}else if( (a == b and a != c) or (a == c and a != b) or (b == c and b != a)){
		rta = 0;
	} else if(a != b and b != c and c != a){
		rta = 1;
	}
	
	if(a >= b and a >= c){
		mayor = a;
	} else if (b >= a and b >= c){
		mayor = b;
	} else if(c >= a and c >= b){
		mayor = c;
	}
	
	if(a <= b and a <= c){
		menor = a;
	}
	if (b <= a and b <= c){
		menor = b;
	}
	if(c <= a and c <= b){
		menor = c;
	}
	
	return rta;
}
