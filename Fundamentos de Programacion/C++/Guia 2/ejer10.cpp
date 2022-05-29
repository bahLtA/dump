#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	string nya;
	int cat,antiguedad,sueldo,sueldo_tot,monto_ant;
	cout<<"Ingrese apellido y nombre"<<endl;
	getline(cin,nya);
	cout<<"Ingrese la categoria"<<endl;
	cin>>cat;
	cout<<"Ingrese la antiguedad"<<endl;
	cin>>antiguedad;
	switch (cat) {
	case 1: sueldo=60000;
	break;
	case 2: sueldo=50000;
	break;
	case 3: sueldo=40000;
	break;
	case 4: sueldo=30000;
	break;
	}
	if (antiguedad<=10){
		monto_ant=sueldo*0.2;
	}else if (antiguedad<15){
		monto_ant=sueldo*0.5;
	}else if (antiguedad<20){
		monto_ant=sueldo*0.8;
	}else{
		monto_ant=sueldo;
	}
	sueldo_tot=sueldo+monto_ant;
	setfill('.');
	cout<<endl<<"Apellido y Nombre: "<<nya<<endl;
	cout<<"Categoria: "<<cat<<setw(10)<<"Sueldo Basico: $"<<sueldo<<endl;
	cout<<"Antiguedad: "<<antiguedad<<" años"<<setw(10)<<"Monto antiguedad: $"<<monto_ant<<endl;
	cout<<"Sueldo total: $"<<sueldo_tot;
	//LA PORONGA DEL IOMANIP NO FUNCA Y LA CONCHA DE MI HERMANA
	return 0;
}

