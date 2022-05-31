#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n,aux=1,fact=1;
	cout<<"Ingrese un numero"<<endl;
	cin>>n;
	if (n<0){
		while (n<0){
			cout<<"el numero es negativo, ingreselo nuevamente"<<endl;
			cin>>n;
		}
	}
	
	while (aux!=n+1){
		fact*=aux;
		aux++;
	}
	cout<<"el factorial de "<<n<<" es: "<<fact;
	return 0;
}

