#include <iostream>
using namespace std;

/*
Problema 3: Escribir la funcion es_triangular_superior(a) que indique si la matriz recibida como argumento es
triangular superior o no. Una matriz a es triangular superior si todos los elementos que estan bajo la diagonal
principal tienen el valor cero.
Por ejemplo, la siguiente matriz es triangular superior:
A([[1, 0, 40 ],
 [ 0, 6, 0 ],
 [ 0, 0, 1 ]])
es_triangular_superior(A) Å® True
*/

int main() {
	
	int x[3][3];
	bool b = true;
	
	for(int i=0; i<3 ; i++){
		for(int j=0; j<3 ; j++){
			cin >> x[i][j];
		}
	}
	
	for(int i=0; i<3 ; i++){
		for(int j=0; j<3 ; j++){
			cout << x[i][j] << " ";
		}
		cout << endl;
	}
	
	cout << endl;
	
	for(int i=0; i<3 ; i++){
		for(int j=0; j<3 ; j++){
			if(j<i and x[i][j] != 0){
				b=false;
			}
		}
	}
	
	cout << endl << endl << "rta: " << b;
	
	return 0;
}

