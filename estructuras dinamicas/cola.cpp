#include <iostream>
using namespace std;

struct nodo{
	nodo *sig;
	int dato;
};

void put(nodo *&frente,nodo *&fin, int dato);
void get(nodo*& frente,nodo *& fin,int &dato);

int main(int argc, char *argv[]) {
	nodo *frente = NULL;
	nodo *fin = NULL;
	int x;
	
	for(int i=0 ; i<5 ; i++){
		cin >> x;
		put(frente,fin,x);
	}
	
	cout << endl;
	
	while(frente != NULL){
		get(frente,fin,x);
		cout << x <<" ";
	}
	
	return 0;
}

void put(nodo *&frente,nodo *&fin, int dato){
	nodo *nuevo_nodo = new nodo;
	
	nuevo_nodo->dato = dato;
	nuevo_nodo->sig = NULL;
	
	if(frente == NULL){
		frente = nuevo_nodo;
	} else{
		fin->sig = nuevo_nodo;
	}
	fin = nuevo_nodo;
}
void get(nodo*& frente,nodo *& fin,int &dato){
	nodo *aux = frente;
	dato = frente->dato;
	if(frente == fin){
		frente = NULL;
		fin = NULL;
	} else {
	frente= frente->sig;
	}
	delete aux;
}
