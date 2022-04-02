/*Dise�ar una funci�n que reciba como par�metros tres n�meros reales: a, b y c. La funci�n debe indicar
el menor y el mayor, retornando adem�s un c�digo que indique 1, 0 o -1 seg�n si todos los n�meros son
distintos, si hay un par de n�meros iguales � si los tres n�meros son iguales, respectivamente. Si todos
los n�meros son iguales, no existe menor ni mayor.*/

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
