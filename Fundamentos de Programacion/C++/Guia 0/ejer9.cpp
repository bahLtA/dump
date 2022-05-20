#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float sueldoneto,aportejub,sueldoliquido;
	cout<<"Ingrese el sueldo neto de la persona"<<endl;
	cin>>sueldoneto;
	aportejub=sueldoneto*0.16;
	sueldoliquido=sueldoneto-aportejub;
	cout<<"El sueldo liquido es de: "<<sueldoliquido<<"$";
	return 0;
}

