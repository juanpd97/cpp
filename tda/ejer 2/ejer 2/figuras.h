struct circulo{	
	float radio;
	
	float area;
	float perimetro;
};

struct cuadrado{
	
	float l1;
	float l2;
	
	float area;
	float perimetro;
};

typedef struct circulo circulo;
typedef struct cuadrado cuadrado;


circulo crear_circulo(float radio);
float perimetro(circulo c);
float area(circulo c);

cuadrado crear_cuadrado( float l1, float l2);
float perimetro(cuadrado &c);
float area(cuadrado c);
