#include <iostream>
#include <cstring>
/*
Problema 2: Dise�ar un programa que permita generar direcciones de correo electr�nico. El programa recibe
el apellido y nombre de un usuario de la facultad (apellido y nombre se asignan a una sola variable) y debe
retornar la direcci�n de correo electr�nico (e-mail) generada. El dominio asignado a la Facultad para el e-mail
es: frsf.edu.ar, y el nombre de usuario se forma con la inicial del nombre y a continuaci�n el apellido.
*/

using namespace std;

int main(int argc, char *argv[]) {
	
	string domi = "@frsf.edu.ar";
	string nombre,apellido;
	string x;
	getline(cin,nombre);
	getline(cin,apellido);
	
	x = nombre[0] + apellido + domi;
	
	cout << x;
	return 0;
}

