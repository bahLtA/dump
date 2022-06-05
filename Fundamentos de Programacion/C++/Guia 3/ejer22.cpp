#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	string patente,nya,cereal;
	int cant_ton,cont=0,tot_ton=0,sum_soja=0;
	
	cout<<"Ingrese la patente del camion"<<endl;
	getline(cin,patente);
	while (patente!="XYZ 123"){
		cout<<"Ingrese apellido y nombre del remitente"<<endl;
		getline(cin,nya);
		cout<<"Ingrese el tipo de cereal (MAYUSC)"<<endl;
		getline(cin,cereal);
		cout<<"Ingrese la cantidad de toneladas"<<endl;
		cin>>cant_ton;
		tot_ton+=cant_ton;
		if (cereal=="SOJA"){
			sum_soja+=cant_ton;
		}
		cont++;
		cout<<"Ingrese la patente del camion"<<endl;
		getline(cin,patente);
		
	}
	
	cout<<endl<<cont<<" camiones descargaron cereal durante el dia"<<endl;
	cout<<sum_soja<<" toneladas de soja acopiadas durante el dia"<<endl;
	cout<<tot_ton<<" toneladas acopiadas durante el dia"<<endl;
	
	return 0;
}

