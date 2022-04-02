#include <iostream>
#include <string>
using namespace std;

struct persona{
	string nombre;
	int edad;
	char genero[1];
} p[3];

int main(int argc, char *argv[]) {
	
	//struct persona p[3]; //tambien se puede usar
	
	for(int i = 0 ; i<3 ; i++){
		cout << "nombre: ";
		cin >> ws;
		getline(cin,p[i].nombre);
		cout << "edad: ";
		cin >> p[i].edad;
		cout << "genero: ";
		cin >> p[i].genero;
		//cin.ignore(1000,'\n');
	}
	
	cout << endl << endl;
	for(int i = 0 ; i<3 ; i++){
		cout << "persona - " << i+1 << endl;
		cout << "nombre: " << p[i].nombre << endl; 
		cout << "edad: " << p[i].edad << endl;
		cout << "genero: " << p[i].genero << endl;
	}
	return 0;
}

