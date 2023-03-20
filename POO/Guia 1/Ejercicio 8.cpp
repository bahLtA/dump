#include <iostream>
using namespace std;

int Potencia(int n,int pot);

int main(int argc, char *argv[]) {
	
	int n,pot;
	
	cin>>n;
	cin>>pot;
	
	cout<<Potencia(n,pot);
	
	return 0;
}

int Potencia(int n,int pot){
	if(pot==0){
		return 1;
	}else if(n>1){
		return n*Potencia(n,pot-1);
	}
	return 1;
}
