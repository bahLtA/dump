#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	int cant_empleados,cont=0,contaux,dni,sueldo,sueldoaux,extracciones,dia,monto_retirado,monto_retirado_total;
	int recargo,recargo_tot=0,cont_0=0;
	string nya;
	char cajero;
	
	cout<<"Ingrese la cantidad de empleados"<<endl;
	cin>>cant_empleados;
	while (cont!=cant_empleados){
		cout<<"Ingrese el DNI"<<endl;
		cin>>dni;
		cout<<"Ingrese el nombre y apellido"<<endl;
		cin.ignore();
		getline(cin,nya);
		cout<<"Ingrese el monto del sueldo depositado por la empresa"<<endl;
		cin>>sueldo;
		sueldoaux=sueldo;
		cout<<"Ingrese la cantidad de extracciones realizadas durante el mes"<<endl;
		cin>>extracciones;
		
		recargo=0;
		contaux=0;
		monto_retirado_total=0;
		
		while(contaux!=extracciones){
			cout<<"Ingrese el dia de la extraccion"<<endl;
			cin>>dia;
			cout<<"Ingrese el monto retirado en esa extraccion"<<endl;
			cin>>monto_retirado;
			cout<<"Ingrese si el cajero era contratado ('C') o no contratado ('N')"<<endl;
			cin>>cajero;
			
			if(cajero=='N'){
				recargo+=monto_retirado-(monto_retirado*0.02);
				recargo_tot+=recargo;
			}
			
			if (monto_retirado>sueldoaux){
				cout<<"El monto retirado es mayor al saldo restante, realice esta extraccion nuevamente"<<endl;
			}else{
				sueldoaux-=monto_retirado;
				monto_retirado_total+=monto_retirado;
				contaux++;
			}
			
		}
		if (sueldoaux==0){
			cont_0++;
		}
		setfill('.');
		cout<<"NOMBRE Y APELLIDO: "<<nya<<setw(7)<<"DNI: "<<dni<<setw(7)<<endl;
		cout<<"MONTO TOTAL RETIRADO: $"<<monto_retirado_total<<endl;
		cout<<"MONTO TOTAL DE RECARGO: $"<<recargo<<endl;
		cout<<"SALDO DE LA CUENTA: $"<<sueldoaux<<endl<<endl;
		
		cont++;
	}
	cout<<"Cantidad de empleados con saldo igual a cero: "<<cont_0<<endl;
	cout<<"Monto total en concepto de recargo: $"<<recargo_tot<<endl;
	return 0;
}

