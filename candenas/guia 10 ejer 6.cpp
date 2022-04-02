#include <iostream>
#include <string>

using namespace std;

void vocales(string x,int& a,int &e,int &i, int& o, int &u);
int blancos(string x);
int letras_t(string x);
int cant_pal(string x);
int mas7(string x);


int main(int argc, char *argv[]) {
	
	string x;
	int a=0,e=0,i=0,o=0,u=0;
	
	getline(cin,x,'.');
	
	vocales(x,a,e,i,o,u);
	blancos(x);
	
	cout << endl << endl;
	cout << "a: " << a << endl;
	cout << "e: " << e << endl;
	cout << "i: " << i << endl;
	cout << "o: " << o << endl;
	cout << "u: " << u << endl;
	
	cout << endl << "palabras con mas de 7 letras: " << mas7(x) << endl;
	cout << endl << "porcentajes blancos: " << 	((blancos(x)*100)/x.size()) << endl;
	cout << endl << "costo por cantidad de palabras: " << cant_pal(x) << " * $5.2 = " << (cant_pal(x)*5.2) << endl;
	
	
	return 0;
}

void vocales(string x,int &a,int& e,int& i, int& o, int& u){
	
	int j=0;
	
	for(j ; j<x.size() ; j++){
		if(x[i] == 'a'){
			a++;
		}else if(x[i] == 'e'){
			e++;
		}else if(x[i] == 'i'){
			i++;
		}else if(x[i] == 'o'){
			o++;
		}else if(x[i] == 'u'){
			u++;
		}
	}
	
}

int blancos(string x){

	int rta = 0;
	
	for(int i=0 ; i<x.size() ; i++){
		if(x[i] == ' '){
			rta++;
		}
	}
	
	return rta;
}
	

int cant_pal(string x){
	int rta = 0;
	int i=0;
	for(i ; i<x.size() ; i++){
		if(x[i] == ' '){
			rta++;
			i++;
		}
	}
	if(i>0){
		rta++;
	}
	return rta;
}

int mas7(string x){
	
	int rta = 0;
	int i=0;
	int cont=0;
	
	for( i ; i<x.size() ; i++){
		
		cont++;
		
		if(x[i] == ' '){
		i++;
			if(cont >= 7){
				rta++;
				cont = 0;
			} else
			   cont = 0;
		}
	}
	return rta;
}
	
