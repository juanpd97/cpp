#include <iostream>
#include <cstring>

using namespace std;
bool caracter(string x);
int main(){
	int i=0;
	string x;

	getline(cin,x);
	
	cout << endl << caracter(x) << endl << endl;
	while( !caracter(x) or (x.size()!= 8)){
		cout << "intento " << i << " :" << x << endl;
		//cin >> ws;
		getline(cin,x);
		
		i++;
		
		if (( caracter(x) and (x.size()== 8) )){
			cout << endl << "usuario aceptado";
		}
	}
	
	
	return 0;

}
bool caracter(string x){
	
	if((x[0]>='a' and x[0]<='z') or (x[0]>='A' and x[0]<='A')){
		return true;
	} else
		return false;
	
}
	

