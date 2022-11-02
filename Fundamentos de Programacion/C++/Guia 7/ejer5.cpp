#include <iostream>
using namespace std;

bool Evalua(int n1,int n2, int n3);

int main(int argc, char *argv[]) {
	bool BAND;
	int n1,n2,n3;
	
	cout<<"Ingrese la nota del primer parcial"<<endl;
	cin>>n1;
	cout<<"Ingrese la nota del segundo parcial"<<endl;
	cin>>n2;
	cout<<"Ingrese la nota del tercer parcial"<<endl;
	cin>>n3;
	
	BAND=Evalua(n1,n2,n3);
	
	if(BAND){
		cout<<"Promociono";
	}else{
		cout<<"No promociono";
	}
	
	return 0;
}

bool Evalua(int n1,int n2,int n3){
	if(n1>=25 && (n1+n2+n3)>=75){
		return true;
	}else{
		return false;
	}
}

