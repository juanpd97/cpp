#include <iostream>
#include <cstring>

using namespace std;

int main() {
	
	string x;
	string y;
	int cont=0;
	
	getline(cin,x);
	getline(cin,y);
	
	for(int i=0 ; i<y.size() ; i++){
		for(int j=i ; j < y.size() ; j++){
			if(y[j] != ' ' and (y[j] == x[i]) and (y[j]>='a' and y[j]<='z') ){
				cont++;
			}
		}
	}
	
	if(cont == x.size()){
		cout << endl <<"es anagrama";
	} else
		cout << "no es anagrama";
	
	
	return 0;
}

