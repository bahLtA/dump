#include <iostream>
using namespace std;

bool EsPrimo(int n);

int main(int argc, char *argv[]) {
	
	int n;
	bool primo;
	
	cout<<"Ingrese un numero"<<endl;
	cin>>n;
	
	primo = EsPrimo(n);
	
	if(primo){
		cout<<"El numero es primo"<<endl;
	}else{
		cout<<"El numero no es primo"<<endl;
	}
	
	return 0;
}

bool EsPrimo(int n){
	if(n==4) return 0;
	for(int i=2;i<n;i++){
		if(i%n==0){
			return 0;
		}
	}
	return 1;
	
}

