#include <iostream>
#include <cstring>
/*
Problema 2: Diseñar un programa que permita generar direcciones de correo electrónico. El programa recibe
el apellido y nombre de un usuario de la facultad (apellido y nombre se asignan a una sola variable) y debe
retornar la dirección de correo electrónico (e-mail) generada. El dominio asignado a la Facultad para el e-mail
es: frsf.edu.ar, y el nombre de usuario se forma con la inicial del nombre y a continuación el apellido.
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

