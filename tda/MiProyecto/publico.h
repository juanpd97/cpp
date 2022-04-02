struct contador{
	int x;
};
typedef struct contador contador;

contador crear (int valor);
void incrementar (contador & c, int pasos) ; //incrementa c en ‘´pasos’
void decrementar (contador & c, int pasos) ; //decrementa c en ‘´pasos’
int toInteger (contador c);
