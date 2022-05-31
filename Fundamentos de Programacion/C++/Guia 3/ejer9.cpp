#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int cont=0,n,media,suma=0;
	while(n!=0){
		cout<<"Ingrese un numero"<<endl;
		cin>>n;
		if (n==0){
			cont--;
		}
		cont++;
		suma+=n;
	}
	media=suma/cont;
	cout<<"la media de "<<cont<<" numeros es: "<<media;
	return 0;
}

