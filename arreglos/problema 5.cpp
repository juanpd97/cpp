#include <iostream>
using namespace std;



int main(int argc, char *argv[]) {
	
	int x[]={1,1,1,1};
	int t=4, i=1;
	bool b = true;
	
	while (i<t){
		if(x[i] == x[i-1] and b == true){
			i++;
		} else {
		   b = false;
		   break;
		}
	}
	
	cout << "cadena: " << b;
	return 0;
}

