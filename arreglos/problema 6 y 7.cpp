#include <iostream>
using namespace std;

void problema_6(int x[], int t);
void problema_7(int x[], int t);
void mostrar(int x[],int t);
int main() {
	
	int x[] = {1,2,3,4,5};
	int t=5;
	
	mostrar(x,t);
	
	cout << endl;
	
	cout <<  " problema 6: " << endl;
	problema_6(x,t);
	mostrar(x,t);
	
	cout << endl << endl << "problema 7" << endl;
	problema_7(x,t);
	mostrar(x,t);
	
	return 0;
}

void problema_6(int x[] , int t){
	
	int aux = x[0];
	
	for(int i=0 ; i<(t-1) ; i++){
		x[i] = x[i+1];
	}
	x[t] = aux;
	
}
void problema_7(int x[], int t){
	
	int aux = x[t];
	
	for(int i=1 ; i<t ; i++){
		x[i] = x[i-1];
	}
	
	x[0] = aux;
	
}
void mostrar(int x[],int t){
	
	for(int i=0 ; i<t ; i++){
		cout << x[i] <<" ";
	}
}
