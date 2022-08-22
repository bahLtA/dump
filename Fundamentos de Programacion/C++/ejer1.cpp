#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n, pos,arr[999],dato,i=0;
	bool band;
	
	cout<<"Ingrese N"<<endl;
	cin>>n;
	
	for (int i=0;i<n;i++){
		cout<<"Ingrese el dato "<<i+1<<endl;
		cin>>arr[i];
	}
	
	cout<<"Ingrese el numero a buscar"<<endl;
	cin>>dato;
	
	while(!band && i<=n){
		if (arr[i]==dato){
			band=true;
		}
		i++;
	}
	
	if (band){
		cout<<"se encontro el dato en la posicion "<<i;
	}else{
		cout<<"El dato no se encontro";
	}
	
	
	
	return 0;
}

