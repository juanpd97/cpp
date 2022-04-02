/*
Problema 3: Se leen 10 valores enteros menores que 30. Luego se leen valores enteros positivos hasta que la
suma de los dígitos de uno de los valores leídos, sea igual a alguno de los 10 valores inicialmente leídos.
Informar el número que cumplió esta condición.
Ejemplo: Valores iniciales: 1 6 25 18 23 2 6 19 14 13
i. 9425
ii. 340
iii. 694
Imprimir: 694
*/

#include <iostream>
using namespace std;

void llenar(int x[],int t){
	for (int i=0 ; i<t ; i++){
		cin >> x[i];
	}
}
	
void mostrar(int x[], int t){
	for(int i=0 ; i<t ; i++){
		cout << x[i] << " ";
	}
}
int suma_digitos(int x){
	int sum=0;

	while(x != 0){
		sum += x%10;
		x /= 10;
	}
	return sum;
}

void prob3(int x[],int t,int a){
	
	int i=0;
	bool b = true;
	while ( (i<t) and (b == true)){
		i++;
		if(suma_digitos(a) != x[i]){{
			
		}
	}	
	
	if(suma_digitos(a) == x[i]){
		cout<<"num: " <<a;
	}
	
}
int main() {
	
	int x[10],t;

	cin >> t;
	llenar(x,t);
	cout << endl;
	mostrar(x,t);
	cout << endl;
	cout << endl;
	
	int a;
	cin >> a;
	prob3(x,t,a);
	
	
	return 0;
}

