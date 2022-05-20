#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int pulsaciones,edad;
	cout<<"Ingrese la edad"<<endl;
	cin>>edad;
	pulsaciones=(220-edad)/10;
	cout<<"Las pulsaciones por cada 10 segundos de ejercicio son: "<<pulsaciones;
	return 0;
}

