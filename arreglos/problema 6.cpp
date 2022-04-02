#include <iostream>
using namespace std;

int b_p(int x[],int t,int y){
	int i=0;
	bool b=false;
	
	while(i<t and b == false){
		i++;
		if( x[i] == y){ 
		}
	}
	if (b == true){
		return i;
	} else
		return -1;
}

void inter(int x[],int t,int a, int b){
	
	int p1,p2;
	
	p1 = b_p(x,t,a);
	p2 = b_p(x,t,b);
	
	if( (p1 != -1) and (p2 != -1)){
		
		x[p1] = b;
		x[p2] = a;
		
	} else
						cout << "numero no encontrado";
	
}


int main(int argc, char *argv[]) {
	
	
	int x[]={1,2,3,4,5,6,7,8,9,10};
	int a,b,t=10;
	
	cin >>a >> b;
	inter(x,t,a,b);
	
	cout << endl;
	
	for (int i=0; i<10 ; i++){
		cout << x[i] << " " ;
	}
	
	
	return 0;
}

