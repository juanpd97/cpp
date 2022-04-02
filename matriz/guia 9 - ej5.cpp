#include <iostream>
#include <ctime>
using namespace std;

int diagonal_p(int x[3][3]);
int diagonal_s(int x[3][3]);
int sum_col(int x[3][3]);
int sum_fil(int x[3][3]);
void mostrar(int x[3][3]);
void llenar(int x[3][3]);

int main() {
	
	srand(time(NULL));
	
	int x[3][3];
	
	llenar(x);
	mostrar(x);
	
	cout << "suma de filas iguales: " << sum_fil(x) << endl;
	cout << "suma de columnas iguales: " << sum_col(x) << endl;
	cout << "suma diagonal principal: " << diagonal_p(x) << endl;
	cout << "suma diagonal secundaria: " << diagonal_s(x) << endl;
	
	cout << endl << endl;
	
	if( (sum_fil(x) == sum_col(x)) and (sum_fil(x)==diagonal_p(x)) and  ( diagonal_s(x)==sum_fil(x)) ){
		cout << "es un cuadrado magico";
	} else
	   cout << "no es cuadrado magico";
	
	return 0;
}

int diagonal_p(int x[3][3]){
	
	int sum=0 ;
	
	for(int i=0 ; i<3 ; i++){
		sum += x[i][i];
	}	
	
	return sum;
}
int diagonal_s(int x[3][3]){
	
	int sum=0 ;
	
	for(int i=0 ; i<3 ; i++){
		sum += x[i][2-i];
	}
	
	return sum;
}
int sum_col(int x[3][3]){
	
	bool rta = true;
	int aux;
	int sum = 0;
	
	for(int i=0 ; i<3 ; i++){
		for(int j=0 ; j<3 ; j++){
			sum += x[j][i]; 
			if(j==2 and i==0){
				aux = sum;
			} 
		}
		if(sum == aux){
			sum = 0;
		} else {
			rta = false;
		}
	}
	
	
	if(rta){
		return aux;
	} else {
		return -2;
	}

}
int sum_fil(int x[3][3]){

	int sum = 0;
	int aux;
	bool rta = true;
	for (int i=0 ; i<3 ; i++){
		for(int j=0 ; j<3 ; j++){
			sum += x[i][j];
			if(i==0 and j==2){
				aux = sum;
			}
		}
		if(aux == sum){
		sum = 0;
		} else {
			rta = false;
		}
	}
	
	if(rta){
	return aux;
	} else {
		return -1;
	}
}
void mostrar(int x[3][3]){
	
	for (int i=0 ; i<3 ; i++){
		for(int j=0 ; j<3 ; j++){
			cout << x[i][j] << " ";
		}
		cout << endl;
	}
	
}
void llenar(int x[3][3]){
	
	for (int i=0 ; i<3 ; i++){
		for(int j=0 ; j<3 ; j++){
			//x[i][j] = 1 + rand() % 9;
			cin >> x[i][j];
		}
	}
}
