#include <iostream>
using namespace std;

bool evalua(int n1,int n2, int n3);

int main(int argc, char *argv[]) {
	bool band;
	int n1,n2,n3;
	
	cout<<"Ingrese los creditos del parcial 1"<<endl;
	cin>>n1;
	cout<<"Ingrese los creditos del parcial 2"<<endl;
	cin>>n2;
	cout<<"Ingrese los creditos del parcial 3"<<endl;
	cin>>n3;
	
	band = evalua(n1,n2,n3);
	
	if (band){
		cout<<"el alumno promociono";
	}else{
		cout<<"el alumno reprobo";
	}
	return 0;
}

bool evalua(int n1,int n2, int n3){
	if (n3>=25 && ((n1+n2+n3)>=75)){
		return true;
	}else {
		return false;
	}
}
