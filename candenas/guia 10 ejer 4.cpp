#include <iostream>
#include <string>

using namespace std;

void mayuscula(string & x);
void desplazamiento(string & x, int d);

int main() {

	string x;
	int desp;
	
	cout << "palabra: ";
	getline(cin,x);
	
	cout << "numero desplazamiento: ";
	cin >> desp;
	
	mayuscula(x);
	desplazamiento(x,desp);
	
	cout << endl << "resultado: " << x;
	
	return 0;
}

void mayuscula(string & x){
	
	for(int i= 0; i<x.size() ; i++){
		if( (x[i] >= 'a' and x[i] <= 'z')	){
			x[i] = x[i] - 'a' + 'A';
		}
	}
}

void desplazamiento(string & x, int d){

	for(int i=0 ; i<x.size() ; i++){
		if(x[i] != ' '){
		x[i] += d;
		}
	}	
}
