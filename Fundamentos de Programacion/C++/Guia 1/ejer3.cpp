#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	string patente;
	int hora_1er,min_1er,seg_1er,hora_2do,min_2do,seg_2do;
	int hora_final_1,hora_final_2;
	int velocidad;
	int hora_final;
	cout<<"Ingrese la patente del auto"<<endl;
	getline(cin,patente)
	cout<<"Ingrese la hora de paso por el 1er puesto (HH)"<<endl;
	cin>>hora_1er;
	cout<<"Ingrese el minuto de paso por el 1er puesto (MM)"<<endl;
	cin>>min_1er;
	cout<<"Ingrese el segundo de paso por el 1er puesto (SS)"<<endl;
	cin>>seg_1er;
	cout<<"Ingrese la hora de paso por el 2do puesto (HH)"<<endl;
	cin>>hora_2do;
	cout<<"Ingrese el minuto de paso por el 2do puesto (MM)"<<endl;
	cin>>min_2do;
	cout<<"Ingrese el segundo de paso por el 2do puesto (SS)"<<endl;
	cin>>seg_2do;
	
	hora_final_1=hora_1er+min_1er/60+seg_1er/3600;
	hora_final_2=hora_2do+min_2do/60+seg_2do/3600;
	hora_final=hora_final_2-hora_final_1;
	velocidad=7.5/hora_final;
	
	cout<<"El auto "<<patente<<" Ingreso a las "<<hora_1er<<":"<<min_1er<<":"<<seg_1er<<endl;
	cout<<"y salio a las "<<hora_2do<<":"<<min_2do<<":"<<seg_2do<<endl;
	cout<<"Su velocidad promedio en el pueblo fue de "<<velocidad<<" km/h";
	return 0;
}

