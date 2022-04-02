#include <iostream>
using namespace std;
 /*
Problema 4: Escribir la funcion es_diagonal(A) que indique si la matriz recibida como argumento es diagonal
o no. Una matriz A es diagonal si todos los elementos que no estan en la diagonal principal tienen el valor cero.
Por ejemplo, la siguiente matriz es diagonal:
A ([[1, 0, 0 ],
[ 0, 6, 0 ],
[ 0, 0, 1 ]])
es_diagonal(A) Å® True
*/
int main(int argc, char *argv[]) {
	
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
	
	for(int i=0; i<3 ; i++){
		for(int j=0; j<3 ; j++){
			if((i!=j) and (x[i][j] != 0)){
				b = false;
			}
		}
	}
	
	cout << endl << endl << "rta: " << b;
	return 0;
}

