#include <iostream>
using namespace std;

void diaSiguiente(int & d, int & m, int & a);
bool bisiesto(int a);

int main() {
	
	int dia,mes,anio;
	
	cin >> dia >> mes >> anio;
	
	diaSiguiente(dia,mes,anio);
	
	cout << dia << "." << mes << "." << anio;
	
	return 0;
}

void diaSiguiente(int & d, int & m, int & a){
	
	switch(m){
	
		case(1):
			if(d>31){
			d = 0;
			m = 0;
			a = 0;
		} else if(d == 31){
				d=1;
				m++;
			}
			
			break;
		case(2):
			if(d>28 and !(bisiesto(a))){
			d = 0;
			m = 0;
			a = 0;
		} else if(d == 28 and !bisiesto(a)){
			d=1;
			m++;
		} else if(d <= 28 and bisiesto(a)){
			d++;
		} else if(d == 29 and bisiesto(a)){
			d = 1;
			m++;
		} else if(d<28){
			d++;
		}
			
			break;
		case(3):
			if(d>31){
			d = 0;
			m = 0;
			a = 0;
		} else if(d == 31){
				d=1;
				m++;
			}
			break;
		case(4):
			break;
		case(5):
			if(d>31){
			d = 0;
			m = 0;
			a = 0;
		} else if(d == 31){
				d=1;
				m++;
			}
			break;
		case(6):
			break;
		case(7):
			if(d>31){
			d = 0;
			m = 0;
			a = 0;
		} else if(d == 31){
				d=1;
				m++;
			}
			break;
		case(8):
			if(d>31){
			d = 0;
			m = 0;
			a = 0;
		} else if(d == 31){
				d=1;
				m++;
			}
			break;
		case(9):
			break;
		case(10):
			if(d>31){
			d = 0;
			m = 0;
			a = 0;
		} else if(d == 31){
				d=1;
				m++;
			}
			break;
		case(11):
			break;
		case(12):if(d>31){
			d = 0;
			m = 0;
			a = 0;
		} else if(d == 31){
			d=1;
			m=1;
			a++;
		} else if(d<31){
			d++;
		}
			break;
		
	default: d = 0;
			 m = 0;
			 a = 0;
	}
}

	bool bisiesto(int a){
		
		int x = 2012;
		
		while(x<=a){
			
			if(x == a){
				return true;
			} else
			   x += 4;
		}
		
		while(x>=a){
			
			if(x == a){
				return true;
			} else
			   x -= 4;
		}
		
		return false;
	}
