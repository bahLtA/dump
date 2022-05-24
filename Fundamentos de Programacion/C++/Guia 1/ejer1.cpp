#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	int peso;
	float dolar,euro,reales;
	cout<<"Ingrese la cantidad de dinero en pesos"<<endl;
	cin>>peso;
	cout<<"Ingrese el precio del Dolar"<<endl;
	cin>>dolar;
	cout<<"Ingrese el precio del Euro"<<endl;
	cin>>euro;
	cout<<"Ingrese el precio del Real"<<endl;
	cin>>reales;
	setfill(' ');
	cout<<"Equivalente en: "<<endl;
	cout<<"Dolares:"<<setw(10)<<"$"<<peso/dolar<<endl;
	cout<<"Euros:"<<setw(10)<<"$"<<peso/euro<<endl;
	cout<<"Reales:"<<setw(10)<<"$"<<peso/reales<<endl;
	
	return 0;
}

