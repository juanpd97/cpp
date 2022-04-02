#include <iostream>
#include <string>
#include <ctime> 
using namespace std;

int main() {
	
	
	int x;
	string n;
	bool dig_val = true, auxb = true;
	x = 1 + rand % 999;
	cout << x << endl;
	
	getline(cin,x);
	atoi(n);
	
	while (x != n){
		
		while(dig_val){
		for(int i=0 ; i<3 ; i++){
			if( (n[i] != 0) or (n[i] != 1) or (n[i] != 2) or (n[i] != 3) or (n[i] != 4) or (n[i] != 5) or (n[i] != 6) or (n[i] != 7) or (n[i] != 8) or (n[i] != 9) ){
				cout << "digito invalido" << endl;
				auxb = false;
			}
		}
		if(auxb){
			dig_val = false;
		} else{
			auxb = true;
			getline(cin,n);
		}
		}
	}
	
	
	
	
	return 0;
}

