#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	string nya1,nya2;
	int sueldo1,sueldo2;
	int km1,km2;
	int total;
	
	cout<<"Ingrese el nombre del chofer 1"<<endl;
	cin>>nya1;
	cout<<"Ingrese el sueldo basico de "<<nya1<<endl;
	cin>>sueldo1;
	cout<<"Ingrese los kilometros recorridos por "<<nya1<<endl;
	cin>>km1;
	
	cout<<"Ingrese el nombre del chofer 2"<<endl;
	cin>>nya2;
	cout<<"Ingrese el sueldo basico de "<<nya2<<endl;
	cin>>sueldo2;
	cout<<"Ingrese los kilometros recorridos por "<<nya2<<endl;
	cin>>km2;
	
	sueldo1+=(km1*50);
	sueldo2+=(km2*50);
	total=sueldo1+sueldo2;
	
	setfill(' ');
	
	cout<<"LIQUIDACION MENSUAL CHOFERES"<<endl;
	cout<<"NOMBRE DEL CHOFER 1"<<nya1<<setw(10)<<"TOTAL A COBRAR $"<<sueldo1<<endl;
	cout<<"NOMBRE DEL CHOFER 2"<<nya2<<setw(10)<<"TOTAL A COBRAR $"<<sueldo2<<endl;
	cout<<"TOTAL GENERAL $"<<total;
	
	
	return 0;
}

