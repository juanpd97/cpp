#include <iostream>
#include <ctime>

using namespace std;

void llenar(int x[4][4]);
void mostrar(int x[4][4]);
int mayor_elemento(int x[4][4]);
int diagonal_p(int x[4][4]);
int diagonal_s(int x[4][4]); 
int mayor_sc(int x[4][4]);
int prom_col(int x[4][4]);
bool triangular_sup(int x[4][4]);
bool num_consec(int x[4][4]);

int main(int argc, char *argv[]) {
	srand(time(NULL));

	int x[4][4];
	
	llenar(x);
	mostrar(x);
	
	cout << endl << "mayor elemento de la matriz: " << mayor_elemento(x);
	cout << endl << "mayor elemento de la diagonal principal: " << diagonal_p(x); 
	cout << endl << "mayor elemento de la diagonal secundaria: " << diagonal_s(x); 
	cout << endl << "mayor suma es la columna: " << mayor_sc(x);
	cout << endl << "promedio de las columnas: " <<prom_col(x);
	cout << endl << "superior: " << triangular_sup(x);
	cout << endl << "formada por numeros consecutivos: " << num_consec(x); //revisar
	
	
	return 0;
}

void llenar(int x[4][4]){
	for(int i=0 ; i<4 ; i++){
		for(int j=0 ; j<4 ; j++){
			cin>>x[i][j];
			//x[i][j] = 1 + rand() % 9;
		}
	}
}
void mostrar(int x[4][4]){
	for(int i=0 ; i<4 ; i++){
		for(int j=0 ; j<4 ; j++){
			cout << x[i][j] << "  ";
		}
		cout << endl;
	}
}
	
int mayor_elemento(int x[4][4]){
	
	int rta=0;

	for(int i=0; i<4 ; i++){
		for(int j=0 ; j<4 ; j++){
			if(rta < x[i][j]){
				rta = x[i][j];
			}
		}
	}

	return rta;
}







	
int diagonal_p(int x[4][4]){
	
	int rta=0;
	
	for(int i=0; i<4 ; i++){
		for(int j=0 ; j<4 ; j++){
			if(rta < x[i][j] and i==j){
				rta = x[i][j];
			}
		}
	}
	
	return rta;
}
	

int diagonal_s(int x[4][4]){

	int rta=0;
	
	for(int i=0; i<4 ; i++){
			if(rta < x[i][3-i]){
				rta = x[i][3-i];
			}
	}
	
	return rta;
	
	}

int mayor_sc(int x[4][4]){
	
	int rta=0,sum1=0;
	
	for(int i=0; i<4 ; i++){
		for(int j=0 ; j<4 ; j++){
			
			sum1 += x[j][i];
			
			if(rta < sum1){
				rta = i;
			}
		}
		sum1 = 0;
	}
	
	return rta;
}

int prom_col(int x[4][4]){
	
	int rta=0,sum1=0;
	
	for(int i=0; i<4 ; i++){
		for(int j=0 ; j<4 ; j++){
			sum1 += x[j][i];
		}
		rta++;
	}
	
	return (sum1/rta);
}
	
bool triangular_sup(int x[4][4]){
	
	bool b = true;
	
	for(int i=0; i<4 ; i++){
		for(int j=0 ; j<4 ; j++){
			if (i<j and x[i][j]!=0){
				return false;
			}
		}
	}
	
	return b;
	
	}

bool num_consec(int x[4][4]){
	
	int aux;
	bool b = true;
	
	for(int i=0; i<4 ; i++){
		for(int j=1 ; j<4 ; j++){
			
			if ( x[i][j] != (x[i][j-1] + 1) or (j == 1 and x[i][j-1] != aux) ){
				b = false;
			} 
			
			aux = x[i][j];
		}
	}
	
	return b;
	
}
