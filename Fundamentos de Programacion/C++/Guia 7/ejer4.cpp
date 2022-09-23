#include <iostream>
using namespace std;

void mayorDe3(int a,int b, int c,int &may);

int main(int argc, char *argv[]) {
	int mayor;
	
	mayorDe3(1,2,3,mayor);
	
	cout<<mayor;
	
	return 0;
}

void mayorDe3(int a,int b, int c, int &may){
	if(a>b && a>c){
		may=a;
	}else if(b>c && b>a){
		may=b;
	}else{
		may=c;
	}
}
