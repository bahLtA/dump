#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	int litros,cod,precio_super,precio_premium,precio_diesel,sum_super=0,sum_premium=0,sum_diesel=0,venta,tot=0;
	string patente,tipo;
	cout<<"Ingrese el precio del super"<<endl;
	cin>>precio_super;
	cout<<"Ingrese el precio del premium"<<endl;
	cin>>precio_premium;
	cout<<"Ingrese el precio del diesel"<<endl;
	cin>>precio_diesel;
	
	cout<<"Ingrese una patente"<<endl;
	cin.ignore();
	getline(cin,patente);
	
	while(patente!="xxx"){
		cout<<"Ingrese el codigo del empleado"<<endl;
		cin>>cod;
		cout<<"Ingrese el tipo de combustible (Super, Premium, Diesel)"<<endl;
		cin.ignore();
		getline(cin,tipo);
		cout<<"Ingrese la cantidad de litros"<<endl;
		cin>>litros;
		
		if (tipo=="Super"){
			venta=precio_super*litros;
			sum_super+=litros;
		}else if (tipo=="Premium"){
			venta=precio_premium*litros;
			sum_premium+=litros;
		}else if (tipo=="Diesel"){
			venta=precio_diesel*litros;
			sum_diesel+=litros;
		}
		tot+=venta;
	}
	cout<<endl<<"Litros de Super: "<<sum_super<<endl;
	cout<<"Litros de Premium: "<<sum_premium<<endl;
	cout<<"Litros de Diesel: "<<sum_diesel<<endl;
	cout<<"Monto total recaudado por la estacion: $"<<tot;
	return 0;
}

