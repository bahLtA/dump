#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int cashtot,bill5,bill10,bill20,bill50,bill100;
	cout<<"Ingrese la cantidad de billetes de $5"<<endl;
	cin>>bill5;
	cout<<"Ingrese la cantidad de billetes de $10"<<endl;
	cin>>bill10;
	cout<<"Ingrese la cantidad de billetes de $20"<<endl;
	cin>>bill20;
	cout<<"Ingrese la cantidad de billetes de $50"<<endl;
	cin>>bill50;
	cout<<"Ingrese la cantidad de billetes de $100"<<endl;
	cin>>bill100;
	cashtot=bill5*5+bill10*10+bill20*20+bill50*50+bill100*100;
	cout<<"El dinero de la caja de seguridad es de: "<<cashtot<<"$";
	return 0;
}

