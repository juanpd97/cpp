#include <iostream>
#include <ctime>
using namespace std;

void llenar(int x[3][3]);
void mostrar(int x[3][3]);
bool diagonal(int x[3][3]);
int main(int argc, char *argv[]) {
	
	
	int x[3][3];
	
	llenar(x);
	mostrar(x);
	
	cout << "es diagonal? : " << diagonal(x);
	
	
	return 0;
}

void llenar(int x[3][3]){
	
	for(int i=0 ; i<3 ; i++){
		for(int j=0 ; j<3 ; j++){
			x[i][j] = 1 + rand()% 9;
			//cin >> x[i][j];
		}
	}
	
}
	
void mostrar(int x[3][3]){
		
		for(int i=0 ; i<3 ; i++){
			for(int j=0 ; j<3 ; j++){
				cout << x[i][j] << "  ";
			}
			cout << endl;
		}
}
bool diagonal(int x[3][3]){

	bool rta = true;
	
	
	for(int i=0; i<3 ; i++){
		for(int j=0; j<3 ; j++){
			if( (j!=i) and (x[i][j] != 0)){
			rta = false;
			}
		}
	}
	return rta;
	
}
	
	
	
	
	
