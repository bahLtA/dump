#include <iostream>
using namespace std;

void MayorDe3(int a,int b,int c,int &may);

int main(int argc, char *argv[]) {
	
	int a,b,c,may;
	
	cout<<"Ingrese A"<<endl;
	cin>>a;
	cout<<"Ingrese B"<<endl;
	cin>>b;
	cout<<"Ingrese C"<<endl;
	cin>>c;
	
	MayorDe3(a,b,c,may);
	
	cout<<"El mayor es: "<<may;
	
	return 0;
}

void MayorDe3(int a,int b,int c,int &may){
	if(a>b && b>c){
		may=a;
	}else if(b>c){
		may=b;
	}else{
		may=c;
	}
}
