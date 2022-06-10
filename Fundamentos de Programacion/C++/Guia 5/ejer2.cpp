#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int NUM[10],maximo=0,minimo=99999,pares=0;
	int esta;
	
	for (int i=0; i<10; i++){
		cout<<"Ingrese un numero"<<endl;
		cin>>NUM[i];
		//c)
		if (NUM[i]<minimo){
			minimo=NUM[i];
		}
		//b)
		if (NUM[i]>maximo){
			maximo=NUM[i];
		}
		//a)
		if (NUM[i]%2==0){
			pares++;
		}
	}
	
	cout<<"Numeros pares: "<<pares<<endl;
	cout<<"Valor maximo: "<<maximo<<endl;
	cout<<"Valor minimo: "<<minimo<<endl;
	
	
	//d)
	cout<<"Ingrese un numero para chequear que este en el arreglo"<<endl;
	cin>>esta;
	for (int i=0; i<10;i++){
		if (esta==NUM[i]){
			cout<<"El numero esta en la posicion "<<i+1<<endl;
		}
	}
	
	
	
	return 0;
}

