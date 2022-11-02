#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	string apodo;
	int cantVecesPreso;
	
	ofstream barras;
	barras.open("./BARRAS.txt");
	barras.clear();
	
	
	
	cout<<"Ingrese el apodo del barra"<<endl;
	cin>>apodo;
	while(apodo!="ZZZ"){
		cout<<"Ingrese la cantidad de veces que estuvo preso"<<endl;
		cin>>cantVecesPreso;
		
		barras<<apodo<<" | "<<cantVecesPreso<<endl;
		cout<<"Ingrese el apodo de otro barra"<<endl;
		cin>>apodo;
	}
	
	barras.close();
	return 0;
}

