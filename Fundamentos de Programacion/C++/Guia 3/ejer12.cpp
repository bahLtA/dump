#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n,sum=0,cont=0;
	
	while (cont<10 && sum<=100){
		cout<<"Ingrese un numero"<<endl;
		cin>>n;
		cont++;
		sum+=n;
		if (cont>=10){
			cout<<"Se introdujeron mas de 10 numeros";
		}
		if (sum>=100){
			cout<<"La suma es mayor a 100";
		}
	}
	return 0;
}

