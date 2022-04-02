
struct hs{
	
	int hs;
	int min;
	int seg;
};

typedef struct hs Hora;


Hora ponerAHora (int hora, int min, int seg);// permite configurar el reloj de acuerdo a valores
	//dados en cualquier momento.
void mostrar24(Hora h);// imprime la hora en notacion 24 horas: hh:mm:ss.
void mostrar12(Hora h);// imprime la hora en notacion 12 hs : hh:mm:ss a.m o hh:mm:ss p.m
	//segun corresponda.
void adelantar (Hora & h, int minutos);// permite adelantar la hora una cantidad determinada de
	//minutos.
void atrasar (Hora &h, int minutos); // permite atrasar la hora una cantidad determinada de
	//minutos.
int diferenciaEnMinutos (Hora h1, Hora h2);// devuelve la cantidad de minutos entre 2 horas.
int diferenciaEnSegundos(Hora h1, Hora h2); //devuelve la cantidad de segundos entre 2 horas.


	
