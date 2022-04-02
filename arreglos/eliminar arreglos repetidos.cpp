#include <iostream>
using namespace std;


void llenar(int x[],int t);
void mostrar(int x[],int t);
int buscar(int x[],int t, int b);
void borrar(int x[],int& t,int b);
int main(int argc, char *argv[]) {
	
	int x[7 ],t,b;
	cin >> t;
	
	llenar(x,t);
	mostrar(x,t);
	
	cout << endl << "numero a borrar: ";
	
	cin >> b;
	
	borrar(x,t,b);
	cout << endl;
	mostrar(x,t);
	return 0;
}

void llenar(int x[],int t){
	
	for (int i =0 ; i<t ; i++){
		cin >> x[i];
	}
	
}


void mostrar(int x[],int t){

	for (int i =0 ; i<t ; i++){
		cout << x[i];
	}
	}


int buscar(int x[],int t, int b){
	int i=0;
	
	while( (i<t) and (x[i] != b)){
		   i++;
	}
	if(i>=t){
		return -1;
	}else
	   return i;
	
}
void borrar(int x[],int &t,int b){
	
	int p = buscar(x,t,b);
	
	while( p != -1){
	t-=1;
	for (int i=p ; i<t ; i++){
		x[i] = x[i+1];
	}
	p = buscar(x,t,b);
	}
	if(p == -1){
		cout << "elemento no encontrado";
	}
}
