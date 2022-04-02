#include <iostream>
using namespace std;

struct nodo{
	int dato;
	nodo *sig;
};

void put(nodo *&pila, int dato);
void get(nodo *&pila, int &dato);

int main(int argc, char *argv[]) {
	
	nodo *pila = NULL;
	int x;
	
	for(int i=0 ; i<5 ; i++){
		cin >> x;
		put(pila,x);
	}

	cout << endl;
	
	while(pila != NULL){
		get(pila,x);
		cout << x <<" ";
	}
	
	return 0;
}

void put(nodo *&pila, int dato){
	nodo *nuevo_nodo = new nodo;
	nuevo_nodo->dato = dato;
	nuevo_nodo->sig = pila;
	pila = nuevo_nodo;
	
}
void get(nodo *&pila, int &dato){
	nodo *aux = pila;
	dato = pila->dato;
	pila = pila->sig;
	delete aux;
}
