#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n;
	cout<<"Ingrese un numero"<<endl;
	cin>>n;
	//a)
	if (n==0){
		cout<<"El numero es cero"<<endl;
	}else if (n<0){
		cout<<"El numero es negativo"<<endl;
	}else {
		cout<<"El numero es positivo"<<endl;
	}
	cout<<endl;
	//b)
	if (n%2==0){
		cout<<"El numero es par"<<endl;
	}else{
		cout<<"El numero es impar"<<endl;
	}
	cout<<endl;
	//c)
	if (n%5==0 && n%3==0) {
		cout<<"Es multiplo de 5 y 3 a la vez";
	}else if (n%5==0){
		cout<<"Es multiplo de 5 pero no de 3";
	}else if (n%3==0){
		cout<<"Es multiplo de 3 pero no de 5";
	}else{
		cout<<"No es multiplo de 5 ni de 3";
	}
	return 0;
}

