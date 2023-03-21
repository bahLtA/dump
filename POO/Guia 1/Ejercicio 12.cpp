#include <iostream>
using namespace std;

bool EsPrimo(int n){
	if(n<=1){
		return false;
	}
	for(int i=2;i<n;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;	
}

int main(int argc, char *argv[]) {
	
	int n,contPrimos=0;
	
	cout<<"Ingrese un valor"<<endl;
	cin>>n;
	
	for(int i=2;i<n;i++){
		if(EsPrimo(i)){
			contPrimos++;
			cout<<i<<"  ";
		}
	}
	cout<<endl<<"Tiene "<<contPrimos<<" numeros primos";
	
	return 0;
}

