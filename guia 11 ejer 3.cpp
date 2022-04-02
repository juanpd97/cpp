#include <iostream>
#include <string>
using namespace std;

struct alumno{
	char  dni[10];
	string cuenta = "ar";
	string pass = "aedd2017";
};
int main(int argc, char *argv[]) {
	
	struct alumno a[2];
	
	//registro usuarios
	for(int i = 0 ; i<2 ; i++){
		cout << "dni:";
		cin.getline(a[i].dni,10,'\n');
		a[i].cuenta += a[i].dni;
	}
	
	
	a[1].pass = "otra";
	
	
	cout << endl << endl;
	for(int i = 0 ; i<2 ; i++){
		cout << "dni:" << a[i].dni << endl;
		cout << "cuenta: " << a[i].cuenta << endl;
		cout << "pass: " << a[i].pass << endl;
	}
	
	cout << endl << endl;
	cout << endl << endl;
	
	cout << "introducir usuario: ";
	int c =0;
	bool bu = true;
	string us;
	getline(cin,us);
	
	while(a[c].cuenta != us){
		c++;
		if(c >= 2 ){
			bu = false;
			break;
		}
	}
	
	if(bu){
	if(a[c].pass == "aedd2017"){
		cout << "actualizar contrasenia: ";
		getline(cin,a[c].pass);
	}
		cout << "dni:" << a[c].dni << endl;
		cout << "cuenta: " << a[c].cuenta << endl;
		cout << "pass: " << a[c].pass << endl;
	} else
	   cout << "usuario no encontrado" << endl;
	return 0;
}

