#include <iostream>
using namespace std;
/*Se leen 10 valores enteros menores que 30. Luego se leen valores enteros positivos hasta que la
suma de los dígitos de uno de los valores leídos, sea igual a alguno de los 10 valores inicialmente leídos.
Informar el número que cumplió esta condición.
Ejemplo: Valores iniciales: 1 6 25 18 23 2 6 19 14 13
i. 9425
ii. 340
iii. 694
Imprimir: 694*/

bool igual(int y,int x[]);
int sum(int y);
int main() {
	
	int x[10]={1,6,25,18,23,2,6,19,14,13},y;
	bool b = true;
	
	for(int i=0; i<10 ; i++){
		cout << x[i] << " ";
	}
	
	cout << endl;
	
	while(b){
		cin >> y;
		
		if(igual(y,x)){
			b = false;
		}
		cout << sum(y) << endl;
	}
	
	return 0;
}

bool igual(int y,int x[]){
	int i=0;
	while(x[i] != sum(y) or i<10){
		if(x[i] == sum(y)){
			return true;
		}
		i++;
	}
	return false;
}

int sum(int y){
	int aux=0;
	while(y%10 != 0){
		aux += y%10;
		y = y/10;
	}
	return aux;
}
