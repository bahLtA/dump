#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	string nombre_club,nya,socio;
	int cuota_activo,num_socio,tot_pag;
	cout<<"Ingrese el valor de la cuota base"<<endl;
	cin>>cuota_activo;
	cout<<"Ingrese el nombre del club"<<endl;
	getline(cin,nombre_club);
	cout<<"Ingrese el numero de socio"<<endl;
	cin>>num_socio;
	cout<<"Ingrese nombre y apellido del socio"<<endl;
	getline(cin,nya);
	cout<<"Ingrese el tipo de socio (en MAYUSCULAS)"<<endl;
	cin>>socio;
	
	if (socio=="ACTIVO"){
		tot_pag=cuota_activo;
	}else if (socio=="FAMILIAR"){
		tot_pag=cuota_activo+(cuota_activo*0.5);
	}else if (socio=="CADETE"){
		tot_pag=cuota_activo-(cuota_activo*0.2);
	}
	setfill(' ');
	cout<<endl<<"Club: "<<nombre_club<<endl;
	cout<<"Numero de socio: "<<num_socio<<setw(5)<<"Nombre del socio: "<<nya<<endl;
	cout<<"Tipo de socio: "<<socio<<setw(5)<<"Total a pagar: $"<<tot_pag;
	return 0;
}

